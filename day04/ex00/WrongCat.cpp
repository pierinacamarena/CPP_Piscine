/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:37:58 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/15 19:52:00 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat"){
	std::cout << "WrongCat default constructor" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & wc) {
	*this = wc;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs) {
	this->_type = rhs._type;
	return *this;
}

void	WrongCat::makeSound( void ) const{
	std::cout << "Meooow meooow meooow wrong cat" << std::endl;
}
