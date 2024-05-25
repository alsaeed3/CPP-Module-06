/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:57 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/21 18:41:38 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Node::Node( void ) : value( NULL), next( NULL ) {
	
	return;
}

Node::Node( void *value ) : value( value ), next( NULL ) {
	
	return;
}

Node::~Node( void ) {
	
	return;
}

Data::Data( void ) : head( NULL ), tail( NULL ) {

	return;
}

Data::~Data( void ) {

	Node	*tmp;

	while ( head ) {

		tmp = head;
		head = head->next;
		delete tmp;
	}

	return;
}

void	Data::addTail( void *value ) {

	Node	*newNode = new Node( value );
	
	if ( head == NULL ) {

		head = newNode;
		tail = newNode;
	} else {

		tail->next = newNode;
		tail = newNode;
	}

	return;
}

void*	Data::getHeadValue( void ) {

	if ( head == NULL ) {

		return NULL;
	}

	return head->value;
}

void*	Data::removeHead( void ) {

	if ( head == NULL ) {

		return NULL;
	}

	Node*	tmp = head;
	void*	value = tmp->value;
	
	head = head->next;
	delete tmp;

	return value;
}

bool	Data::isDataEmpty( void ) {

	if ( head == NULL ) {

		return true;
	}

	return false;
}
