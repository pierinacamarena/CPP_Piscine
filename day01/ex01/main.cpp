/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:03:15 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/01 21:12:24 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int	i = 0;
	Zombie *myHorde = zombieHorde(15, "Cuy");
	while (i < 15)
	{
		myHorde[i].announce();
		i++;
	}
	delete [] myHorde;
	return (0);
}