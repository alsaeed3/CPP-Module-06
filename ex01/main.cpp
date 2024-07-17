/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:51:08 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/17 12:05:34 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Data.hpp>
#include <Serializer.hpp>

int main( void ) {

    Data originalData;
    originalData.number = 42;
    originalData.text = "Hello, world!";
    
    unsigned long raw = Serializer::serialize(&originalData);
    
    Data* deserializedData = Serializer::deserialize(raw);
    
    if (deserializedData == &originalData) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Number: " << deserializedData->number << std::endl;
        std::cout << "Text: " << deserializedData->text << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed." << std::endl;
    }

    return 0;
}
