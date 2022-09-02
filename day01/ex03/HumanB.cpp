/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:29:51 by pierina           #+#    #+#             */
/*   Updated: 2022/09/02 12:41:22 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	this->_weapon = 0;
	return ;
}

HumanB::~HumanB(void){
	return ;
}

void	HumanB::attack(){
	std::cout << this->_name << " attacks with their " \
	<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}