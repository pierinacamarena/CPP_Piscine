/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:26:43 by pierina           #+#    #+#             */
/*   Updated: 2022/09/13 21:45:09 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	
public:
	ScavTrap( void);
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & st);
	~ScavTrap( void );

	ScavTrap &	operator=(ScavTrap const & rhs);
	void		guardGate( void );
	void 		attack(const std::string& target);
private:

};

#endif
