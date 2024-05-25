/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:39 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/21 18:27:56 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize( Data* ptr ) {

	uintptr_t	raw = reinterpret_cast<uintptr_t>( ptr );

	return raw;
}

Data*		Serializer::deserialize( uintptr_t raw ) {

	Data*	ptr = reinterpret_cast<Data *>( raw );

	return ptr;
}
