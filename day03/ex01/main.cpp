/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:44:47 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/21 11:59:51 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	printStats(ClapTrap & one, ClapTrap &two, ScavTrap &three)
{
	std::cout << "PRINT STATS" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "PLAYER 1" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name: " << one.getName() << std::endl;
	std::cout << "Energy Points: " << one.getEnergyPoints() << std::endl;
	std::cout << "Hit Points: " << one.getHitPoints() << std::endl;
	std::cout << "Attack Damage: " << one.getAttackDamage() << std::endl << std::endl;	

	std::cout << "PLAYER 2" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name: " << two.getName() << std::endl;
	std::cout << "Energy Points: " << two.getEnergyPoints() << std::endl;
	std::cout << "Hit Points: " << two.getHitPoints() << std::endl;
	std::cout << "Attack Damage: " << two.getAttackDamage() << std::endl << std::endl;

	std::cout << "PLAYER 3" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name: " << three.getName() << std::endl;
	std::cout << "Energy Points: " << three.getEnergyPoints() << std::endl;
	std::cout << "Hit Points: " << three.getHitPoints() << std::endl;
	std::cout << "Attack Damage: " << three.getAttackDamage() << std::endl << std::endl;
}


int	main( void ) {
	
	ClapTrap	pierina("Pierina");
	ClapTrap	francesca("Francesca");
	ScavTrap	mateo("Mateo");
	
	std::cout << std::endl << "----------------------------------------------------" << std::endl;
	printStats(pierina, francesca, mateo);
	
	std::cout << "Fight starts" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	pierina.attack("Francesca");
	francesca.takeDamage(3);
	francesca.beRepaired(2);
	mateo.attack("Pierina");
	pierina.takeDamage(mateo.getAttackDamage());
	printStats(pierina, francesca, mateo);
	
	std::cout << "Fight again" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	francesca.attack("Pierina");
	pierina.takeDamage(20);
	pierina.beRepaired(3);
	mateo.attack("Francesca");
	francesca.takeDamage(mateo.getAttackDamage());
	mateo.guardGate();
	printStats(pierina, francesca, mateo);
	std::cout << "----------------------------------------------------" << std::endl;
	
}