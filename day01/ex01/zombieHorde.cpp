/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:27:50 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/01 21:02:21 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i = 0;
	if (N <= 0)
		return (NULL);
	Zombie* myZombieHorde = new Zombie[N];
	while (i < N)
	{
		myZombieHorde[i].zombieNameSet(name);
		i++;
	}
	return (myZombieHorde);
}