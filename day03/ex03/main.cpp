/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:24:56 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/21 14:23:51 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	printStats(ClapTrap & one, ClapTrap &two, ScavTrap &three, FragTrap &four, DiamondTrap &five)
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

	std::cout << "PLAYER 4" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name: " << four.getName() << std::endl;
	std::cout << "Energy Points: " << four.getEnergyPoints() << std::endl;
	std::cout << "Hit Points: " << four.getHitPoints() << std::endl;
	std::cout << "Attack Damage: " << four.getAttackDamage() << std::endl << std::endl;

	std::cout << "PLAYER 5" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name: " << five.getName() << std::endl;
	std::cout << "Energy Points: " << five.getEnergyPoints() << std::endl;
	std::cout << "Hit Points: " << five.getHitPoints() << std::endl;
	std::cout << "Attack Damage: " << five.getAttackDamage() << std::endl << std::endl;
}


int	main( void ) {
	
	ClapTrap	pierina("Pierina");
	ClapTrap	francesca("Francesca");
	ScavTrap	mateo("Mateo");
	FragTrap	george("George");
	DiamondTrap	rambo("Rambo");
	
	std::cout << std::endl << "----------------------------------------------------" << std::endl;
	printStats(pierina, francesca, mateo, george, rambo);
	std::cout << "Fight starts" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	pierina.attack("Francesca");
	francesca.takeDamage(3);
	francesca.beRepaired(2);
	mateo.attack("Pierina");
	pierina.takeDamage(mateo.getAttackDamage());
	mateo.attack("George");
	george.takeDamage(mateo.getAttackDamage());
	george.attack("Rambo");
	rambo.takeDamage(george.getAttackDamage());
	printStats(pierina, francesca, mateo, george, rambo);
	std::cout << "Fight again" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	francesca.attack("Pierina");
	pierina.takeDamage(20);
	george.beRepaired(5);
	rambo.beRepaired(7);
	pierina.beRepaired(3);
	printStats(pierina, francesca, mateo, george, rambo);
	std::cout << "----------------------------------------------------" << std::endl;
	rambo.whoAmI();
	std::cout << "----------------------------------------------------" << std::endl;
}