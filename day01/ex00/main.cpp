/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:21:03 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/01 20:15:01 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zombieA = newZombie("ZombieA");
	Zombie *zombieB = newZombie("ZombieB");
	Zombie *zombieC = newZombie("ZombieC");

	zombieA->announce();
	zombieB->announce();
	zombieC->announce();

	randomChump("ZombieChump1");
	randomChump("ZombieChump2");
	randomChump("ZombieChump3");
	std::cout << std::endl;
	delete zombieA;
	delete zombieB;
	delete zombieC ;
	return (0);
}