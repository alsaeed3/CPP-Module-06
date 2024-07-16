/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:35:17 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/13 19:34:33 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <cerrno>
#include <cmath>
#include <iomanip>

class ScalarConverter {

	public:

    	static void convert(const std::string &str);

	private:

		ScalarConverter();

		static bool toInt( const std::string &literal );
		static bool toDouble( const std::string &literal );
		static bool toFloat( const std::string &literal );
		static bool toChar( const std::string &literal );

};

#endif