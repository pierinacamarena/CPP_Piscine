/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:53 by pierina           #+#    #+#             */
/*   Updated: 2022/09/15 21:23:40 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:

	Cat( void );
	Cat( Cat const & cat );
	Cat (std::string const type);
	~Cat( void );
	
	Cat &	operator=(Cat const & rhs);

	std::string		getType( void ) const;
	void			setType(std::string const type);

	void	makeSound( void ) const;

protected:

	std::string	_type;

private:

	Brain*	_catBrain;

};

#endif