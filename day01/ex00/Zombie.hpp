/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:08:13 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/01 20:08:33 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
	public:

		Zombie(std::string name);
		~Zombie(void);
	
		void		announce(void);
		
	private:
	
		std::string _name;
};

Zombie* newZombie (std::string name);
void	randomChump(std::string name);

#endif