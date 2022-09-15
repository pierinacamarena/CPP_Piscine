/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:38:01 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/15 19:52:44 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	WrongCat( WrongCat const & wc );
	~WrongCat( void );
	
	WrongCat &	operator=(WrongCat const & rhs);

	void	makeSound( void ) const;

};

#endif