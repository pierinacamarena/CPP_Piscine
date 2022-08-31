/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:08:13 by pcamaren          #+#    #+#             */
/*   Updated: 2022/08/31 20:19:56 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
	public:

		Zombie(void);
		~Zombie(void);
	
		void		announce(void);
		void		setZombieName(const std::string name);
		std::string	getZombieName(void) const;
		
	private:
	
		std::string _name;
};

#endif