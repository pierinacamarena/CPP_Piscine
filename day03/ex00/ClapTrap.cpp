/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:24:55 by pierina           #+#    #+#             */
/*   Updated: 2022/09/13 13:14:43 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "String constructor called" << std::endl;
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

int			Cla