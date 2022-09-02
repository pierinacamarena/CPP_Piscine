/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:29:46 by pierina           #+#    #+#             */
/*   Updated: 2022/09/02 12:18:46 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){
	return;
}

HumanA::~HumanA(){
	return;
}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with their " \
	<< this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon){
	this->_weapon = weapon;
}
