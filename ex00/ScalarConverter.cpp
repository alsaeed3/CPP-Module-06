/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:35:32 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/13 19:51:31 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert( const std::string &literal ) {

	if ( toInt( literal ) == true ) {
	
		return;
	}

	if ( toDouble( literal ) == true ) {
	
		return;
	}

	if ( toFloat( literal ) == true ) {
    
		return;
    }

	if ( toChar( literal ) == true ) {
    
		return;
    }

	// If all conversions failed
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;

	return;
}

bool ScalarConverter::toInt( const std::string &literal ) {

	char *end;
	errno = 0;

	long intVal = std::strtol( literal.c_str(), &end, 10 );
	if ( *end == '\0' && errno == 0 ) {

		if ( intVal < std::numeric_limits<int>::min() || intVal > std::numeric_limits<int>::max() ) {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		} else {
			if ( intVal < 32 || intVal > 126 ) {
				std::cout << "char: Non displayable" << std::endl;
			} else {
				std::cout << "char: '" << static_cast<char>( intVal ) << "'" << std::endl;
			}
			std::cout << "int: " << intVal << "" << std::endl;
		}
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>( intVal ) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>( intVal ) << std::endl;
		return true;
	}
	return false;
}

bool ScalarConverter::toDouble( const std::string &literal ) {

	char *end;
	errno = 0;

	double doubleVal = std::strtod( literal.c_str(), &end );
	if ( *end == '\0' && errno == 0 ) {
		if ( std::isnan( doubleVal ) || std::isinf( doubleVal ) ) {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		} else if ( doubleVal < std::numeric_limits<int>::min() || doubleVal > std::numeric_limits<int>::max() ) {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		} else {
			int intFromDouble = static_cast<int>( doubleVal );
			if ( intFromDouble < 32 || intFromDouble > 126 ) {
				std::cout << "char: Non displayable" << std::endl;
			} else {
				std::cout << "char: '" << static_cast<char>( intFromDouble ) << "'" << std::endl;
			}
			std::cout << "int: " << intFromDouble << "" << std::endl;
		}
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>( doubleVal ) << "f" << std::endl;
		std::cout << "double: " << doubleVal << "" << std::endl;
		return true;
	}
	return false;
}

bool ScalarConverter::toFloat( const std::string &literal ) {

	char *end;
	errno = 0;

	float floatVal = std::strtof( literal.c_str(), &end );
    if ( *end == 'f' && *( end + 1 ) == '\0' && errno == 0 ) {
        if ( std::isnan( floatVal ) || std::isinf( floatVal ) ) {
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
        } else if ( floatVal < std::numeric_limits<int>::min() || floatVal > std::numeric_limits<int>::max() ) {
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
        } else {
            int intFromFloat = static_cast<int>( floatVal );
            if ( intFromFloat < 32 || intFromFloat > 126 ) {
                std::cout << "char: Non displayable\n";
            } else {
                std::cout << "char: '" << static_cast<char>( intFromFloat ) << "'\n";
            }
            std::cout << "int: " << intFromFloat << "\n";
        }
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << floatVal << "f\n";
        std::cout << "double: " << static_cast<double>( floatVal ) << "\n";
		return true;
	}
	return false;
}

bool ScalarConverter::toChar( const std::string &literal ) {

	if ( literal.length() == 1 && !std::isdigit( literal[0] ) ) {
		char c = literal[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>( c ) << "" << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>( c ) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>( c ) << std::endl;
		return true;
	}
	return false;
}
