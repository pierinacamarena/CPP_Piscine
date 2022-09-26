/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:53 by pierina           #+#    #+#             */
/*   Updated: 2022/09/26 21:26:56 by pcamaren         ###   ########.fr       */
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
	~Cat( void );
	
	Cat &	operator=(Cat const & rhs);

	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;

protected:

	std::string	_type;

private:

	Brain*	_catBrain;

};

#endif