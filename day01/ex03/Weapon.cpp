/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:30:02 by pierina           #+#    #+#             */
/*   Updated: 2022/09/02 09:55:37 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( void ){	
}

Weapon::~Weapon ( void ){
	std::cout << "Destruction of weapon" << std::endl;
}

Weapon::Weapon (std::string type){
	this->setType(type);
}

const std::string&	Weapon::getType( void ) const{
	return (this->_type);
}

void				Weapon::setType( const std::string type){
	this->_type = type;
}