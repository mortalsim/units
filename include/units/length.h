//--------------------------------------------------------------------------------------------------
//
//	UnitConversion: A compile-time c++14 unit conversion library with no dependencies
//
//--------------------------------------------------------------------------------------------------
//
// The MIT License (MIT)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//--------------------------------------------------------------------------------------------------
//
// Copyright (c) 2016 Nic Holthaus
//
//--------------------------------------------------------------------------------------------------
//
// ATTRIBUTION:
// Parts of this work have been adapted from:
// http://stackoverflow.com/questions/35069778/create-comparison-trait-for-template-classes-whose-parameters-are-in-a-different
// http://stackoverflow.com/questions/28253399/check-traits-for-all-variadic-template-arguments/28253503
// http://stackoverflow.com/questions/36321295/rational-approximation-of-square-root-of-stdratio-at-compile-time?noredirect=1#comment60266601_36321295
// https://github.com/swatanabe/cppnow17-units
//
//--------------------------------------------------------------------------------------------------
//
/// @file	units/length.h
/// @brief	units representing length values
//
//--------------------------------------------------------------------------------------------------

#pragma once

#ifndef units_length_h__
#define units_length_h__

#include <units/core.h>

namespace units
{
	/**
	 * @namespace	units::length
	 * @brief		namespace for unit types and containers representing length values
	 * @details		The SI unit for length is `meters`, and the corresponding `dimension` dimension is
	 *				`length_unit`.
	 * @anchor		lengthContainers
	 * @sa			See unit for more information on unit type containers.
	 */
	UNIT_ADD_WITH_METRIC_PREFIXES(length, meter, meters, m, conversion_factor<std::ratio<1>, units::dimension::length>)
	UNIT_ADD(length, foot, feet, ft, conversion_factor<std::ratio<381, 1250>, meters>)
	UNIT_ADD(length, mil, mils, mil, conversion_factor<std::ratio<1000>, feet>)
	UNIT_ADD(length, inch, inches, in, conversion_factor<std::ratio<1, 12>, feet>)
	UNIT_ADD(length, mile, miles, mi, conversion_factor<std::ratio<5280>, feet>)
	UNIT_ADD(length, nauticalMile, nauticalMiles, nmi, conversion_factor<std::ratio<1852>, meters>)
	UNIT_ADD(length, astronomicalUnit, astronomicalUnits, au, conversion_factor<std::ratio<149597870700>, meters>)
	UNIT_ADD(length, lightyear, lightyears, ly, conversion_factor<std::ratio<9460730472580800>, meters>)
	UNIT_ADD(length, parsec, parsecs, pc, conversion_factor<std::ratio<648000>, astronomicalUnits, std::ratio<-1>>)
	UNIT_ADD(length, angstrom, angstroms, angstrom, conversion_factor<std::ratio<1, 10>, nanometers>)
	UNIT_ADD(length, cubit, cubits, cbt, conversion_factor<std::ratio<18>, inches>)
	UNIT_ADD(length, fathom, fathoms, ftm, conversion_factor<std::ratio<6>, feet>)
	UNIT_ADD(length, chain, chains, ch, conversion_factor<std::ratio<66>, feet>)
	UNIT_ADD(length, furlong, furlongs, fur, conversion_factor<std::ratio<10>, chains>)
	UNIT_ADD(length, hand, hands, hand, conversion_factor<std::ratio<4>, inches>)
	UNIT_ADD(length, league, leagues, lea, conversion_factor<std::ratio<3>, miles>)
	UNIT_ADD(length, nauticalLeague, nauticalLeagues, nl, conversion_factor<std::ratio<3>, nauticalMiles>)
	UNIT_ADD(length, yard, yards, yd, conversion_factor<std::ratio<3>, feet>)

	// british spelling aliases
	using metre_t = length::meter_t;

	UNIT_ADD_DIMENSION_TRAIT(length)
} // namespace units

#endif // units_length_h__
