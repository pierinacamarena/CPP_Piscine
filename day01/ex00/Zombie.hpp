/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:08:13 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/05 18:29:43 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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