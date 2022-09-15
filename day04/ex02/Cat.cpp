/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:50 by pierina           #+#    #+#             */
/*   Updated: 2022/09/15 21:29:29 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ){
	this->setType("Cat");
	this->_catBrain = new Brain();
	std::cout << "Cat default constructor" << std::endl;
	return ;
}

Cat::Cat( std::string const type) : _type(type) {
	std::cout << "Cat string constructor called" << std::endl;
}

Cat::Cat( Cat const & cat) {
	*this = cat;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void ) {
	delete this->_catBrain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs) {
	this->_type = rhs._type;
	this->_catBrain = new Brain();
	*(this->_catBrain) = *(rhs._catBrain);
	return *this;
}

std::string		Cat::getType( void ) const {
	return (this->_type);
}

void			Cat::setType(std::string const type) {
	this->_type = type;
}

void	Cat::makeSound( void ) const{
	std::cout << "Meooow meooow meooow" << std::endl;
}
