/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:59:00 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/12 12:24:06 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors

Fixed::Fixed() : _value(0){
	
	// std::cout << "Default Constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n) {

	// std::cout << "Int Constructor called" << std::endl;
	this->_value = n << this->_numBits;

	return ;
}

Fixed::Fixed(float const f) {

	// std::cout << "Float Constructor called" << std::endl;
	this->_value = roundf(f * (1 << this->_numBits));

	return;
}

Fixed::Fixed( Fixed const & src ) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

//Destructor

Fixed::~Fixed( void ) {

	// std::cout << "Destructor called" << std::endl;
	return ;	
}

//Overload Functions

//Comparison operators

bool	Fixed::operator>(Fixed const & rhs) const {

	return (this->getRawBits() > rhs.getRawBits());

}

bool	Fixed::operator<(Fixed const & rhs) const {

	return (this->getRawBits() < rhs.getRawBits());

}

bool	Fixed::operator>=(Fixed const & rhs) const {

	return (this->getRawBits() >= rhs.getRawBits());

}

bool	Fixed::operator<=(Fixed const & rhs) const {

	return (this->getRawBits() <= rhs.getRawBits());

}

bool	Fixed::operator==(Fixed const & rhs) const {

	return (this->getRawBits() == rhs.getRawBits());

}

bool	Fixed::operator!=(Fixed const & rhs) const {

	return (this->getRawBits() != rhs.getRawBits());

}

Fixed	&Fixed::operator=(Fixed const & rhs) {

	this->_value = rhs.getRawBits();
	
	return *this;	
}

//Arithmetic operators

Fixed	Fixed::operator+(Fixed const & rhs) const {

	Fixed sum;
	sum.setRawBits(this->getRawBits() + rhs.getRawBits());

	return sum;
}

Fixed	Fixed::operator-(Fixed const & rhs) const {

	Fixed minus;
	minus.setRawBits(this->getRawBits() - rhs.getRawBits());

	return minus;

}

Fixed	Fixed::operator*(Fixed const & rhs) const {

	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const {

	return (Fixed(this->toFloat() / rhs.toFloat()));

}

//Prefix and Postfix operators

//Prefix

Fixed &	Fixed::operator++( void ) {

	++this->_value;
	return (*this);

}

Fixed & Fixed::operator--( void ) {

	--this->_value;
	return (*this);
}

//Postfix

Fixed	Fixed::operator++( int ) {

	Fixed increment(*this);

	this->_value++;
	return (increment);
	
}

Fixed	Fixed::operator--( int ) {

	Fixed decrement(*this);

	this->_value--;
	return (decrement);
}

//Getters and setters

int	Fixed::getRawBits( void ) const {

	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw ) {
	
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;

	return ;
}

// Converters

float	Fixed::toFloat( void ) const {

	return ((float)(this->_value / (float)(1 << this->_numBits)));
}

int		Fixed::toInt( void ) const {

	return (this->_value >> this->_numBits);
}

//Overload member functions

const Fixed &Fixed::min(Fixed const & num1, Fixed const & num2) {
	
	if (num1 < num2)
		return (num1);
	return (num2);
}

const Fixed &Fixed::max(Fixed const & num1, Fixed const & num2) {
	
	if (num1 > num2)
		return (num1);
	return (num2);
}

Fixed &Fixed::min(Fixed & num1, Fixed & num2) {
	
	if (num1 < num2)
		return (num1);
	return (num2);
}

Fixed &Fixed::max(Fixed & num1, Fixed & num2) {
	
	if (num1 > num2)
		return (num1);
	return (num2);
}

//Overload of the insertion operator

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {

	o << i.toFloat();
	return (o);
}
