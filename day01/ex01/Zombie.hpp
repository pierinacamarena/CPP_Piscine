/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:08:45 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/01 21:14:17 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
	
		void		announce(void);
		void		zombieNameSet(std::string name);
		
	private:
	
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif