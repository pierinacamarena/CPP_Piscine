/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:50 by pierina           #+#    #+#             */
/*   Updated: 2022/09/16 10:15:48 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat"){
	std::cout << "Cat default constructor" << std::endl;
	return ;
}

Cat::Cat( Cat const & cat) {
	*this = cat;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs) {
	this->_type = rhs._type;
	return *this;
}

void	Cat::makeSound( void ) const{
	std::cout << "Meooow meooow meooow" << std::endl;
}
