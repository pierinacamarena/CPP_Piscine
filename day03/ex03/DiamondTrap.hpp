/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:27:54 by pierina           #+#    #+#             */
/*   Updated: 2022/09/14 12:00:17 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap {

public:

	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & dt );
	~DiamondTrap( void );

	DiamondTrap &operator=(DiamondTrap const & rhs);

	void		whoAmI();

private:

	std::string _name;
};

#endif