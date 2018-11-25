/*==============================================================================
    Copyright (c) 2016 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
namespace boost
{
namespace phoenix
{
namespace tag
{
struct new_ {};
template <typename Ostream> inline Ostream &operator<<( Ostream & os, new_)
{
	os << "new_";
	return os;
}
} namespace expression
{
template < typename A0 = void, typename A1 = void, typename A2 = void, typename A3 = void, typename A4 = void, typename A5 = void, typename A6 = void, typename A7 = void, typename A8 = void, typename A9 = void, typename A10 = void, typename Dummy = void > struct new_;
template < typename A0, typename A1 > struct new_< A0, A1 > : boost::phoenix::expr< tag:: new_, A0, A1 > {};
template < typename A0, typename A1, typename A2 > struct new_< A0, A1, A2 > : boost::phoenix::expr< tag:: new_, A0, A1, A2 > {};
template < typename A0, typename A1, typename A2, typename A3 > struct new_< A0, A1, A2, A3 > : boost::phoenix::expr< tag:: new_, A0, A1, A2, A3 > {};
template < typename A0, typename A1, typename A2, typename A3, typename A4 > struct new_< A0, A1, A2, A3, A4 > : boost::phoenix::expr< tag:: new_, A0, A1, A2, A3, A4 > {};
template < typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct new_< A0, A1, A2, A3, A4, A5 > : boost::phoenix::expr< tag:: new_, A0, A1, A2, A3, A4, A5 > {};
template < typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct new_< A0, A1, A2, A3, A4, A5, A6 > : boost::phoenix::expr< tag:: new_, A0, A1, A2, A3, A4, A5, A6 > {};
template < typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct new_< A0, A1, A2, A3, A4, A5, A6, A7 > : boost::phoenix::expr< tag:: new_, A0, A1, A2, A3, A4, A5, A6, A7 > {};
template < typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct new_< A0, A1, A2, A3, A4, A5, A6, A7, A8 > : boost::phoenix::expr< tag:: new_, A0, A1, A2, A3, A4, A5, A6, A7, A8 > {};
template < typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct new_< A0, A1, A2, A3, A4, A5, A6, A7, A8, A9 > : boost::phoenix::expr< tag:: new_, A0, A1, A2, A3, A4, A5, A6, A7, A8, A9 > {};
template < typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct new_< A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10 > : boost::phoenix::expr< tag:: new_, A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10 > {};
} namespace rule
{
struct new_ : expression:: new_ < proto::terminal<detail::target<proto::_> >, boost::proto::vararg< meta_grammar > > {};
} namespace functional
{
typedef boost::proto::functional::make_expr< tag:: new_ > make_new_;
} namespace result_of
{
template <typename A0 = void, typename A1 = void, typename A2 = void, typename A3 = void, typename A4 = void, typename A5 = void, typename A6 = void, typename A7 = void, typename A8 = void, typename A9 = void, typename Dummy = void> struct make_new_;
template <typename A0> struct make_new_ <A0> : boost::result_of< functional:: make_new_( A0 ) > {};
template <typename A0, typename A1> struct make_new_ <A0, A1> : boost::result_of< functional:: make_new_( A0, A1 ) > {};
template <typename A0, typename A1, typename A2> struct make_new_ <A0, A1, A2> : boost::result_of< functional:: make_new_( A0, A1, A2 ) > {};
template <typename A0, typename A1, typename A2, typename A3> struct make_new_ <A0, A1, A2, A3> : boost::result_of< functional:: make_new_( A0, A1, A2, A3 ) > {};
template <typename A0, typename A1, typename A2, typename A3, typename A4> struct make_new_ <A0, A1, A2, A3, A4> : boost::result_of< functional:: make_new_( A0, A1, A2, A3, A4 ) > {};
template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5> struct make_new_ <A0, A1, A2, A3, A4, A5> : boost::result_of< functional:: make_new_( A0, A1, A2, A3, A4, A5 ) > {};
template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6> struct make_new_ <A0, A1, A2, A3, A4, A5, A6> : boost::result_of< functional:: make_new_( A0, A1, A2, A3, A4, A5, A6 ) > {};
template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7> struct make_new_ <A0, A1, A2, A3, A4, A5, A6, A7> : boost::result_of< functional:: make_new_( A0, A1, A2, A3, A4, A5, A6, A7 ) > {};
template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8> struct make_new_ <A0, A1, A2, A3, A4, A5, A6, A7, A8> : boost::result_of< functional:: make_new_( A0, A1, A2, A3, A4, A5, A6, A7, A8 ) > {};
} template <typename A0> inline typename result_of:: make_new_< A0 >::type make_new_(A0 const& a0)
{
	return functional::make_new_()(a0);
} template <typename A0, typename A1> inline typename result_of:: make_new_< A0, A1 >::type make_new_(A0 const& a0, A1 const& a1)
{
	return functional::make_new_()(a0, a1);
} template <typename A0, typename A1, typename A2> inline typename result_of:: make_new_< A0, A1, A2 >::type make_new_(A0 const& a0, A1 const& a1, A2 const& a2)
{
	return functional::make_new_()(a0, a1, a2);
} template <typename A0, typename A1, typename A2, typename A3> inline typename result_of:: make_new_< A0, A1, A2, A3 >::type make_new_(A0 const& a0, A1 const& a1, A2 const& a2, A3 const& a3)
{
	return functional::make_new_()(a0, a1, a2, a3);
} template <typename A0, typename A1, typename A2, typename A3, typename A4> inline typename result_of:: make_new_< A0, A1, A2, A3, A4 >::type make_new_(A0 const& a0, A1 const& a1, A2 const& a2, A3 const& a3, A4 const& a4)
{
	return functional::make_new_()(a0, a1, a2, a3, a4);
} template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5> inline typename result_of:: make_new_< A0, A1, A2, A3, A4, A5 >::type make_new_(A0 const& a0, A1 const& a1, A2 const& a2, A3 const& a3, A4 const& a4, A5 const& a5)
{
	return functional::make_new_()(a0, a1, a2, a3, a4, a5);
} template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6> inline typename result_of:: make_new_< A0, A1, A2, A3, A4, A5, A6 >::type make_new_(A0 const& a0, A1 const& a1, A2 const& a2, A3 const& a3, A4 const& a4, A5 const& a5, A6 const& a6)
{
	return functional::make_new_()(a0, a1, a2, a3, a4, a5, a6);
} template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7> inline typename result_of:: make_new_< A0, A1, A2, A3, A4, A5, A6, A7 >::type make_new_(A0 const& a0, A1 const& a1, A2 const& a2, A3 const& a3, A4 const& a4, A5 const& a5, A6 const& a6, A7 const& a7)
{
	return functional::make_new_()(a0, a1, a2, a3, a4, a5, a6, a7);
} template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8> inline typename result_of:: make_new_< A0, A1, A2, A3, A4, A5, A6, A7, A8 >::type make_new_(A0 const& a0, A1 const& a1, A2 const& a2, A3 const& a3, A4 const& a4, A5 const& a5, A6 const& a6, A7 const& a7, A8 const& a8)
{
	return functional::make_new_()(a0, a1, a2, a3, a4, a5, a6, a7, a8);
}
}
} namespace boost
{
namespace phoenix
{
template <typename Dummy> struct meta_grammar::case_< :: boost :: phoenix :: tag:: new_, Dummy > : enable_rule< :: boost :: phoenix :: rule:: new_, Dummy > {};
}
}
