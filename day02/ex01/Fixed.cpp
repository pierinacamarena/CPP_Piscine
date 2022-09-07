/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:32:23 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/07 17:01:31 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
	
	std::cout << "Default Constructor called" << std::endl;
	
	return ;
}

Fixed::Fixed(int const n) {

	std::cout << "Int Constructor called" << std::endl;
	_value = n << this->_numBits;

	return ;
}

Fixed::Fixed(float const f) {

	std::cout << "Float Constructor called" << std::endl;
	_value = roundf(f * (1 << this->_numBits));

	return;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;	
}

Fixed &Fixed::operator=(Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	_value = rhs.getRawBits();
	
	return *this;	
}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return (_value);
}

void	Fixed::setRawBits( int const raw ) {
	
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;

	return ;
}

float	Fixed::toFloat( void ) const {

	return ((float)(this->_value / (float)(1 << this->_numBits)));
}

int		Fixed::toInt( void ) const {

	return (this->_value >> this->_numBits);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {

	o << i.toFloat();
	return (o);
}
