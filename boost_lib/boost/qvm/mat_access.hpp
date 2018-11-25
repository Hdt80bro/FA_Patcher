//Copyright (c) 2008-2016 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef UUID_47B1D1217B411E08424FA0ADFD72085
#define UUID_47B1D1217B411E08424FA0ADFD72085

#include <boost/qvm/mat_traits.hpp>
#include <boost/qvm/inline.hpp>
#include <boost/qvm/static_assert.hpp>
#include <boost/qvm/enable_if.hpp>

namespace
	boost
{
namespace
	qvm
{
////////////////////////////////////////////////

template <int R,int C,class M>
BOOST_QVM_INLINE_TRIVIAL
typename enable_if_c<
is_mat<M>::value,
       typename mat_traits<M>::scalar_type>::type
       A( M const & a )
{
	BOOST_STATIC_ASSERT(R>=0);
	BOOST_STATIC_ASSERT(R<mat_traits<M>::rows);
	BOOST_STATIC_ASSERT(C>=0);
	BOOST_STATIC_ASSERT(C<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<R,C>(a);
}

template <int R,int C,class M>
BOOST_QVM_INLINE_TRIVIAL
typename enable_if_c<
is_mat<M>::value,
       typename mat_traits<M>::scalar_type &>::type
       A( M & a )
{
	BOOST_STATIC_ASSERT(R>=0);
	BOOST_STATIC_ASSERT(R<mat_traits<M>::rows);
	BOOST_STATIC_ASSERT(C>=0);
	BOOST_STATIC_ASSERT(C<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<R,C>(a);
}

////////////////////////////////////////////////

template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A00( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A01( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A02( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A03( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A04( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A05( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A06( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A07( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A08( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A09( M const & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<0,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A10( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A11( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A12( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A13( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A14( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A15( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A16( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A17( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A18( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A19( M const & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<1,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A20( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A21( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A22( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A23( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A24( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A25( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A26( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A27( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A28( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A29( M const & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<2,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A30( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A31( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A32( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A33( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A34( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A35( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A36( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A37( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A38( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A39( M const & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<3,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A40( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A41( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A42( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A43( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A44( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A45( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A46( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A47( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A48( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A49( M const & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<4,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A50( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A51( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A52( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A53( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A54( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A55( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A56( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A57( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A58( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A59( M const & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<5,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A60( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A61( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A62( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A63( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A64( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A65( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A66( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A67( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A68( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A69( M const & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<6,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A70( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A71( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A72( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A73( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A74( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A75( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A76( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A77( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A78( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A79( M const & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<7,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A80( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A81( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A82( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A83( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A84( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A85( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A86( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A87( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A88( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A89( M const & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<8,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A90( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A91( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A92( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A93( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A94( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A95( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A96( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A97( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A98( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type>::type A99( M const & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template read_element<9,9>(a);
}

template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A00( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A01( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A02( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A03( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A04( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A05( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A06( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A07( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A08( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A09( M & a )
{
	BOOST_STATIC_ASSERT(0<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<0,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A10( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A11( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A12( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A13( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A14( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A15( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A16( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A17( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A18( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A19( M & a )
{
	BOOST_STATIC_ASSERT(1<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<1,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A20( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A21( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A22( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A23( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A24( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A25( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A26( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A27( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A28( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A29( M & a )
{
	BOOST_STATIC_ASSERT(2<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<2,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A30( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A31( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A32( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A33( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A34( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A35( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A36( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A37( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A38( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A39( M & a )
{
	BOOST_STATIC_ASSERT(3<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<3,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A40( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A41( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A42( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A43( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A44( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A45( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A46( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A47( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A48( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A49( M & a )
{
	BOOST_STATIC_ASSERT(4<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<4,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A50( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A51( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A52( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A53( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A54( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A55( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A56( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A57( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A58( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A59( M & a )
{
	BOOST_STATIC_ASSERT(5<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<5,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A60( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A61( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A62( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A63( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A64( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A65( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A66( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A67( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A68( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A69( M & a )
{
	BOOST_STATIC_ASSERT(6<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<6,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A70( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A71( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A72( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A73( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A74( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A75( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A76( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A77( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A78( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A79( M & a )
{
	BOOST_STATIC_ASSERT(7<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<7,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A80( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A81( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A82( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A83( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A84( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A85( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A86( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A87( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A88( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A89( M & a )
{
	BOOST_STATIC_ASSERT(8<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<8,9>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A90( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 0<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,0>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A91( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 1<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,1>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A92( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 2<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,2>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A93( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 3<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,3>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A94( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 4<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,4>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A95( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 5<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,5>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A96( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 6<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,6>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A97( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 7<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,7>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A98( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 8<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,8>(a);
}
template <class M> BOOST_QVM_INLINE_TRIVIAL typename enable_if_c<is_mat<M>::value,typename mat_traits<M>::scalar_type &>::type A99( M & a )
{
	BOOST_STATIC_ASSERT(9<mat_traits<M>::rows && 9<mat_traits<M>::cols);
	return mat_traits<M>::template write_element<9,9>(a);
}

////////////////////////////////////////////////
}
}

#endif
