/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:08:50 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/26 16:07:41 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	printStats(ClapTrap & one, ClapTrap &two, ScavTrap &three, FragTrap &four)
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
}


int	main( void ) {
	
	ClapTrap	pierina("Pierina");
	ClapTrap	francesca("Francesca");
	ScavTrap	mateo("Mateo");
	FragTrap	george("George");
	
	std::cout << std::endl << "----------------------------------------------------" << std::endl;
	printStats(pierina, francesca, mateo, george);
	std::cout << "Fight starts" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	pierina.attack("Francesca");
	francesca.takeDamage(3);
	francesca.beRepaired(2);
	mateo.attack("Pierina");
	pierina.takeDamage(mateo.getAttackDamage());
	mateo.attack("George");
	george.takeDamage(mateo.getAttackDamage());
	george.highFivesGuys();
	printStats(pierina, francesca, mateo, george);
	std::cout << "Fight again" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	francesca.attack("Pierina");
	pierina.takeDamage(20);
	pierina.beRepaired(3);
	george.highFivesGuys();
	george.attack("Mateo");
	mateo.takeDamage(george.getAttackDamage());
	printStats(pierina, francesca, mateo, george);
	std::cout << "----------------------------------------------------" << std::endl;
	
}