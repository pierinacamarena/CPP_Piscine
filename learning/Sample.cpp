/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:36:40 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/06 18:55:43 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample( void ) : _foo(0) {

	std::cout << "Default Constructor called" << std::endl;

	return ;
	
}

Sample::Sample( int const n ) : _foo(n) {

	std::cout << "Parametric constructor called" << std::endl;

	return;

}

Sample::Sample( Sample const & src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Sample &Sample::operator=(Sample const & rhs) {
	_foo = rhs._foo;
	return *this;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}


int	Sample::getFoo() const{
	return (_foo);
}

std::ostream &		operator<<( std::ostream & o, Sample const & i) {
	o << "foo = " << i.getFoo() << std::endl;
	return (o);
}