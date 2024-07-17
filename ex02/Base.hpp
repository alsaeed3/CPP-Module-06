/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:40:19 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/17 12:03:52 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class A;
class B;
class C;

class Base {

    public:

        virtual ~Base() {};
};

Base*   generate( void );
void    identify( Base* p );
void    identify( Base& p );

#endif // BASE_HPP