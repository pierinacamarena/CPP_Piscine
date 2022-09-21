/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:43:38 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/21 12:08:59 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap String constructor called" << std::endl;
}


ScavTrap::ScavTrap( void ) : ClapTrap("default", 100, 50, 20) {
	std::cout << "ScavTrap String constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & st) : ClapTrap(st.getName(), st.getHitPoints(), st.getEnergyPoints(), st.getAttackDamage()){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = st;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints()) {
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->getName() << " attacks " << target;
		std::cout <<  " causing " << this->getAttackDamage();
		std::cout << " points of damage! " << std::endl;
	}
	else {
		if (this->getEnergyPoints() <= 0) {
			std::cout << this->getName();
			std::cout << "Doesn't have enough energy points to attack :'(" << std::endl;
		}
		if (this->getHitPoints() <= 0) {
			std::cout << this->getName();
			std::cout << "Doesn't have enough hit points to attack :'(" << std::endl;
		}
	}
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}