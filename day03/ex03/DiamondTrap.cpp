/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:27:57 by pierina           #+#    #+#             */
/*   Updated: 2022/09/21 14:21:21 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Diamond_Default_clap_name"), FragTrap(), ScavTrap(), _name("Diamond_Default"){
	this->_name = "Diamond_Default";
	FragTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	FragTrap::setAttackDamage(30);
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name){
	this->_name = name;
	FragTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	FragTrap::setAttackDamage(30);
	std::cout << "DiamondTrap String constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & dt) : ClapTrap(dt.getName() + "_clap_name", dt.getHitPoints(), dt.getEnergyPoints(), dt.getAttackDamage()), FragTrap(), ScavTrap(){
	*this = dt;
	std::cout << "Diamond copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){
	this->_name = rhs._name;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "Diamond name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << this->ClapTrap::getName() << std::endl;
}
