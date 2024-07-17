/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:49:18 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/17 12:05:02 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

int main( void ) {

    srand( time( NULL ) );

    Base* base = generate();
    identify( base );
    identify( *base );

    delete base;

    return 0;
}
