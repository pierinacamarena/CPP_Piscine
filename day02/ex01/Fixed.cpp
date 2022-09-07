/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:32:23 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/07 12:10:52 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	_numBits = 8;

Fixed::Fixed() : _value(0){
	
	std::cout << "Default Constructor called" << std::endl;
	
	return ;
}

Fixed::Fixed(int const n) {

	std::cout << "Int Constructor called" << std::endl;
	_value = n * (1 << _numBits);
	return ;
}

Fixed::Fixed(float const f) {

	std::cout << "Float Constructor called" << std::endl;
	
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
	
}

int		Fixed::toInt( void ) const {
	
}
