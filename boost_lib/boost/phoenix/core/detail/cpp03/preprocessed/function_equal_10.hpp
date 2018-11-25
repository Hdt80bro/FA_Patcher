/*==============================================================================
    Copyright (c) 2001-2010 Joel de Guzman
    Copyright (c) 2004 Daniel Wallin
    Copyright (c) 2010 Thomas Heller

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 1 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) ;
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 2 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) );
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 3 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) ) && function_equal_()( proto::child_c< 2 >(e1), proto::child_c< 2 >(e2) );
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 4 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) ) && function_equal_()( proto::child_c< 2 >(e1), proto::child_c< 2 >(e2) ) && function_equal_()( proto::child_c< 3 >(e1), proto::child_c< 3 >(e2) );
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 5 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) ) && function_equal_()( proto::child_c< 2 >(e1), proto::child_c< 2 >(e2) ) && function_equal_()( proto::child_c< 3 >(e1), proto::child_c< 3 >(e2) ) && function_equal_()( proto::child_c< 4 >(e1), proto::child_c< 4 >(e2) );
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 6 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) ) && function_equal_()( proto::child_c< 2 >(e1), proto::child_c< 2 >(e2) ) && function_equal_()( proto::child_c< 3 >(e1), proto::child_c< 3 >(e2) ) && function_equal_()( proto::child_c< 4 >(e1), proto::child_c< 4 >(e2) ) && function_equal_()( proto::child_c< 5 >(e1), proto::child_c< 5 >(e2) );
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 7 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) ) && function_equal_()( proto::child_c< 2 >(e1), proto::child_c< 2 >(e2) ) && function_equal_()( proto::child_c< 3 >(e1), proto::child_c< 3 >(e2) ) && function_equal_()( proto::child_c< 4 >(e1), proto::child_c< 4 >(e2) ) && function_equal_()( proto::child_c< 5 >(e1), proto::child_c< 5 >(e2) ) && function_equal_()( proto::child_c< 6 >(e1), proto::child_c< 6 >(e2) );
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 8 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) ) && function_equal_()( proto::child_c< 2 >(e1), proto::child_c< 2 >(e2) ) && function_equal_()( proto::child_c< 3 >(e1), proto::child_c< 3 >(e2) ) && function_equal_()( proto::child_c< 4 >(e1), proto::child_c< 4 >(e2) ) && function_equal_()( proto::child_c< 5 >(e1), proto::child_c< 5 >(e2) ) && function_equal_()( proto::child_c< 6 >(e1), proto::child_c< 6 >(e2) ) && function_equal_()( proto::child_c< 7 >(e1), proto::child_c< 7 >(e2) );
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 9 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) ) && function_equal_()( proto::child_c< 2 >(e1), proto::child_c< 2 >(e2) ) && function_equal_()( proto::child_c< 3 >(e1), proto::child_c< 3 >(e2) ) && function_equal_()( proto::child_c< 4 >(e1), proto::child_c< 4 >(e2) ) && function_equal_()( proto::child_c< 5 >(e1), proto::child_c< 5 >(e2) ) && function_equal_()( proto::child_c< 6 >(e1), proto::child_c< 6 >(e2) ) && function_equal_()( proto::child_c< 7 >(e1), proto::child_c< 7 >(e2) ) && function_equal_()( proto::child_c< 8 >(e1), proto::child_c< 8 >(e2) );
}
template <typename Expr1> result_type evaluate( Expr1 const& e1, Expr1 const& e2, mpl::long_< 10 > ) const
{
	return function_equal_()( proto::child_c<0>(e1), proto::child_c<0>(e2) ) && function_equal_()( proto::child_c< 1 >(e1), proto::child_c< 1 >(e2) ) && function_equal_()( proto::child_c< 2 >(e1), proto::child_c< 2 >(e2) ) && function_equal_()( proto::child_c< 3 >(e1), proto::child_c< 3 >(e2) ) && function_equal_()( proto::child_c< 4 >(e1), proto::child_c< 4 >(e2) ) && function_equal_()( proto::child_c< 5 >(e1), proto::child_c< 5 >(e2) ) && function_equal_()( proto::child_c< 6 >(e1), proto::child_c< 6 >(e2) ) && function_equal_()( proto::child_c< 7 >(e1), proto::child_c< 7 >(e2) ) && function_equal_()( proto::child_c< 8 >(e1), proto::child_c< 8 >(e2) ) && function_equal_()( proto::child_c< 9 >(e1), proto::child_c< 9 >(e2) );
}
