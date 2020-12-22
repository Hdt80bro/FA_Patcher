
#include "hooks.hpp"

namespace fs = boost::filesystem;

namespace binPatcher
{

Hooks::Hooks(bool hook_format, string filename)
{
	if(hook_format)
	{
		fast_Compile_Hooks = true;
	}
	else
	{
		indiv_Compile_Hooks = true;
	}
	if(filename.empty())
	{
		cout<<fg::red<<"No output filename passed in to Hooks::Hooks() constructor."<<endl;
		cout<<"In function "<<__func__<<endl;
		debug_pause();
	}
	else
	{
		filename_out = filename;
	}
}

void Hooks::align_hook(int align_sizeL,string filename, string command)
{
	filename = rem_extension(filename);
	filename.append(".o");
	gpp_link(filename, make+" hook_gpp_link align_size=" + to_string(align_sizeL));
}

void Hooks::apply_Hook(string current_file, int offset, FileIO& f_out)
{
	FileIO f_in(current_file, ios::in | ios::binary | ios::ate);
	vector<char> hook_F = f_in.fReadBinaryFile();
	Bytes_to_write = f_in.get_bytes();

	while(Bytes_to_write == false) //in case the hook is bigger then supposable allocate more memory.
	{
		align_sizeL = f_in.get_bytes(Bytes_to_write) * 2;
		align_hook(align_sizeL, current_file, make+" hook_gpp_link PRIME_NAME=");
		Bytes_to_write = f_in.get_bytes(Bytes_to_write);
	}

#ifdef DEBUG
	cout<<fg::magenta<<"APPLY HOOK : "<<current_file <<"    Number of instructions: "<<Bytes_to_write<<fg::reset<<endl;
#endif

	f_out.fWriteBinaryFile(hook_F, offset, Bytes_to_write);

#ifdef DEBUG
	cout<<"\n";
#endif
}

void Hooks::parse_build(int offset, string alone_Filename)
{
	fs::path p("./build");
	fs::directory_iterator end_itr;
	alone_Filename = rem_extension(alone_Filename);
	FileIO f_out(filename_out, ios::out |ios::in |ios::binary);
	string current_file;
	for (fs::directory_iterator itr(p); itr != end_itr; ++itr)
	{
		if (fs::is_regular_file(itr->path()))
		{
			current_file = itr->path().string();
			if(fs::extension(current_file).compare(".o")==0)
			{
				if(current_file.find(alone_Filename)!=string::npos)
				{
					if(!gpp_link(current_file, make+" hook_gpp_link"))
					{
						cout<<fg::red<<"gpp_link failed."<<endl;
						cout<<"In function "<<__func__<<endl;
						debug_pause();
					}
					break;
				}
			}
		}
	}
	for (fs::directory_iterator itr(p); itr != end_itr; ++itr)
	{
		if (fs::is_regular_file(itr->path()))
		{
			current_file = itr->path().string();
			if(fs::extension(current_file).compare(".bin")==0)
			{
				if(current_file.find(alone_Filename)!=string::npos)
				{
					apply_Hook(current_file, offset, f_out);
					break;
				}
			}
		}
	}
}

void Hooks::build_O(string outPath, string fileName)
{
#ifdef DEBUG
	cout<<fg::cyan<<"BUILDING .O FILES --------------------------------->"<<fg::reset<<endl;
	cout<<"\n";
#endif

	string command = make+" _hooks OBJ_NAME_=";
	command.append(outPath);
	fileName.insert(0, " OBJS=");
	command.append(fileName);
	if(system(&command[0]))
	{
		cout<<fg::red<<"Error when calling "<<command<<endl;
		cout<<"In function "<<__func__<<endl;
		debug_pause();
	}

#ifdef DEBUG
	cout<<"\n";
#endif
}

int Hooks::compile_Hook(string current_file, string outPath, string fileName)
{
	FileIO hook(current_file);
	int offset = parse_offset(hook, "ROffset = ");

#ifdef DEBUG
	cout<<hex<<"ROffset = "<<offset<<dec<<endl;
#endif

	if(fast_Compile_Hooks)
	{
		if(system(&_fast_hooks[0]))
		{
			cout<<fg::red<<"Error when calling '_fast_hooks' "<<endl;
			cout<<"In function "<<__func__<<endl;
			debug_pause();
		}
		fast_Compile_Hooks = false;
	}
	else if (indiv_Compile_Hooks)
	{
		build_O(outPath, fileName);
	}
	parse_build(offset, fileName);
	return 1;
}

void Hooks::parse_hooks()
{
	fs::path p("\hooks");
	fs::directory_iterator end_itr;

#ifdef DEBUG
	cout<<"\n";
	cout<<fg::cyan<<"Available hooks : "<<fg::reset<<endl;
	cout<<"\n";
#endif

	for (fs::directory_iterator itr(p); itr != end_itr; ++itr)
	{
		if (fs::is_regular_file(itr->path()) && itr->path().extension() == ".cpp")
		{
			string current_file = itr->path().string();
			string fileName = itr->path().filename().string();
#ifdef DEBUG
			cout<<style::bold<<fileName<<style::reset<<endl;
#endif
			string outPath = fs::basename(current_file);
			outPath.append(".o");
			outPath.insert(0,"../build/");
			compile_Hook(current_file,outPath,fileName);
		}
		else
		{
			cout<<fg::red<<"Ignore hook(not .cpp extension) : "<<itr->path().filename().string()<<fg::reset<<endl;
		}
	}
}

} //namespace binPatcher