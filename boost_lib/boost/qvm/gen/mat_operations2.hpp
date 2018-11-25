//Copyright (c) 2008-2017 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_QVM_2923BE84E16CD6AE529049F1F1BBE9EB
#define BOOST_QVM_2923BE84E16CD6AE529049F1F1BBE9EB

//This file was generated by a program. Do not edit manually.

#include <boost/qvm/assert.hpp>
#include <boost/qvm/deduce_mat.hpp>
#include <boost/qvm/deduce_vec.hpp>
#include <boost/qvm/error.hpp>
#include <boost/qvm/gen/mat_assign2.hpp>
#include <boost/qvm/throw_exception.hpp>

namespace
	boost
{
namespace
	qvm
{
template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           deduce_mat2<A,B,2,2> >::type
           operator+( A const & a, B const & b )
{
	typedef typename deduce_mat2<A,B,2,2>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==2);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==2);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)+mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<0,1>(r)=mat_traits<A>::template read_element<0,1>(a)+mat_traits<B>::template read_element<0,1>(b);
	mat_traits<R>::template write_element<1,0>(r)=mat_traits<A>::template read_element<1,0>(a)+mat_traits<B>::template read_element<1,0>(b);
	mat_traits<R>::template write_element<1,1>(r)=mat_traits<A>::template read_element<1,1>(a)+mat_traits<B>::template read_element<1,1>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator+;
}

namespace
	qvm_detail
{
template <int R,int C>
struct plus_mm_defined;

template <>
struct
	plus_mm_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==1 && mat_traits<B>::cols==1,
           deduce_mat2<A,B,2,1> >::type
           operator+( A const & a, B const & b )
{
	typedef typename deduce_mat2<A,B,2,1>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==2);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==1);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)+mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<1,0>(r)=mat_traits<A>::template read_element<1,0>(a)+mat_traits<B>::template read_element<1,0>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator+;
}

namespace
	qvm_detail
{
template <int R,int C>
struct plus_mm_defined;

template <>
struct
	plus_mm_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==1 && mat_traits<B>::rows==1 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           deduce_mat2<A,B,1,2> >::type
           operator+( A const & a, B const & b )
{
	typedef typename deduce_mat2<A,B,1,2>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==1);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==2);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)+mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<0,1>(r)=mat_traits<A>::template read_element<0,1>(a)+mat_traits<B>::template read_element<0,1>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator+;
}

namespace
	qvm_detail
{
template <int R,int C>
struct plus_mm_defined;

template <>
struct
	plus_mm_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           deduce_mat2<A,B,2,2> >::type
           operator-( A const & a, B const & b )
{
	typedef typename deduce_mat2<A,B,2,2>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==2);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==2);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)-mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<0,1>(r)=mat_traits<A>::template read_element<0,1>(a)-mat_traits<B>::template read_element<0,1>(b);
	mat_traits<R>::template write_element<1,0>(r)=mat_traits<A>::template read_element<1,0>(a)-mat_traits<B>::template read_element<1,0>(b);
	mat_traits<R>::template write_element<1,1>(r)=mat_traits<A>::template read_element<1,1>(a)-mat_traits<B>::template read_element<1,1>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator-;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_mm_defined;

template <>
struct
	minus_mm_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==1 && mat_traits<B>::cols==1,
           deduce_mat2<A,B,2,1> >::type
           operator-( A const & a, B const & b )
{
	typedef typename deduce_mat2<A,B,2,1>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==2);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==1);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)-mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<1,0>(r)=mat_traits<A>::template read_element<1,0>(a)-mat_traits<B>::template read_element<1,0>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator-;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_mm_defined;

template <>
struct
	minus_mm_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==1 && mat_traits<B>::rows==1 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           deduce_mat2<A,B,1,2> >::type
           operator-( A const & a, B const & b )
{
	typedef typename deduce_mat2<A,B,1,2>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==1);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==2);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)-mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<0,1>(r)=mat_traits<A>::template read_element<0,1>(a)-mat_traits<B>::template read_element<0,1>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator-;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_mm_defined;

template <>
struct
	minus_mm_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           A &>::type
           operator+=( A & a, B const & b )
{
	mat_traits<A>::template write_element<0,0>(a)+=mat_traits<B>::template read_element<0,0>(b);
	mat_traits<A>::template write_element<0,1>(a)+=mat_traits<B>::template read_element<0,1>(b);
	mat_traits<A>::template write_element<1,0>(a)+=mat_traits<B>::template read_element<1,0>(b);
	mat_traits<A>::template write_element<1,1>(a)+=mat_traits<B>::template read_element<1,1>(b);
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator+=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct plus_eq_mm_defined;

template <>
struct
	plus_eq_mm_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==1 && mat_traits<B>::cols==1,
           A &>::type
           operator+=( A & a, B const & b )
{
	mat_traits<A>::template write_element<0,0>(a)+=mat_traits<B>::template read_element<0,0>(b);
	mat_traits<A>::template write_element<1,0>(a)+=mat_traits<B>::template read_element<1,0>(b);
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator+=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct plus_eq_mm_defined;

template <>
struct
	plus_eq_mm_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==1 && mat_traits<B>::rows==1 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           A &>::type
           operator+=( A & a, B const & b )
{
	mat_traits<A>::template write_element<0,0>(a)+=mat_traits<B>::template read_element<0,0>(b);
	mat_traits<A>::template write_element<0,1>(a)+=mat_traits<B>::template read_element<0,1>(b);
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator+=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct plus_eq_mm_defined;

template <>
struct
	plus_eq_mm_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           A &>::type
           operator-=( A & a, B const & b )
{
	mat_traits<A>::template write_element<0,0>(a)-=mat_traits<B>::template read_element<0,0>(b);
	mat_traits<A>::template write_element<0,1>(a)-=mat_traits<B>::template read_element<0,1>(b);
	mat_traits<A>::template write_element<1,0>(a)-=mat_traits<B>::template read_element<1,0>(b);
	mat_traits<A>::template write_element<1,1>(a)-=mat_traits<B>::template read_element<1,1>(b);
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator-=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_eq_mm_defined;

template <>
struct
	minus_eq_mm_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==1 && mat_traits<B>::cols==1,
           A &>::type
           operator-=( A & a, B const & b )
{
	mat_traits<A>::template write_element<0,0>(a)-=mat_traits<B>::template read_element<0,0>(b);
	mat_traits<A>::template write_element<1,0>(a)-=mat_traits<B>::template read_element<1,0>(b);
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator-=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_eq_mm_defined;

template <>
struct
	minus_eq_mm_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==1 && mat_traits<B>::rows==1 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           A &>::type
           operator-=( A & a, B const & b )
{
	mat_traits<A>::template write_element<0,0>(a)-=mat_traits<B>::template read_element<0,0>(b);
	mat_traits<A>::template write_element<0,1>(a)-=mat_traits<B>::template read_element<0,1>(b);
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator-=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_eq_mm_defined;

template <>
struct
	minus_eq_mm_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           deduce_mat<A> >::type
           operator*( A const & a, B b )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)*b;
	mat_traits<R>::template write_element<0,1>(r)=mat_traits<A>::template read_element<0,1>(a)*b;
	mat_traits<R>::template write_element<1,0>(r)=mat_traits<A>::template read_element<1,0>(a)*b;
	mat_traits<R>::template write_element<1,1>(r)=mat_traits<A>::template read_element<1,1>(a)*b;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_ms_defined;

template <>
struct
	mul_ms_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
is_scalar<A>::value && mat_traits<B>::rows==2 && mat_traits<B>::cols==2,
          deduce_mat<B> >::type
          operator*( A a, B const & b )
{
	typedef typename deduce_mat<B>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=a*mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<0,1>(r)=a*mat_traits<B>::template read_element<0,1>(b);
	mat_traits<R>::template write_element<1,0>(r)=a*mat_traits<B>::template read_element<1,0>(b);
	mat_traits<R>::template write_element<1,1>(r)=a*mat_traits<B>::template read_element<1,1>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_sm_defined;

template <>
struct
	mul_sm_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==1 && is_scalar<B>::value,
           deduce_mat<A> >::type
           operator*( A const & a, B b )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)*b;
	mat_traits<R>::template write_element<1,0>(r)=mat_traits<A>::template read_element<1,0>(a)*b;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_ms_defined;

template <>
struct
	mul_ms_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
is_scalar<A>::value && mat_traits<B>::rows==2 && mat_traits<B>::cols==1,
          deduce_mat<B> >::type
          operator*( A a, B const & b )
{
	typedef typename deduce_mat<B>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=a*mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<1,0>(r)=a*mat_traits<B>::template read_element<1,0>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_sm_defined;

template <>
struct
	mul_sm_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==1 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           deduce_mat<A> >::type
           operator*( A const & a, B b )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)*b;
	mat_traits<R>::template write_element<0,1>(r)=mat_traits<A>::template read_element<0,1>(a)*b;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_ms_defined;

template <>
struct
	mul_ms_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
is_scalar<A>::value && mat_traits<B>::rows==1 && mat_traits<B>::cols==2,
          deduce_mat<B> >::type
          operator*( A a, B const & b )
{
	typedef typename deduce_mat<B>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=a*mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<0,1>(r)=a*mat_traits<B>::template read_element<0,1>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_sm_defined;

template <>
struct
	mul_sm_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           A &>::type
           operator*=( A & a, B b )
{
	mat_traits<A>::template write_element<0,0>(a)*=b;
	mat_traits<A>::template write_element<0,1>(a)*=b;
	mat_traits<A>::template write_element<1,0>(a)*=b;
	mat_traits<A>::template write_element<1,1>(a)*=b;
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator*=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_eq_ms_defined;

template <>
struct
	mul_eq_ms_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==1 && is_scalar<B>::value,
           A &>::type
           operator*=( A & a, B b )
{
	mat_traits<A>::template write_element<0,0>(a)*=b;
	mat_traits<A>::template write_element<1,0>(a)*=b;
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator*=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_eq_ms_defined;

template <>
struct
	mul_eq_ms_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==1 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           A &>::type
           operator*=( A & a, B b )
{
	mat_traits<A>::template write_element<0,0>(a)*=b;
	mat_traits<A>::template write_element<0,1>(a)*=b;
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator*=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct mul_eq_ms_defined;

template <>
struct
	mul_eq_ms_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           deduce_mat<A> >::type
           operator/( A const & a, B b )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)/b;
	mat_traits<R>::template write_element<0,1>(r)=mat_traits<A>::template read_element<0,1>(a)/b;
	mat_traits<R>::template write_element<1,0>(r)=mat_traits<A>::template read_element<1,0>(a)/b;
	mat_traits<R>::template write_element<1,1>(r)=mat_traits<A>::template read_element<1,1>(a)/b;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator/;
}

namespace
	qvm_detail
{
template <int R,int C>
struct div_ms_defined;

template <>
struct
	div_ms_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
is_scalar<A>::value && mat_traits<B>::rows==2 && mat_traits<B>::cols==2,
          deduce_mat<B> >::type
          operator/( A a, B const & b )
{
	typedef typename deduce_mat<B>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=a/mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<0,1>(r)=a/mat_traits<B>::template read_element<0,1>(b);
	mat_traits<R>::template write_element<1,0>(r)=a/mat_traits<B>::template read_element<1,0>(b);
	mat_traits<R>::template write_element<1,1>(r)=a/mat_traits<B>::template read_element<1,1>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator/;
}

namespace
	qvm_detail
{
template <int R,int C>
struct div_sm_defined;

template <>
struct
	div_sm_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==1 && is_scalar<B>::value,
           deduce_mat<A> >::type
           operator/( A const & a, B b )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)/b;
	mat_traits<R>::template write_element<1,0>(r)=mat_traits<A>::template read_element<1,0>(a)/b;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator/;
}

namespace
	qvm_detail
{
template <int R,int C>
struct div_ms_defined;

template <>
struct
	div_ms_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
is_scalar<A>::value && mat_traits<B>::rows==2 && mat_traits<B>::cols==1,
          deduce_mat<B> >::type
          operator/( A a, B const & b )
{
	typedef typename deduce_mat<B>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=a/mat_traits<B>::template read_element<0,0>(b);
	mat_traits<R>::template write_element<1,0>(r)=a/mat_traits<B>::template read_element<1,0>(b);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator/;
}

namespace
	qvm_detail
{
template <int R,int C>
struct div_sm_defined;

template <>
struct
	div_sm_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==1 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           deduce_mat<A> >::type
           operator/( A const & a, B b )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=mat_traits<A>::template read_element<0,0>(a)/b;
	mat_traits<R>::template write_element<0,1>(r)=mat_traits<A>::template read_element<0,1>(a)/b;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator/;
}

namespace
	qvm_detail
{
template <int R,int C>
struct div_ms_defined;

template <>
struct
	div_ms_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           A &>::type
           operator/=( A & a, B b )
{
	mat_traits<A>::template write_element<0,0>(a)/=b;
	mat_traits<A>::template write_element<0,1>(a)/=b;
	mat_traits<A>::template write_element<1,0>(a)/=b;
	mat_traits<A>::template write_element<1,1>(a)/=b;
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator/=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct div_eq_ms_defined;

template <>
struct
	div_eq_ms_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==1 && is_scalar<B>::value,
           A &>::type
           operator/=( A & a, B b )
{
	mat_traits<A>::template write_element<0,0>(a)/=b;
	mat_traits<A>::template write_element<1,0>(a)/=b;
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator/=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct div_eq_ms_defined;

template <>
struct
	div_eq_ms_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==1 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           A &>::type
           operator/=( A & a, B b )
{
	mat_traits<A>::template write_element<0,0>(a)/=b;
	mat_traits<A>::template write_element<0,1>(a)/=b;
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator/=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct div_eq_ms_defined;

template <>
struct
	div_eq_ms_defined<1,2>
{
	static bool const value=true;
};
}

template <class R,class A>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<R>::rows==2 && mat_traits<A>::rows==2 &&
mat_traits<R>::cols==2 && mat_traits<A>::cols==2,
           R>::type
           convert_to( A const & a )
{
	R r;
	mat_traits<R>::template write_element<0,0>(r) = mat_traits<A>::template read_element<0,0>(a);
	mat_traits<R>::template write_element<0,1>(r) = mat_traits<A>::template read_element<0,1>(a);
	mat_traits<R>::template write_element<1,0>(r) = mat_traits<A>::template read_element<1,0>(a);
	mat_traits<R>::template write_element<1,1>(r) = mat_traits<A>::template read_element<1,1>(a);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::convert_to;
}

namespace
	qvm_detail
{
template <int R,int C>
struct convert_to_m_defined;

template <>
struct
	convert_to_m_defined<2,2>
{
	static bool const value=true;
};
}

template <class R,class A>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<R>::rows==2 && mat_traits<A>::rows==2 &&
mat_traits<R>::cols==1 && mat_traits<A>::cols==1,
           R>::type
           convert_to( A const & a )
{
	R r;
	mat_traits<R>::template write_element<0,0>(r) = mat_traits<A>::template read_element<0,0>(a);
	mat_traits<R>::template write_element<1,0>(r) = mat_traits<A>::template read_element<1,0>(a);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::convert_to;
}

namespace
	qvm_detail
{
template <int R,int C>
struct convert_to_m_defined;

template <>
struct
	convert_to_m_defined<2,1>
{
	static bool const value=true;
};
}

template <class R,class A>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<R>::rows==1 && mat_traits<A>::rows==1 &&
mat_traits<R>::cols==2 && mat_traits<A>::cols==2,
           R>::type
           convert_to( A const & a )
{
	R r;
	mat_traits<R>::template write_element<0,0>(r) = mat_traits<A>::template read_element<0,0>(a);
	mat_traits<R>::template write_element<0,1>(r) = mat_traits<A>::template read_element<0,1>(a);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::convert_to;
}

namespace
	qvm_detail
{
template <int R,int C>
struct convert_to_m_defined;

template <>
struct
	convert_to_m_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           bool>::type
           operator==( A const & a, B const & b )
{
	return
	    mat_traits<A>::template read_element<0,0>(a)==mat_traits<B>::template read_element<0,0>(b) &&
	mat_traits<A>::template read_element<0,1>(a)==mat_traits<B>::template read_element<0,1>(b) &&
	mat_traits<A>::template read_element<1,0>(a)==mat_traits<B>::template read_element<1,0>(b) &&
	mat_traits<A>::template read_element<1,1>(a)==mat_traits<B>::template read_element<1,1>(b);
}

namespace
	sfinae
{
using ::boost::qvm::operator==;
}

namespace
	qvm_detail
{
template <int R,int C>
struct eq_mm_defined;

template <>
struct
	eq_mm_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==1 && mat_traits<B>::cols==1,
           bool>::type
           operator==( A const & a, B const & b )
{
	return
	    mat_traits<A>::template read_element<0,0>(a)==mat_traits<B>::template read_element<0,0>(b) &&
	mat_traits<A>::template read_element<1,0>(a)==mat_traits<B>::template read_element<1,0>(b);
}

namespace
	sfinae
{
using ::boost::qvm::operator==;
}

namespace
	qvm_detail
{
template <int R,int C>
struct eq_mm_defined;

template <>
struct
	eq_mm_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==1 && mat_traits<B>::rows==1 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           bool>::type
           operator==( A const & a, B const & b )
{
	return
	    mat_traits<A>::template read_element<0,0>(a)==mat_traits<B>::template read_element<0,0>(b) &&
	mat_traits<A>::template read_element<0,1>(a)==mat_traits<B>::template read_element<0,1>(b);
}

namespace
	sfinae
{
using ::boost::qvm::operator==;
}

namespace
	qvm_detail
{
template <int R,int C>
struct eq_mm_defined;

template <>
struct
	eq_mm_defined<1,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           bool>::type
           operator!=( A const & a, B const & b )
{
	return
	    !(mat_traits<A>::template read_element<0,0>(a)==mat_traits<B>::template read_element<0,0>(b)) ||
	    !(mat_traits<A>::template read_element<0,1>(a)==mat_traits<B>::template read_element<0,1>(b)) ||
	    !(mat_traits<A>::template read_element<1,0>(a)==mat_traits<B>::template read_element<1,0>(b)) ||
	    !(mat_traits<A>::template read_element<1,1>(a)==mat_traits<B>::template read_element<1,1>(b));
}

namespace
	sfinae
{
using ::boost::qvm::operator!=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct neq_mm_defined;

template <>
struct
	neq_mm_defined<2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==1 && mat_traits<B>::cols==1,
           bool>::type
           operator!=( A const & a, B const & b )
{
	return
	    !(mat_traits<A>::template read_element<0,0>(a)==mat_traits<B>::template read_element<0,0>(b)) ||
	    !(mat_traits<A>::template read_element<1,0>(a)==mat_traits<B>::template read_element<1,0>(b));
}

namespace
	sfinae
{
using ::boost::qvm::operator!=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct neq_mm_defined;

template <>
struct
	neq_mm_defined<2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==1 && mat_traits<B>::rows==1 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           bool>::type
           operator!=( A const & a, B const & b )
{
	return
	    !(mat_traits<A>::template read_element<0,0>(a)==mat_traits<B>::template read_element<0,0>(b)) ||
	    !(mat_traits<A>::template read_element<0,1>(a)==mat_traits<B>::template read_element<0,1>(b));
}

namespace
	sfinae
{
using ::boost::qvm::operator!=;
}

namespace
	qvm_detail
{
template <int R,int C>
struct neq_mm_defined;

template <>
struct
	neq_mm_defined<1,2>
{
	static bool const value=true;
};
}

template <class A>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==2,
           deduce_mat<A> >::type
           operator-( A const & a )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=-mat_traits<A>::template read_element<0,0>(a);
	mat_traits<R>::template write_element<0,1>(r)=-mat_traits<A>::template read_element<0,1>(a);
	mat_traits<R>::template write_element<1,0>(r)=-mat_traits<A>::template read_element<1,0>(a);
	mat_traits<R>::template write_element<1,1>(r)=-mat_traits<A>::template read_element<1,1>(a);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator-;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_m_defined;

template <>
struct
	minus_m_defined<2,2>
{
	static bool const value=true;
};
}

template <class A>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==1,
           deduce_mat<A> >::type
           operator-( A const & a )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=-mat_traits<A>::template read_element<0,0>(a);
	mat_traits<R>::template write_element<1,0>(r)=-mat_traits<A>::template read_element<1,0>(a);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator-;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_m_defined;

template <>
struct
	minus_m_defined<2,1>
{
	static bool const value=true;
};
}

template <class A>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==1 && mat_traits<A>::cols==2,
           deduce_mat<A> >::type
           operator-( A const & a )
{
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)=-mat_traits<A>::template read_element<0,0>(a);
	mat_traits<R>::template write_element<0,1>(r)=-mat_traits<A>::template read_element<0,1>(a);
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator-;
}

namespace
	qvm_detail
{
template <int R,int C>
struct minus_m_defined;

template <>
struct
	minus_m_defined<1,2>
{
	static bool const value=true;
};
}

template <class A>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==2,
           typename mat_traits<A>::scalar_type>::type
           determinant( A const & a )
{
	typedef typename mat_traits<A>::scalar_type T;
	T const a00=mat_traits<A>::template read_element<0,0>(a);
	T const a01=mat_traits<A>::template read_element<0,1>(a);
	T const a10=mat_traits<A>::template read_element<1,0>(a);
	T const a11=mat_traits<A>::template read_element<1,1>(a);
	T det=(a00*a11-a01*a10);
	return det;
}

namespace
	sfinae
{
using ::boost::qvm::determinant;
}

namespace
	qvm_detail
{
template <int D>
struct determinant_defined;

template <>
struct
	determinant_defined<2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==2 && is_scalar<B>::value,
           deduce_mat<A> >::type
           inverse( A const & a, B det )
{
	typedef typename mat_traits<A>::scalar_type T;
	BOOST_QVM_ASSERT(det!=scalar_traits<B>::value(0));
	T const a00=mat_traits<A>::template read_element<0,0>(a);
	T const a01=mat_traits<A>::template read_element<0,1>(a);
	T const a10=mat_traits<A>::template read_element<1,0>(a);
	T const a11=mat_traits<A>::template read_element<1,1>(a);
	T const f=scalar_traits<T>::value(1)/det;
	typedef typename deduce_mat<A>::type R;
	R r;
	mat_traits<R>::template write_element<0,0>(r)= f*a11;
	mat_traits<R>::template write_element<0,1>(r)=-f*a01;
	mat_traits<R>::template write_element<1,0>(r)=-f*a10;
	mat_traits<R>::template write_element<1,1>(r)= f*a00;
	return r;
}

template <class A>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<A>::cols==2,
           deduce_mat<A> >::type
           inverse( A const & a )
{
	typedef typename mat_traits<A>::scalar_type T;
	T det=determinant(a);
	if( det==scalar_traits<T>::value(0) )
		BOOST_QVM_THROW_EXCEPTION(zero_determinant_error());
	return inverse(a,det);
}

namespace
	sfinae
{
using ::boost::qvm::inverse;
}

namespace
	qvm_detail
{
template <int D>
struct inverse_m_defined;

template <>
struct
	inverse_m_defined<2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           deduce_mat2<A,B,2,2> >::type
           operator*( A const & a, B const & b )
{
	typedef typename mat_traits<A>::scalar_type Ta;
	typedef typename mat_traits<B>::scalar_type Tb;
	Ta const a00 = mat_traits<A>::template read_element<0,0>(a);
	Ta const a01 = mat_traits<A>::template read_element<0,1>(a);
	Ta const a10 = mat_traits<A>::template read_element<1,0>(a);
	Ta const a11 = mat_traits<A>::template read_element<1,1>(a);
	Tb const b00 = mat_traits<B>::template read_element<0,0>(b);
	Tb const b01 = mat_traits<B>::template read_element<0,1>(b);
	Tb const b10 = mat_traits<B>::template read_element<1,0>(b);
	Tb const b11 = mat_traits<B>::template read_element<1,1>(b);
	typedef typename deduce_mat2<A,B,2,2>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==2);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==2);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=a00*b00+a01*b10;
	mat_traits<R>::template write_element<0,1>(r)=a00*b01+a01*b11;
	mat_traits<R>::template write_element<1,0>(r)=a10*b00+a11*b10;
	mat_traits<R>::template write_element<1,1>(r)=a10*b01+a11*b11;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int CR,int C>
struct mul_mm_defined;

template <>
struct
	mul_mm_defined<2,2,2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           A &>::type
           operator*=( A & a, B const & b )
{
	typedef typename mat_traits<A>::scalar_type Ta;
	typedef typename mat_traits<B>::scalar_type Tb;
	Ta const a00 = mat_traits<A>::template read_element<0,0>(a);
	Ta const a01 = mat_traits<A>::template read_element<0,1>(a);
	Ta const a10 = mat_traits<A>::template read_element<1,0>(a);
	Ta const a11 = mat_traits<A>::template read_element<1,1>(a);
	Tb const b00 = mat_traits<B>::template read_element<0,0>(b);
	Tb const b01 = mat_traits<B>::template read_element<0,1>(b);
	Tb const b10 = mat_traits<B>::template read_element<1,0>(b);
	Tb const b11 = mat_traits<B>::template read_element<1,1>(b);
	mat_traits<A>::template write_element<0,0>(a)=a00*b00+a01*b10;
	mat_traits<A>::template write_element<0,1>(a)=a00*b01+a01*b11;
	mat_traits<A>::template write_element<1,0>(a)=a10*b00+a11*b10;
	mat_traits<A>::template write_element<1,1>(a)=a10*b01+a11*b11;
	return a;
}

namespace
	sfinae
{
using ::boost::qvm::operator*=;
}

namespace
	qvm_detail
{
template <int D>
struct mul_eq_mm_defined;

template <>
struct
	mul_eq_mm_defined<2>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==2 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==1,
           deduce_mat2<A,B,2,1> >::type
           operator*( A const & a, B const & b )
{
	typedef typename mat_traits<A>::scalar_type Ta;
	typedef typename mat_traits<B>::scalar_type Tb;
	Ta const a00 = mat_traits<A>::template read_element<0,0>(a);
	Ta const a01 = mat_traits<A>::template read_element<0,1>(a);
	Ta const a10 = mat_traits<A>::template read_element<1,0>(a);
	Ta const a11 = mat_traits<A>::template read_element<1,1>(a);
	Tb const b00 = mat_traits<B>::template read_element<0,0>(b);
	Tb const b10 = mat_traits<B>::template read_element<1,0>(b);
	typedef typename deduce_mat2<A,B,2,1>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==2);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==1);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=a00*b00+a01*b10;
	mat_traits<R>::template write_element<1,0>(r)=a10*b00+a11*b10;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int CR,int C>
struct mul_mm_defined;

template <>
struct
	mul_mm_defined<2,2,1>
{
	static bool const value=true;
};
}

template <class A,class B>
BOOST_QVM_INLINE_OPERATIONS
typename lazy_enable_if_c<
mat_traits<A>::rows==1 && mat_traits<B>::rows==2 &&
mat_traits<A>::cols==2 && mat_traits<B>::cols==2,
           deduce_mat2<A,B,1,2> >::type
           operator*( A const & a, B const & b )
{
	typedef typename mat_traits<A>::scalar_type Ta;
	typedef typename mat_traits<B>::scalar_type Tb;
	Ta const a00 = mat_traits<A>::template read_element<0,0>(a);
	Ta const a01 = mat_traits<A>::template read_element<0,1>(a);
	Tb const b00 = mat_traits<B>::template read_element<0,0>(b);
	Tb const b01 = mat_traits<B>::template read_element<0,1>(b);
	Tb const b10 = mat_traits<B>::template read_element<1,0>(b);
	Tb const b11 = mat_traits<B>::template read_element<1,1>(b);
	typedef typename deduce_mat2<A,B,1,2>::type R;
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::rows==1);
	BOOST_QVM_STATIC_ASSERT(mat_traits<R>::cols==2);
	R r;
	mat_traits<R>::template write_element<0,0>(r)=a00*b00+a01*b10;
	mat_traits<R>::template write_element<0,1>(r)=a00*b01+a01*b11;
	return r;
}

namespace
	sfinae
{
using ::boost::qvm::operator*;
}

namespace
	qvm_detail
{
template <int R,int CR,int C>
struct mul_mm_defined;

template <>
struct
	mul_mm_defined<1,2,2>
{
	static bool const value=true;
};
}

}
}

#endif
