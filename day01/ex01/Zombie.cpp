/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:47:15 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/01 21:14:46 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void){
	std::cout << "There is a new zombie" << std::endl;
	return ;
}

Zombie::~Zombie(void){
	std::cout << "The zombie has been destroyed :(" << std::endl;
	return ;
}

Zombie::Zombie (std::string name)
{
	this->_name = name;
	return;
}

void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::zombieNameSet(std::string name){
	this->_name = name;
}