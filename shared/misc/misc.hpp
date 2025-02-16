#pragma once

namespace shared::misc
{
	/// <summary>
	/// Creates an array filled with the specified value
	/// </summary>
	/// <param name="fill">Value which the array will be filled with</param>
	/// <returns>Array filled with values</returns>
	template< typename t, size_t s >
	std::array<t, s> create_filled_array( const t& fill )
	{
		auto arr = std::array<t, s>{};
		arr.fill( fill );
		return arr;
	}

	/// <summary>
	/// Creates a vector filled with the specified value
	/// </summary>
	/// <param name="fill">Value which the array will be filled with</param>
	/// <returns>Vector filled with values</returns>
	template< typename t, size_t s >
	std::vector<t> create_filled_vector( const t& fill )
	{
		auto vec = std::vector<t>( s );
		std::fill( vec.begin(), vec.begin() + s, fill );
		return vec;
	}
}