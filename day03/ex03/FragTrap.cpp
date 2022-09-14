/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:26:38 by pierina           #+#    #+#             */
/*   Updated: 2022/09/14 21:19:27 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("Default", 100, 100, 30) {
	std::cout << "Fragtrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap String constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & ft ) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = ft;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::setHitPoints(int n) {
	this->_hitPoints = n;
}

void	FragTrap::setAttackDamage(int n) {
	this->_attackDamage = n;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs){
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys(void){
	std::cout << this->getName() << "says: High Five peeps ! :D" << std::endl;
}
