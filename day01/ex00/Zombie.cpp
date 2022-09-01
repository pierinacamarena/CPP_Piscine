/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:20:06 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/01 20:15:12 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	std::cout << "There is a new zombie!" << std::endl;
	this->_name = name;
	return;	
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->_name << " has died :(" << std::endl;
}

void	Zombie::announce(void){
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}