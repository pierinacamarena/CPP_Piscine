/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:53 by pierina           #+#    #+#             */
/*   Updated: 2022/09/27 11:56:12 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:

	Cat( void );
	Cat( Cat const & cat );
	virtual ~Cat( void );
	
	Cat &	operator=(Cat const & rhs);

	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;

private:

	Brain*	_catBrain;

};

#endif