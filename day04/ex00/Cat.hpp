/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:53 by pierina           #+#    #+#             */
/*   Updated: 2022/09/15 18:56:11 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat( void );
	Cat( Cat const & cat );
	~Cat( void );
	
	Cat &	operator=(Cat const & rhs);

	void	makeSound( void ) const;

};

#endif