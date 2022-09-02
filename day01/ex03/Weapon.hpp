/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:30:04 by pierina           #+#    #+#             */
/*   Updated: 2022/09/02 12:38:47 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
	public:
		Weapon( void );
		Weapon( std::string type);
		~Weapon( void );
		const std::string	&getType(void) const;
		void				setType(const std::string type);
	private:
		std::string _type;
};

#endif