/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:51:08 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/21 18:40:17 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main( void ) {

	Data	list;

	list.addTail( new std::string( "Head" ) );
	list.addTail( new std::string( " Node2" ) );
	list.addTail( new std::string( " Node3" ) );
	list.addTail( new std::string( " Tail\n" ) );

	uintptr_t	serializedPtr = Serializer::serialize( &list );

	Data		*deserializedPtr = Serializer::deserialize( serializedPtr );

	if (deserializedPtr != &list) {

		std::cout << "Serialization and deserialization failed!" << std::endl;

		return 1;
	}

	while ( deserializedPtr->isDataEmpty() == false ) {

		std::string	*word = (std::string *)deserializedPtr->removeHead();
		std::cout << *word;
		delete word;
	}

	return 0;
}