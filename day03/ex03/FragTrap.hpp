/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:26:41 by pierina           #+#    #+#             */
/*   Updated: 2022/09/26 16:00:14 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:
	FragTrap( void );
	FragTrap( std::string  name);
	FragTrap( FragTrap const & ft);
	~FragTrap( void );

	FragTrap &	operator=(FragTrap const & rhs);
	
	void	highFivesGuys(void);

	void	setHitPoints(int n);
	void	setAttackDamage(int n);
};

#endif