/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:30:07 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/13 17:32:49 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	printStats(ClapTrap & one, ClapTrap &two)
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
}


int	main( void ) {
	
	ClapTrap one("Pierina");
	ClapTrap two("Francesca");
	
	std::cout << std::endl << "----------------------------------------------------" << std::endl;
	printStats(one, two);
	std::cout << "Fight starts" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	one.attack("Francesca");
	two.takeDamage(3);
	two.beRepaired(2);
	printStats(one, two);
	std::cout << "Fight again" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	two.attack("Pierina");
	one.takeDamage(20);
	one.beRepaired(3);
	printStats(one, two);
	std::cout << "----------------------------------------------------" << std::endl;
	
}