# What is this project?
A tool for patching binary files(.exe)

FAF's patches are contained at: https://github.com/FAForever/FA-Binary-Patches

# How To Build

- To build patcher:
  - Cd into patcher directory and `target make` or `mingw32-make`

- To build patch:
  - Run `FaP.exe` to be create default `config.txt`.
  - If necessary, correct the config file.
  - Put patch files into patcher dir(hooks, section)
  - Put base file(the copy will be patched) into patcher dir.
  - Run `FaP.exe`

- Config file options:
  - `oldfile` specifies the file to be patched(base file)
  - `newfile` specifies the file to be make.
  - `newsect` the name of the section to be created(begins with `.`, max 8 chars)
  - `sectsize` the size(hex) of `newsect`(to disable it, set 0)

# How make patches
- Make `hooks` & `section` dirs.
  - `hooks` for patches putting into existing sections.
  - `section` for putting into new section.
- Put .cpp files.
- For `section` no special rules.
- Hooks rules:
  - In each hook file may be several hooks.
  - For each hook need header: `asm(".section h*; .set h*,**;")`
    - `*` is hook name(max 7 chars), `**` virtual address to be placed.
  - For using symbols of `section` from asm need use macro `QU`.
    - Example: `"JMP "QU(BuildUnit)";"`
- Signature patches
  - Make `SigPatches.txt` file.
  - Available line types:
    - Empty line.
    - Line starts with `//` - comment.
    - Line pair, where first line is signature, second is patch.
  - Signature and patch is hex bytes, that may be separate by space.
  - `??` in signature or patch is skip byte.
  - Patch may be shorten then signature. But not longer.
