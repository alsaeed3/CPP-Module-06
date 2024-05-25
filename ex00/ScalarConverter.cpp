/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:35:32 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/18 18:56:37 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cerrno>
#include <cmath>
#include <cctype>

// Helper function to trim whitespace from the input string
std::string ScalarConverter::trim( const std::string& str ) {

    size_t start = str.find_first_not_of( ' ' );
    size_t end = str.find_last_not_of( ' ' );

    return ( start == std::string::npos || end == std::string::npos ) ? "" : str.substr( start, end - start + 1 );
}

void ScalarConverter::convert( const std::string& literal ) {

    std::string trimmedLiteral = trim( literal );

    if ( trimmedLiteral.empty() ) {

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }

    if ( isChar( trimmedLiteral ) ) {

        fromChar( trimmedLiteral );
    } else if ( isInt( trimmedLiteral ) ) {

        fromInt(trimmedLiteral);
    } else if ( isFloat( trimmedLiteral ) ) {

        fromFloat( trimmedLiteral );
    } else if ( isDouble( trimmedLiteral ) ) {

        fromDouble( trimmedLiteral );
    } else {

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }

	return;
}

bool ScalarConverter::isChar( const std::string& literal ) {

    return literal.length() == 1 && isprint ( literal[ 0 ] ) && !isdigit( literal[ 0 ] );
}

bool ScalarConverter::isInt( const std::string& literal ) {

    char* end;
    long val = strtol( literal.c_str(), &end, 10 );

    return *end == '\0' && errno != ERANGE && val >= INT_MIN && val <= INT_MAX;
}

bool ScalarConverter::isFloat( const std::string& literal ) {

    if ( literal == "-inff" || literal == "+inff" || literal == "nanf" ) {

		return true;
	}

    char* end;

    strtof( literal.c_str(), &end );

    return (*end == 'f' && *( end + 1 ) == '\0' && errno != ERANGE);
}

bool ScalarConverter::isDouble( const std::string& literal ) {

    if ( literal == "-inf" || literal == "+inf" || literal == "nan" ) {
		
		return true;
	}

    char* end;

    strtod( literal.c_str(), &end );

    return *end == '\0' && errno != ERANGE;
}

void ScalarConverter::fromChar( const std::string& literal ) {

    char c = literal[ 0 ];

    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>( c ) << std::endl;
    std::cout << "float: " << static_cast<float>( c ) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>( c ) << std::endl;
	
	return;
}

void ScalarConverter::fromInt( const std::string& literal ) {

    int val = std::atoi( literal.c_str() );

    if ( val < 32 || val > 126 ) {

        std::cout << "char: Non displayable" << std::endl;
    } else {

        std::cout << "char: '" << static_cast<char>( val ) << "'" << std::endl;
    }

    std::cout << "int: " << val << std::endl;
    std::cout << "float: " << static_cast<float>( val ) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>( val ) << std::endl;
	
	return;
}

void ScalarConverter::fromFloat( const std::string& literal ) {

    float val = std::strtof( literal.c_str(), NULL );
    if (std::isnan( val ) || std::isinf( val )) {

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << literal << std::endl;
        std::cout << "double: " << literal.substr( 0, literal.size() - 1 ) << std::endl;
        return;
    }

    if ( val < 32.0f || val > 126.0f ) {

        std::cout << "char: Non displayable" << std::endl;
    } else {

        std::cout << "char: '" << static_cast<char>( val ) << "'" << std::endl;
    }

    std::cout << "int: " << static_cast<int>( val ) << std::endl;
    std::cout << "float: " << val << "f" << std::endl;
    std::cout << "double: " << static_cast<double>( val ) << std::endl;
	
	return;
}

void ScalarConverter::fromDouble( const std::string& literal ) {

    double val = std::strtod( literal.c_str(), NULL );

    if (std::isnan( val ) || std::isinf( val )) {

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << literal + "f" << std::endl;
        std::cout << "double: " << literal << std::endl;
        return;
    }

    if (val < 32.0 || val > 126.0) {

        std::cout << "char: Non displayable" << std::endl;
    } else {

        std::cout << "char: '" << static_cast<char>( val ) << "'" << std::endl;
    }

    std::cout << "int: " << static_cast<int>( val ) << std::endl;
    std::cout << "float: " << static_cast<float>( val ) << "f" << std::endl;
    std::cout << "double: " << val << std::endl;
	
	return;
}