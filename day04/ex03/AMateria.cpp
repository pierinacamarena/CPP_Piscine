/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:37:10 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/16 18:02:00 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("Default") {
	std::cout << "AMateria default constructor called" << std::endl;	
}

AMateria::AMateria( std::string const & type) : _type(type) {
	std::cout << "AMateria string constructor called" << std::endl;
}

AMateria::AMateria( AMateria const & am) {
	this->_type = am._type;
	std::cout << "AMateria copy constructor called"

AMateria::~AMateria( void ) {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &	AMateria::operator=( Fixed const & rhs) {
	this->_type = rhs._type;
	return *this;
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void		AMateria::use(ICharacter & target) {
	std::cout << "undefined" << std::endl;
}