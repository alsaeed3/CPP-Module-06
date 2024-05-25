/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:35:17 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/18 18:41:57 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter {

	public:

    	static void convert(const std::string& literal);

	private:

    	ScalarConverter( void );
    	ScalarConverter( const ScalarConverter& src );
    	ScalarConverter& operator=( const ScalarConverter& rhs );
		~ScalarConverter( void );

    	static bool isChar(const std::string& literal);
    	static bool isInt(const std::string& literal);
    	static bool isFloat(const std::string& literal);
    	static bool isDouble(const std::string& literal);

    	static void fromChar(const std::string& literal);
    	static void fromInt(const std::string& literal);
    	static void fromFloat(const std::string& literal);
    	static void fromDouble(const std::string& literal);

    	static std::string trim(const std::string& str);
};

#endif