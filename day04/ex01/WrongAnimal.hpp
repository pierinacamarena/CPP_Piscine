/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:26:17 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/15 19:52:20 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>
class WrongAnimal {

public:

	WrongAnimal ( void );
	WrongAnimal (std::string const type);
	WrongAnimal (WrongAnimal const & copy);
	virtual ~WrongAnimal ( void );

	WrongAnimal &	operator=(WrongAnimal const & rhs);	
	
	std::string		getType( void ) const;
	void			setType(std::string const type);

	void	makeSound( void ) const;

protected:

	std::string	_type;
};

#endif

// To ensure you understood how it works, implement a WrongCat class that inherits
// from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
// in the code above, the WrongCat should output the WrongAnimal sound.