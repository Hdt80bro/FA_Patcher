/*==============================================================================
    Copyright (c) 2005-2010 Joel de Guzman
    Copyright (c) 2010 Thomas Heller

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<2>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<2>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            1
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<3>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<3>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            2
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<4>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<4>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            3
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<5>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<5>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            4
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<6>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<6>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            5
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<7>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<7>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            6
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<8>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<8>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            7
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<9>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<9>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            8
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<10>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<10>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            9
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<11>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<11>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            10
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<12>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<12>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            11
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<13>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<13>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            12
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<14>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<14>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            13
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<15>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<15>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            14
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<16>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<16>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            15
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<17>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<17>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            16
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<18>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<18>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            17
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<19>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<19>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            18
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<20>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<20>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            19
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<21>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<21>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            20
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<22>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<22>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            21
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<23>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<23>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            22
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<24>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<24>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            23
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<25>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<25>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            24
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<26>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<26>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            25
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<27>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<27>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            26
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<28>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<28>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            27
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<29>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<29>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            28
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<30>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<30>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            29
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<31>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<31>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            30
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<32>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<32>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            31
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<33>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<33>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            32
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<34>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<34>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            33
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<35>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<35>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            34
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<36>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<36>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            35
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<37>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 36 >::type >::type case36;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case36, 0 >::type >::type >::type case_label36;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label36::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 36>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<37>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            36
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<38>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 36 >::type >::type case36;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case36, 0 >::type >::type >::type case_label36;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 37 >::type >::type case37;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case37, 0 >::type >::type >::type case_label37;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label36::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 36>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label37::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 37>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<38>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 36 >::type >::type case36;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case36, 0 >::type >::type >::type case_label36;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label36::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 36>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            37
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<39>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 36 >::type >::type case36;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case36, 0 >::type >::type >::type case_label36;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 37 >::type >::type case37;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case37, 0 >::type >::type >::type case_label37;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 38 >::type >::type case38;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case38, 0 >::type >::type >::type case_label38;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label36::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 36>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label37::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 37>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label38::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 38>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<39>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 36 >::type >::type case36;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case36, 0 >::type >::type >::type case_label36;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 37 >::type >::type case37;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case37, 0 >::type >::type >::type case_label37;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label36::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 36>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label37::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 37>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            38
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}







template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<40>
    , mpl::false_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 36 >::type >::type case36;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case36, 0 >::type >::type >::type case_label36;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 37 >::type >::type case37;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case37, 0 >::type >::type >::type case_label37;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 38 >::type >::type case38;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case38, 0 >::type >::type >::type case_label38;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 39 >::type >::type case39;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case39, 0 >::type >::type >::type case_label39;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label36::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 36>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label37::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 37>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label38::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 38>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label39::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 39>(fusion::begin(flat_view)) ) ), ctx );
		break;
	}
}
template <typename Context, typename Cond, typename Cases>
result_type
evaluate(
    Context const & ctx
    , Cond const & cond
    , Cases const & cases
    , mpl::int_<40>
    , mpl::true_
) const
{
	typedef
	typename proto::result_of::flatten<Cases const&>::type
	flat_view_type;
	typedef
	typename fusion::result_of::begin<flat_view_type>::type
	flat_view_begin;
	flat_view_type flat_view(proto::flatten(cases));
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 0 >::type >::type case0;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case0, 0 >::type >::type >::type case_label0;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 1 >::type >::type case1;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case1, 0 >::type >::type >::type case_label1;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 2 >::type >::type case2;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case2, 0 >::type >::type >::type case_label2;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 3 >::type >::type case3;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case3, 0 >::type >::type >::type case_label3;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 4 >::type >::type case4;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case4, 0 >::type >::type >::type case_label4;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 5 >::type >::type case5;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case5, 0 >::type >::type >::type case_label5;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 6 >::type >::type case6;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case6, 0 >::type >::type >::type case_label6;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 7 >::type >::type case7;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case7, 0 >::type >::type >::type case_label7;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 8 >::type >::type case8;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case8, 0 >::type >::type >::type case_label8;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 9 >::type >::type case9;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case9, 0 >::type >::type >::type case_label9;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 10 >::type >::type case10;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case10, 0 >::type >::type >::type case_label10;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 11 >::type >::type case11;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case11, 0 >::type >::type >::type case_label11;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 12 >::type >::type case12;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case12, 0 >::type >::type >::type case_label12;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 13 >::type >::type case13;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case13, 0 >::type >::type >::type case_label13;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 14 >::type >::type case14;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case14, 0 >::type >::type >::type case_label14;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 15 >::type >::type case15;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case15, 0 >::type >::type >::type case_label15;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 16 >::type >::type case16;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case16, 0 >::type >::type >::type case_label16;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 17 >::type >::type case17;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case17, 0 >::type >::type >::type case_label17;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 18 >::type >::type case18;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case18, 0 >::type >::type >::type case_label18;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 19 >::type >::type case19;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case19, 0 >::type >::type >::type case_label19;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 20 >::type >::type case20;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case20, 0 >::type >::type >::type case_label20;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 21 >::type >::type case21;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case21, 0 >::type >::type >::type case_label21;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 22 >::type >::type case22;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case22, 0 >::type >::type >::type case_label22;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 23 >::type >::type case23;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case23, 0 >::type >::type >::type case_label23;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 24 >::type >::type case24;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case24, 0 >::type >::type >::type case_label24;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 25 >::type >::type case25;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case25, 0 >::type >::type >::type case_label25;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 26 >::type >::type case26;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case26, 0 >::type >::type >::type case_label26;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 27 >::type >::type case27;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case27, 0 >::type >::type >::type case_label27;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 28 >::type >::type case28;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case28, 0 >::type >::type >::type case_label28;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 29 >::type >::type case29;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case29, 0 >::type >::type >::type case_label29;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 30 >::type >::type case30;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case30, 0 >::type >::type >::type case_label30;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 31 >::type >::type case31;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case31, 0 >::type >::type >::type case_label31;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 32 >::type >::type case32;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case32, 0 >::type >::type >::type case_label32;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 33 >::type >::type case33;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case33, 0 >::type >::type >::type case_label33;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 34 >::type >::type case34;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case34, 0 >::type >::type >::type case_label34;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 35 >::type >::type case35;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case35, 0 >::type >::type >::type case_label35;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 36 >::type >::type case36;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case36, 0 >::type >::type >::type case_label36;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 37 >::type >::type case37;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case37, 0 >::type >::type >::type case_label37;
	typedef typename fusion::result_of::deref< typename fusion::result_of::advance_c< flat_view_begin, 38 >::type >::type case38;
	typedef typename proto::detail::uncvref< typename proto::result_of::value< typename proto::result_of::child_c< case38, 0 >::type >::type >::type case_label38;
	switch(boost::phoenix::eval(cond, ctx))
	{
	case case_label0::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 0>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label1::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 1>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label2::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 2>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label3::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 3>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label4::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 4>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label5::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 5>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label6::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 6>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label7::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 7>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label8::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 8>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label9::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 9>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label10::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 10>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label11::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 11>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label12::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 12>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label13::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 13>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label14::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 14>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label15::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 15>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label16::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 16>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label17::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 17>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label18::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 18>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label19::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 19>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label20::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 20>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label21::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 21>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label22::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 22>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label23::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 23>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label24::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 24>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label25::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 25>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label26::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 26>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label27::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 27>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label28::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 28>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label29::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 29>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label30::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 30>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label31::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 31>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label32::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 32>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label33::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 33>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label34::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 34>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label35::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 35>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label36::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 36>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label37::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 37>(fusion::begin(flat_view)) ) ), ctx );
		break;
	case case_label38::value :
		boost::phoenix::eval( proto::child_c<1>( fusion::deref( fusion::advance_c< 38>(fusion::begin(flat_view)) ) ), ctx );
		break;
	default:
		boost::phoenix::eval(
		    proto::child_c<0>(
		        fusion::deref(
		            fusion::advance_c<
		            39
		            >(fusion::begin(flat_view))
		        )
		    )
		    , ctx
		);
	}
}
