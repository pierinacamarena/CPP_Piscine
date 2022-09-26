/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:50 by pierina           #+#    #+#             */
/*   Updated: 2022/09/26 21:05:28 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat"){
	std::cout << "Cat default constructor" << std::endl;
	this->_catBrain = new Brain();
	return ;
}

Cat::Cat( Cat const & cat) : Animal(cat) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_catBrain;
}

Cat &	Cat::operator=(Cat const & rhs) {
	this->_type = rhs._type;
	this->_catBrain = new Brain();
	*(this->_catBrain) = *(rhs._catBrain);
	return *this;
}

void	Cat::makeSound( void ) const{
	std::cout << "Meooow meooow meooow" << std::endl;
}

Brain*	Cat::getBrain( void ) const {
	return (this->_catBrain);
}