/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:29 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/21 18:24:41 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>
# include "Data.hpp"

class Serializer {

	private:

		Serializer( void );
		Serializer( const Serializer& src );
		Serializer& operator=( const Serializer& rhs );
		~Serializer( void );

	public:

		static uintptr_t	serialize( Data* ptr );
		static Data			*deserialize( uintptr_t raw );
};

#endif