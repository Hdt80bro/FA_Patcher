// Boost.Units - A C++ library for zero-overhead dimensional analysis and
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2008 Matthias Christian Schabel
// Copyright (C) 2008 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_ANGLE_REVOLUTIONS_HPP
#define BOOST_UNITS_ANGLE_REVOLUTIONS_HPP

#include <boost/config/no_tr1/cmath.hpp>

#include <boost/units/conversion.hpp>
#include <boost/units/quantity.hpp>
#include <boost/units/static_constant.hpp>
#include <boost/units/make_system.hpp>
#include <boost/units/base_units/angle/revolution.hpp>

namespace boost
{

namespace units
{

namespace revolution
{

typedef make_system<boost::units::angle::revolution_base_unit>::type system;

typedef unit<dimensionless_type,system>         dimensionless;
typedef unit<plane_angle_dimension,system>      plane_angle;          ///< angle revolution unit constant

BOOST_UNITS_STATIC_CONSTANT(revolution,plane_angle);
BOOST_UNITS_STATIC_CONSTANT(revolutions,plane_angle);

} // namespace revolution

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_ANGLE_REVOLUTIONS_HPP
