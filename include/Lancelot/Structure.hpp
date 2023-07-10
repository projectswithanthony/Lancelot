#ifndef LANCELOT_INCLUDE_STRUCTURE_HPP
#define LANCELOT_INCLUDE_STRUCTURE_HPP
#pragma once

#include <array>
#include <cstdint>
#include <ranges>

namespace Lancelot {

	enum Instrument : int;
	enum OptionType : int;
	enum Exchange : int;

	using ResultSetT = struct ResultSetT {
		uint32_t   _token		= 0;
		uint32_t   _expiryDate	= 0;
		uint32_t   _lotMultiple = 0;
		uint32_t   _lotSize		= 0;
		uint32_t   _tickSize	= 0;
		uint32_t   _divisor		= 0;
		Instrument _instType	= Instrument_OTHER;
		OptionType _option		= OptionType_NONE;
		Exchange   _exchange	= Exchange_END;
		float	   _strikePrice = 0;

		std::string _symbol;
		std::string _segment;
		std::string _name;
		std::string _description;
	};

}  // namespace Lancelot

#endif	// LANCELOT_INCLUDE_STRUCTURE_HPP
