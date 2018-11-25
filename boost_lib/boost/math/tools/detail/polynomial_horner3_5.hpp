//  (C) Copyright John Maddock 2007.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
//  This file is machine generated, do not edit by hand

// Unrolled polynomial evaluation using second order Horners rule
#ifndef BOOST_MATH_TOOLS_POLY_EVAL_5_HPP
#define BOOST_MATH_TOOLS_POLY_EVAL_5_HPP

namespace boost
{
namespace math
{
namespace tools
{
namespace detail
{

template <class T, class V>
inline V evaluate_polynomial_c_imp(const T*, const V&, const mpl::int_<0>*) BOOST_MATH_NOEXCEPT(V)
{
	return static_cast<V>(0);
}

template <class T, class V>
inline V evaluate_polynomial_c_imp(const T* a, const V&, const mpl::int_<1>*) BOOST_MATH_NOEXCEPT(V)
{
	return static_cast<V>(a[0]);
}

template <class T, class V>
inline V evaluate_polynomial_c_imp(const T* a, const V& x, const mpl::int_<2>*) BOOST_MATH_NOEXCEPT(V)
{
	return static_cast<V>(a[1] * x + a[0]);
}

template <class T, class V>
inline V evaluate_polynomial_c_imp(const T* a, const V& x, const mpl::int_<3>*) BOOST_MATH_NOEXCEPT(V)
{
	return static_cast<V>((a[2] * x + a[1]) * x + a[0]);
}

template <class T, class V>
inline V evaluate_polynomial_c_imp(const T* a, const V& x, const mpl::int_<4>*) BOOST_MATH_NOEXCEPT(V)
{
	return static_cast<V>(((a[3] * x + a[2]) * x + a[1]) * x + a[0]);
}

template <class T, class V>
inline V evaluate_polynomial_c_imp(const T* a, const V& x, const mpl::int_<5>*) BOOST_MATH_NOEXCEPT(V)
{
	V x2 = x * x;
	V t[2];
	t[0] = static_cast<V>(a[4] * x2 + a[2]);
	t[1] = static_cast<V>(a[3] * x2 + a[1]);
	t[0] *= x2;
	t[0] += static_cast<V>(a[0]);
	t[1] *= x;
	return t[0] + t[1];
}


}
}
}
} // namespaces

#endif // include guard

