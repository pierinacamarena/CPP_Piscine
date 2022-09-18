/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:15:35 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/16 23:30:50 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice"){
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( Ice const & ice ) {
	*this = ice;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice( void ) {
	std::cout << "Ice destructor called" << std::endl;
}

Ice &		Ice::operator=( Ice const & rhs) {
	this->_type = rhs._type;
}
	
std::string const & Ice::getType() const {
	return (this->_type);
}
void				Ice::setType(std::string type) {
	this->_type = type;
}

Ice*	Ice::clone() const {
	return (Ice(*this));
}

void	Ice::use(ICharacter &target) {
	
}