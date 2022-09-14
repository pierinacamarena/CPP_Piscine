/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:27:57 by pierina           #+#    #+#             */
/*   Updated: 2022/09/14 13:56:47 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Diamond_Default_clap_name"), ScavTrap(), FragTrap(), _name("Diamond_Default"){
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name){
	std::cout << "DiamondTrap String constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & dt) {
	*this = dt;
	std::cout << "Diamond copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){

	this->_name = rhs._name;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;

}
