/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:24:55 by pierina           #+#    #+#             */
/*   Updated: 2022/09/13 20:59:47 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "Default constructor of called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "String constructor of called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & ct ) {

	*this = ct;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ){
	
	std::cout << "Destructor called" << std::endl;
}

std::string	ClapTrap::getName() {
	return (this->_name);
}

int			ClapTrap::getHitPoints() {
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints() {
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage() {
	return (this->_attackDamage);
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void 		ClapTrap::attack(const std::string& target) {
	
	if (this->getEnergyPoints() > 0 && this->getHitPoints()) {
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target;
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

void 		ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->getName() << " received an attack of ";
	std::cout << amount << " points of damage! " << std::endl;
}

void 		ClapTrap::beRepaired(unsigned int amount) {

	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0) {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->getName() << " is repairing itself by ";
		std::cout << amount << std::endl;
	}
	else {
		if (this->getEnergyPoints() <= 0) {
			std::cout << this->getName();
			std::cout << "Doesn't have enough hit points to repair :'(" << std::endl;
		}
		if (this->getHitPoints() <= 0) {
			std::cout << this->getName();
			std::cout << "Doesn't have enough hit points to attack :'(" << std::endl;
		}
	}
}