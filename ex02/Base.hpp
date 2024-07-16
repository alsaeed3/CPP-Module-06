/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:40:19 by alsaeed           #+#    #+#             */
/*   Updated: 2024/07/16 18:52:12 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class Base {

    public:

        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*   generate( void );
void    identify( Base* p );
void    identify( Base& p );

#endif // BASE_HPP