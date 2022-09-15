/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:27 by pierina           #+#    #+#             */
/*   Updated: 2022/09/15 21:23:52 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

public:

	Dog( void );
	Dog( Dog const & dog );
	Dog (std::string const type);
	~Dog( void );
	
	Dog &	operator=(Dog const & rhs);

	std::string		getType( void ) const;
	void			setType(std::string const type);

	void	makeSound( void ) const;

protected:

	std::string	_type;

private:

	Brain * _dogBrain;

};

#endif