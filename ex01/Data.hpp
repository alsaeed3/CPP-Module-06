/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:50 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/21 18:39:20 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Node {
	
	public:

		void	*value;
		Node	*next;
		
		Node( void );
		Node( void *value );
		~Node( void );
};

class Data {

	private:

		Node	*head;
		Node	*tail;

	public:	

		Data( void );
		~Data( void );

		void	addTail( void *value );
		void*	getHeadValue( void );
		void*	removeHead( void );
		bool	isDataEmpty( void );
};

#endif