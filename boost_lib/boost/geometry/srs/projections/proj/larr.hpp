#ifndef BOOST_GEOMETRY_PROJECTIONS_LARR_HPP
#define BOOST_GEOMETRY_PROJECTIONS_LARR_HPP

// Boost.Geometry - extensions-gis-projections (based on PROJ4)
// This file is automatically generated. DO NOT EDIT.

// Copyright (c) 2008-2015 Barend Gehrels, Amsterdam, the Netherlands.

// This file was modified by Oracle on 2017.
// Modifications copyright (c) 2017, Oracle and/or its affiliates.
// Contributed and/or modified by Adam Wulkiewicz, on behalf of Oracle.

// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

// This file is converted from PROJ4, http://trac.osgeo.org/proj
// PROJ4 is originally written by Gerald Evenden (then of the USGS)
// PROJ4 is maintained by Frank Warmerdam
// PROJ4 is converted to Boost.Geometry by Barend Gehrels

// Last updated version of proj: 4.9.1

// Original copyright notice:

// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.

#include <boost/geometry/srs/projections/impl/base_static.hpp>
#include <boost/geometry/srs/projections/impl/base_dynamic.hpp>
#include <boost/geometry/srs/projections/impl/projects.hpp>
#include <boost/geometry/srs/projections/impl/factory_entry.hpp>

namespace boost
{
namespace geometry
{

namespace srs
{
namespace par4
{
struct larr {};

}
} //namespace srs::par4

namespace projections
{
#ifndef DOXYGEN_NO_DETAIL
namespace detail
{
namespace larr
{

//static const double SIXTH = .16666666666666666;

template <typename T>
inline T SIXTH()
{
	return .16666666666666666666666666666666;
}

// template class, using CRTP to implement forward/inverse
template <typename CalculationType, typename Parameters>
struct base_larr_spheroid : public base_t_f<base_larr_spheroid<CalculationType, Parameters>,
	CalculationType, Parameters>
{

	typedef CalculationType geographic_type;
	typedef CalculationType cartesian_type;


	inline base_larr_spheroid(const Parameters& par)
		: base_t_f<base_larr_spheroid<CalculationType, Parameters>,
		  CalculationType, Parameters>(*this, par) {}

	// FORWARD(s_forward)  sphere
	// Project coordinates from geographic (lon, lat) to cartesian (x, y)
	inline void fwd(geographic_type& lp_lon, geographic_type& lp_lat, cartesian_type& xy_x, cartesian_type& xy_y) const
	{
		static const CalculationType SIXTH = larr::SIXTH<CalculationType>();

		xy_x = 0.5 * lp_lon * (1. + sqrt(cos(lp_lat)));
		xy_y = lp_lat / (cos(0.5 * lp_lat) * cos(SIXTH * lp_lon));
	}

	static inline std::string get_name()
	{
		return "larr_spheroid";
	}

};

// Larrivee
template <typename Parameters>
inline void setup_larr(Parameters& par)
{
	par.es = 0.;
}

}
} // namespace detail::larr
#endif // doxygen

/*!
    \brief Larrivee projection
    \ingroup projections
    \tparam Geographic latlong point type
    \tparam Cartesian xy point type
    \tparam Parameters parameter type
    \par Projection characteristics
     - Miscellaneous
     - Spheroid
     - no inverse
    \par Example
    \image html ex_larr.gif
*/
template <typename CalculationType, typename Parameters>
struct larr_spheroid : public detail::larr::base_larr_spheroid<CalculationType, Parameters>
{
	inline larr_spheroid(const Parameters& par) : detail::larr::base_larr_spheroid<CalculationType, Parameters>(par)
	{
		detail::larr::setup_larr(this->m_par);
	}
};

#ifndef DOXYGEN_NO_DETAIL
namespace detail
{

// Static projection
BOOST_GEOMETRY_PROJECTIONS_DETAIL_STATIC_PROJECTION(srs::par4::larr, larr_spheroid, larr_spheroid)

// Factory entry(s)
template <typename CalculationType, typename Parameters>
class larr_entry : public detail::factory_entry<CalculationType, Parameters>
{
public :
	virtual base_v<CalculationType, Parameters>* create_new(const Parameters& par) const
	{
		return new base_v_f<larr_spheroid<CalculationType, Parameters>, CalculationType, Parameters>(par);
	}
};

template <typename CalculationType, typename Parameters>
inline void larr_init(detail::base_factory<CalculationType, Parameters>& factory)
{
	factory.add_to_factory("larr", new larr_entry<CalculationType, Parameters>);
}

} // namespace detail
#endif // doxygen

} // namespace projections

}
} // namespace boost::geometry

#endif // BOOST_GEOMETRY_PROJECTIONS_LARR_HPP

