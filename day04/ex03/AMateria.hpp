/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:37:06 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/16 18:12:15 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define	AMATERIA_HPP

#include <string>
#include <iostream>

Class AMateria {

public:

	AMateria( std::string const & type);
	AMateria( void );
	AMateria( AMateria const & am);
	~AMateria( void );

	std::string const & getType() const;

	AMateria &		operator=( AMateria const & rhs);
	
	virtual	AMateria*	clone() const = 0;
	virtual void		use(ICharacter &target);

protected:

	std::string	_type;

};

#endif