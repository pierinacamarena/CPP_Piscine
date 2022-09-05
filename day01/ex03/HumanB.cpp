/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:29:51 by pierina           #+#    #+#             */
/*   Updated: 2022/09/05 15:41:40 by pcamaren         ###   ########.fr       */
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
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks au naturel" << std::endl;
	else
		std::cout << this->_name << " attacks with their " \
		<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon){
	
	this->_weapon = &weapon;
}