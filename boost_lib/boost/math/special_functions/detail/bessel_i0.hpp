//  Copyright (c) 2006 Xiaogang Zhang
//  Copyright (c) 2017 John Maddock
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MATH_BESSEL_I0_HPP
#define BOOST_MATH_BESSEL_I0_HPP

#ifdef _MSC_VER
#pragma once
#endif

#include <boost/math/tools/rational.hpp>
#include <boost/math/tools/big_constant.hpp>
#include <boost/assert.hpp>

// Modified Bessel function of the first kind of order zero
// we use the approximating forms derived in:
// "Rational Approximations for the Modified Bessel Function of the First Kind - I0(x) for Computations with Double Precision"
// by Pavel Holoborodko,
// see http://www.advanpix.com/2015/11/11/rational-approximations-for-the-modified-bessel-function-of-the-first-kind-i0-computations-double-precision
// The actual coefficients used are our own, and extend Pavel's work to precision's other than double.

namespace boost
{
namespace math
{
namespace detail
{

template <typename T>
T bessel_i0(const T& x);

template <class T, class tag>
struct bessel_i0_initializer
{
	struct init
	{
		init()
		{
			do_init(tag());
		}
		static void do_init(const mpl::int_<64>&)
		{
			bessel_i0(T(1));
			bessel_i0(T(8));
			bessel_i0(T(12));
			bessel_i0(T(40));
			bessel_i0(T(101));
		}
		static void do_init(const mpl::int_<113>&)
		{
			bessel_i0(T(1));
			bessel_i0(T(10));
			bessel_i0(T(20));
			bessel_i0(T(40));
			bessel_i0(T(101));
		}
		template <class U>
		static void do_init(const U&) {}
		void force_instantiate()const {}
	};
	static const init initializer;
	static void force_instantiate()
	{
		initializer.force_instantiate();
	}
};

template <class T, class tag>
const typename bessel_i0_initializer<T, tag>::init bessel_i0_initializer<T, tag>::initializer;

template <typename T, int N>
T bessel_i0_imp(const T&, const mpl::int_<N>&)
{
	BOOST_ASSERT(0);
	return 0;
}

template <typename T>
T bessel_i0_imp(const T& x, const mpl::int_<24>&)
{
	BOOST_MATH_STD_USING
	if(x < 7.75)
	{
		// Max error in interpolated form: 3.929e-08
		// Max Error found at float precision = Poly: 1.991226e-07
		static const float P[] =
		{
			1.00000003928615375e+00f,
			2.49999576572179639e-01f,
			2.77785268558399407e-02f,
			1.73560257755821695e-03f,
			6.96166518788906424e-05f,
			1.89645733877137904e-06f,
			4.29455004657565361e-08f,
			3.90565476357034480e-10f,
			1.48095934745267240e-11f
		};
		T a = x * x / 4;
		return a * boost::math::tools::evaluate_polynomial(P, a) + 1;
	}
	else if(x < 50)
	{
		// Max error in interpolated form: 5.195e-08
		// Max Error found at float precision = Poly: 8.502534e-08
		static const float P[] =
		{
			3.98942651588301770e-01f,
			4.98327234176892844e-02f,
			2.91866904423115499e-02f,
			1.35614940793742178e-02f,
			1.31409251787866793e-01f
		};
		return exp(x) * boost::math::tools::evaluate_polynomial(P, T(1 / x)) / sqrt(x);
	}
	else
	{
		// Max error in interpolated form: 1.782e-09
		// Max Error found at float precision = Poly: 6.473568e-08
		static const float P[] =
		{
			3.98942391532752700e-01f,
			4.98455950638200020e-02f,
			2.94835666900682535e-02f
		};
		T ex = exp(x / 2);
		T result = ex * boost::math::tools::evaluate_polynomial(P, T(1 / x)) / sqrt(x);
		result *= ex;
		return result;
	}
}

template <typename T>
T bessel_i0_imp(const T& x, const mpl::int_<53>&)
{
	BOOST_MATH_STD_USING
	if(x < 7.75)
	{
		// Bessel I0 over[10 ^ -16, 7.75]
		// Max error in interpolated form : 3.042e-18
		// Max Error found at double precision = Poly : 5.106609e-16 Cheb : 5.239199e-16
		static const double P[] =
		{
			1.00000000000000000e+00,
			2.49999999999999909e-01,
			2.77777777777782257e-02,
			1.73611111111023792e-03,
			6.94444444453352521e-05,
			1.92901234513219920e-06,
			3.93675991102510739e-08,
			6.15118672704439289e-10,
			7.59407002058973446e-12,
			7.59389793369836367e-14,
			6.27767773636292611e-16,
			4.34709704153272287e-18,
			2.63417742690109154e-20,
			1.13943037744822825e-22,
			9.07926920085624812e-25
		};
		T a = x * x / 4;
		return a * boost::math::tools::evaluate_polynomial(P, a) + 1;
	}
	else if(x < 500)
	{
		// Max error in interpolated form : 1.685e-16
		// Max Error found at double precision = Poly : 2.575063e-16 Cheb : 2.247615e+00
		static const double P[] =
		{
			3.98942280401425088e-01,
			4.98677850604961985e-02,
			2.80506233928312623e-02,
			2.92211225166047873e-02,
			4.44207299493659561e-02,
			1.30970574605856719e-01,
			-3.35052280231727022e+00,
			2.33025711583514727e+02,
			-1.13366350697172355e+04,
			4.24057674317867331e+05,
			-1.23157028595698731e+07,
			2.80231938155267516e+08,
			-5.01883999713777929e+09,
			7.08029243015109113e+10,
			-7.84261082124811106e+11,
			6.76825737854096565e+12,
			-4.49034849696138065e+13,
			2.24155239966958995e+14,
			-8.13426467865659318e+14,
			2.02391097391687777e+15,
			-3.08675715295370878e+15,
			2.17587543863819074e+15
		};
		return exp(x) * boost::math::tools::evaluate_polynomial(P, T(1 / x)) / sqrt(x);
	}
	else
	{
		// Max error in interpolated form : 2.437e-18
		// Max Error found at double precision = Poly : 1.216719e-16
		static const double P[] =
		{
			3.98942280401432905e-01,
			4.98677850491434560e-02,
			2.80506308916506102e-02,
			2.92179096853915176e-02,
			4.53371208762579442e-02
		};
		T ex = exp(x / 2);
		T result = ex * boost::math::tools::evaluate_polynomial(P, T(1 / x)) / sqrt(x);
		result *= ex;
		return result;
	}
}

template <typename T>
T bessel_i0_imp(const T& x, const mpl::int_<64>&)
{
	BOOST_MATH_STD_USING
	if(x < 7.75)
	{
		// Bessel I0 over[10 ^ -16, 7.75]
		// Max error in interpolated form : 3.899e-20
		// Max Error found at float80 precision = Poly : 1.770840e-19
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 64, 9.99999999999999999961011629e-01),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.50000000000000001321873912e-01),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.77777777777777703400424216e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.73611111111112764793802701e-03),
			BOOST_MATH_BIG_CONSTANT(T, 64, 6.94444444444251461247253525e-05),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.92901234569262206386118739e-06),
			BOOST_MATH_BIG_CONSTANT(T, 64, 3.93675988851131457141005209e-08),
			BOOST_MATH_BIG_CONSTANT(T, 64, 6.15118734688297476454205352e-10),
			BOOST_MATH_BIG_CONSTANT(T, 64, 7.59405797058091016449222685e-12),
			BOOST_MATH_BIG_CONSTANT(T, 64, 7.59406599631719800679835140e-14),
			BOOST_MATH_BIG_CONSTANT(T, 64, 6.27598961062070013516660425e-16),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.35920318970387940278362992e-18),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.57372492687715452949437981e-20),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.33908663475949906992942204e-22),
			BOOST_MATH_BIG_CONSTANT(T, 64, 5.15976668870980234582896010e-25),
			BOOST_MATH_BIG_CONSTANT(T, 64, 3.46240478946376069211156548e-27)
		};
		T a = x * x / 4;
		return a * boost::math::tools::evaluate_polynomial(P, a) + 1;
	}
	else if(x < 10)
	{
		// Maximum Deviation Found:                     6.906e-21
		// Expected Error Term : -6.903e-21
		// Maximum Relative Change in Control Points : 1.631e-04
		// Max Error found at float80 precision = Poly : 7.811948e-21
		static const T Y = 4.051098823547363281250e-01f;
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 64, -6.158081780620616479492e-03),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.883635969834048766148e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 7.892782002476195771920e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, -1.478784996478070170327e+00),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.988611837308006851257e+01),
			BOOST_MATH_BIG_CONSTANT(T, 64, -4.140133766747436806179e+02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.117316447921276453271e+03),
			BOOST_MATH_BIG_CONSTANT(T, 64, -2.942353667455141676001e+04),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.493482682461387081534e+05),
			BOOST_MATH_BIG_CONSTANT(T, 64, -5.228100538921466124653e+05),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.195279248600467989454e+06),
			BOOST_MATH_BIG_CONSTANT(T, 64, -1.601530760654337045917e+06),
			BOOST_MATH_BIG_CONSTANT(T, 64, 9.504921137873298402679e+05)
		};
		return exp(x) * (boost::math::tools::evaluate_polynomial(P, T(1 / x)) + Y) / sqrt(x);
	}
	else if(x < 15)
	{
		// Maximum Deviation Found:                     4.083e-21
		// Expected Error Term : -4.025e-21
		// Maximum Relative Change in Control Points : 1.304e-03
		// Max Error found at float80 precision = Poly : 2.303527e-20
		static const T Y = 4.033188819885253906250e-01f;
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 64, -4.376373876116109401062e-03),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.982899138682911273321e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 3.109477529533515397644e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, -1.163760580110576407673e-01),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.776501832837367371883e+00),
			BOOST_MATH_BIG_CONSTANT(T, 64, -1.101478069227776656318e+02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.892071912448960299773e+03),
			BOOST_MATH_BIG_CONSTANT(T, 64, -2.417739279982328117483e+04),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.296963447724067390552e+05),
			BOOST_MATH_BIG_CONSTANT(T, 64, -1.598589306710589358747e+06),
			BOOST_MATH_BIG_CONSTANT(T, 64, 7.903662411851774878322e+06),
			BOOST_MATH_BIG_CONSTANT(T, 64, -2.622677059040339516093e+07),
			BOOST_MATH_BIG_CONSTANT(T, 64, 5.227776578828667629347e+07),
			BOOST_MATH_BIG_CONSTANT(T, 64, -4.727797957441040896878e+07)
		};
		return exp(x) * (boost::math::tools::evaluate_polynomial(P, T(1 / x)) + Y) / sqrt(x);
	}
	else if(x < 50)
	{
		// Max error in interpolated form: 1.035e-21
		// Max Error found at float80 precision = Poly: 1.885872e-21
		static const T Y = 4.011702537536621093750e-01f;
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 64, -2.227973351806078464328e-03),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.986778486088017419036e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.805066823812285310011e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.921443721160964964623e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.517504941996594744052e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 6.316922639868793684401e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.535891099168810015433e+00),
			BOOST_MATH_BIG_CONSTANT(T, 64, -4.706078229522448308087e+01),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.351015763079160914632e+03),
			BOOST_MATH_BIG_CONSTANT(T, 64, -2.948809013999277355098e+04),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.967598958582595361757e+05),
			BOOST_MATH_BIG_CONSTANT(T, 64, -6.346924657995383019558e+06),
			BOOST_MATH_BIG_CONSTANT(T, 64, 5.998794574259956613472e+07),
			BOOST_MATH_BIG_CONSTANT(T, 64, -4.016371355801690142095e+08),
			BOOST_MATH_BIG_CONSTANT(T, 64, 1.768791455631826490838e+09),
			BOOST_MATH_BIG_CONSTANT(T, 64, -4.441995678177349895640e+09),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.482292669974971387738e+09)
		};
		return exp(x) * (boost::math::tools::evaluate_polynomial(P, T(1 / x)) + Y) / sqrt(x);
	}
	else
	{
		// Bessel I0 over[50, INF]
		// Max error in interpolated form : 5.587e-20
		// Max Error found at float80 precision = Poly : 8.776852e-20
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 64, 3.98942280401432677955074061e-01),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.98677850501789875615574058e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.80506290908675604202206833e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.92194052159035901631494784e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 4.47422430732256364094681137e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 9.05971614435738691235525172e-02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 2.29180522595459823234266708e-01),
			BOOST_MATH_BIG_CONSTANT(T, 64, 6.15122547776140254569073131e-01),
			BOOST_MATH_BIG_CONSTANT(T, 64, 7.48491812136365376477357324e+00),
			BOOST_MATH_BIG_CONSTANT(T, 64, -2.45569740166506688169730713e+02),
			BOOST_MATH_BIG_CONSTANT(T, 64, 9.66857566379480730407063170e+03),
			BOOST_MATH_BIG_CONSTANT(T, 64, -2.71924083955641197750323901e+05),
			BOOST_MATH_BIG_CONSTANT(T, 64, 5.74276685704579268845870586e+06),
			BOOST_MATH_BIG_CONSTANT(T, 64, -8.89753803265734681907148778e+07),
			BOOST_MATH_BIG_CONSTANT(T, 64, 9.82590905134996782086242180e+08),
			BOOST_MATH_BIG_CONSTANT(T, 64, -7.30623197145529889358596301e+09),
			BOOST_MATH_BIG_CONSTANT(T, 64, 3.27310000726207055200805893e+10),
			BOOST_MATH_BIG_CONSTANT(T, 64, -6.64365417189215599168817064e+10)
		};
		T ex = exp(x / 2);
		T result = ex * boost::math::tools::evaluate_polynomial(P, T(1 / x)) / sqrt(x);
		result *= ex;
		return result;
	}
}

template <typename T>
T bessel_i0_imp(const T& x, const mpl::int_<113>&)
{
	BOOST_MATH_STD_USING
	if(x < 7.75)
	{
		// Bessel I0 over[10 ^ -34, 7.75]
		// Max error in interpolated form : 1.274e-34
		// Max Error found at float128 precision = Poly : 3.096091e-34
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.0000000000000000000000000000000001273856e+00),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.4999999999999999999999999999999107477496e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.7777777777777777777777777777881795230918e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.7361111111111111111111111106290091648808e-03),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.9444444444444444444444445629960334523101e-05),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.9290123456790123456790105563456483249753e-06),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.9367598891408415217940836339080514004844e-08),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.1511873267825648777900014857992724731476e-10),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.5940584281266233066162999610732449709209e-12),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.5940584281266232783124723601470051895304e-14),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.2760813455591936763439337059117957836078e-16),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.3583898233049738471136482147779094353096e-18),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.5789288895299965395422423848480340736308e-20),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.3157800456718804437960453545507623434606e-22),
			BOOST_MATH_BIG_CONSTANT(T, 113, 5.8479113149412360748032684260932041506493e-25),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.2843403488398038539283241944594140493394e-27),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.9042925594356556196790242908697582021825e-30),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.4395919891312152120710245152115597111101e-32),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.7580986145276689333214547502373003196707e-35),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.6886514018062348877723837017198859723889e-37),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.8540558465757554512570197585002702777999e-40),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.4684706070226893763741850944911705726436e-43),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.0210715309399646335858150349406935414314e-45)
		};
		T a = x * x / 4;
		return a * boost::math::tools::evaluate_polynomial(P, a) + 1;
	}
	else if(x < 15)
	{
		// Bessel I0 over[7.75, 15]
		// Max error in interpolated form : 7.534e-35
		// Max Error found at float128 precision = Poly : 6.123912e-34
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.9999999999999999992388573069504617493518e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.5000000000000000007304739268173096975340e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.7777777777777777744261405400543564492074e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.7361111111111111209006987259719750726867e-03),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.9444444444444442399703186871329381908321e-05),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.9290123456790126709286741580242189785431e-06),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.9367598891408374246503061422528266924389e-08),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.1511873267826068395343047827801353170966e-10),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.5940584281262673459688011737168286944521e-12),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.5940584281291583769928563167645746144508e-14),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.2760813455438840231126529638737436950274e-16),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.3583898233839583885132809584770578894948e-18),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.5789288891798658971960571838369339742994e-20),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.3157800470129311623308216856009970266088e-22),
			BOOST_MATH_BIG_CONSTANT(T, 113, 5.8479112701534604520063520412207286692581e-25),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.2843404822552330714586265081801727491890e-27),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.9042888166225242675881424439818162458179e-30),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.4396027771820721384198604723320045236973e-32),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.7577659910606076328136207973456511895030e-35),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.6896548123724136624716224328803899914646e-37),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.8285850162160539150210466453921758781984e-40),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.9419071894227736216423562425429524883562e-43),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.4720374049498608905571855665134539425038e-45),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.7763533278527958112907118930154738930378e-48),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.1213839473168678646697528580511702663617e-51),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.0648035313124146852372607519737686740964e-53),
			-BOOST_MATH_BIG_CONSTANT(T, 113, 5.1255595184052024349371058585102280860878e-57),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.4652470895944157957727948355523715335882e-59)
		};
		T a = x * x / 4;
		return a * boost::math::tools::evaluate_polynomial(P, a) + 1;
	}
	else if(x < 30)
	{
		// Max error in interpolated form : 1.808e-34
		// Max Error found at float128 precision = Poly : 2.399403e-34
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.9894228040870793650581242239624530714032e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.9867780576714783790784348982178607842250e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.8051948347934462928487999569249907599510e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.8971143420388958551176254291160976367263e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.8197359701715582763961322341827341098897e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, -3.3430484862908317377522273217643346601271e+00),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.7884507603213662610604413960838990199224e+02),
			BOOST_MATH_BIG_CONSTANT(T, 113, -1.8304926482356755790062999202373909300514e+04),
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.8867173178574875515293357145875120137676e+05),
			BOOST_MATH_BIG_CONSTANT(T, 113, -4.4261178812193528551544261731796888257644e+07),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.6453010340778116475788083817762403540097e+09),
			BOOST_MATH_BIG_CONSTANT(T, 113, -5.0432401330113978669454035365747869477960e+10),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.2462165331309799059332310595587606836357e+12),
			BOOST_MATH_BIG_CONSTANT(T, 113, -2.3299800389951335932792950236410844978273e+13),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.5748218240248714177527965706790413406639e+14),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.8330014378766930869945511450377736037385e+15),
			BOOST_MATH_BIG_CONSTANT(T, 113, -1.8494610073827453236940544799030787866218e+17),
			BOOST_MATH_BIG_CONSTANT(T, 113, 5.7244661371420647691301043350229977856476e+18),
			BOOST_MATH_BIG_CONSTANT(T, 113, -1.2386378807889388140099109087465781254321e+20),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.1104000573102013529518477353943384110982e+21),
			BOOST_MATH_BIG_CONSTANT(T, 113, -2.9426541092239879262282594572224300191016e+22),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.4061439136301913488512592402635688101020e+23),
			BOOST_MATH_BIG_CONSTANT(T, 113, -3.2836554760521986358980180942859101564671e+24),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.6270285589905206294944214795661236766988e+25),
			BOOST_MATH_BIG_CONSTANT(T, 113, -1.7278631455211972017740134341610659484259e+26),
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.1971734473772196124736986948034978906801e+26),
			BOOST_MATH_BIG_CONSTANT(T, 113, -3.8669270707172568763908838463689093500098e+27),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.2368879358870281916900125550129211146626e+28),
			BOOST_MATH_BIG_CONSTANT(T, 113, -2.8296235063297831758204519071113999839858e+28),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.1253861666023020670144616019148954773662e+28),
			BOOST_MATH_BIG_CONSTANT(T, 113, -2.8809536950051955163648980306847791014734e+28)
		};
		return exp(x) * boost::math::tools::evaluate_polynomial(P, T(1 / x)) / sqrt(x);
	}
	else if(x < 100)
	{
		// Bessel I0 over[30, 100]
		// Max error in interpolated form : 1.487e-34
		// Max Error found at float128 precision = Poly : 1.929924e-34
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.9894228040143267793996798658172135362278e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.9867785050179084714910130342157246539820e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.8050629090725751585266360464766768437048e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.9219405302833158254515212437025679637597e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.4742214371598631578107310396249912330627e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.0602983776478659136184969363625092585520e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.2839507231977478205885469900971893734770e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.8925739165733823730525449511456529001868e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.4238082222874015159424842335385854632223e+00),
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.6759648427182491050716309699208988458050e+00),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.7292246491169360014875196108746167872215e+01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.1001411442786230340015781205680362993575e+01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.8277628835804873490331739499978938078848e+03),
			BOOST_MATH_BIG_CONSTANT(T, 113, -3.1208326312801432038715638596517882759639e+05),
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.4813611580683862051838126076298945680803e+06),
			BOOST_MATH_BIG_CONSTANT(T, 113, -2.1278197693321821164135890132925119054391e+08),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.3190303792682886967459489059860595063574e+09),
			BOOST_MATH_BIG_CONSTANT(T, 113, -2.1580767338646580750893606158043485767644e+10),
			BOOST_MATH_BIG_CONSTANT(T, 113, -5.0256008808415702780816006134784995506549e+11),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.9044186472918017896554580836514681614475e+13),
			BOOST_MATH_BIG_CONSTANT(T, 113, -3.2521078890073151875661384381880225635135e+14),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.3620352486836976842181057590770636605454e+15),
			BOOST_MATH_BIG_CONSTANT(T, 113, -2.0375525734060401555856465179734887312420e+16),
			BOOST_MATH_BIG_CONSTANT(T, 113, 5.6392664899881014534361728644608549445131e+16)
		};
		return exp(x) * boost::math::tools::evaluate_polynomial(P, T(1 / x)) / sqrt(x);
	}
	else
	{
		// Bessel I0 over[100, INF]
		// Max error in interpolated form : 5.459e-35
		// Max Error found at float128 precision = Poly : 1.472240e-34
		static const T P[] =
		{
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.9894228040143267793994605993438166526772e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.9867785050179084742493257495245185241487e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.8050629090725735167652437695397756897920e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.9219405302839307466358297347675795965363e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.4742214369972689474366968442268908028204e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.0602984099194778006610058410222616383078e-02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.2839502241666629677015839125593079416327e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.8926354981801627920292655818232972385750e-01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.4231921590621824187100989532173995000655e+00),
			BOOST_MATH_BIG_CONSTANT(T, 113, 9.7264260959693775207585700654645245723497e+00),
			BOOST_MATH_BIG_CONSTANT(T, 113, 4.3890136225398811195878046856373030127018e+01),
			BOOST_MATH_BIG_CONSTANT(T, 113, 2.1999720924619285464910452647408431234369e+02),
			BOOST_MATH_BIG_CONSTANT(T, 113, 1.2076909538525038580501368530598517194748e+03),
			BOOST_MATH_BIG_CONSTANT(T, 113, 7.5684635141332367730007149159063086133399e+03),
			BOOST_MATH_BIG_CONSTANT(T, 113, 3.5178192543258299267923025833141286569141e+04),
			BOOST_MATH_BIG_CONSTANT(T, 113, 6.2966297919851965784482163987240461837728e+05)
		};
		T ex = exp(x / 2);
		T result = ex * boost::math::tools::evaluate_polynomial(P, T(1 / x)) / sqrt(x);
		result *= ex;
		return result;
	}
}

template <typename T>
T bessel_i0_imp(const T& x, const mpl::int_<0>&)
{
	if(boost::math::tools::digits<T>() <= 24)
		return bessel_i0_imp(x, mpl::int_<24>());
	else if(boost::math::tools::digits<T>() <= 53)
		return bessel_i0_imp(x, mpl::int_<53>());
	else if(boost::math::tools::digits<T>() <= 64)
		return bessel_i0_imp(x, mpl::int_<64>());
	else if(boost::math::tools::digits<T>() <= 113)
		return bessel_i0_imp(x, mpl::int_<113>());
	BOOST_ASSERT(0);
	return 0;
}

template <typename T>
inline T bessel_i0(const T& x)
{
	typedef mpl::int_<
	((std::numeric_limits<T>::digits == 0) || (std::numeric_limits<T>::radix != 2)) ?
	0 :
	std::numeric_limits<T>::digits <= 24 ?
	24 :
	std::numeric_limits<T>::digits <= 53 ?
	53 :
	std::numeric_limits<T>::digits <= 64 ?
	64 :
	std::numeric_limits<T>::digits <= 113 ?
	113 : -1
	> tag_type;

	bessel_i0_initializer<T, tag_type>::force_instantiate();
	return bessel_i0_imp(x, tag_type());
}

}
}
} // namespaces

#endif // BOOST_MATH_BESSEL_I0_HPP

