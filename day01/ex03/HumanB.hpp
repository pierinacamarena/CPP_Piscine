/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:29:56 by pierina           #+#    #+#             */
/*   Updated: 2022/09/05 18:29:32 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name );
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &weapon);
	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif