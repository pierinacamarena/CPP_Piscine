/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:02:06 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/27 15:50:18 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "A new Brain has been created with default constructor" << std::endl;
}

Brain::Brain( Brain const & brain) {
	*this = brain;
	std::cout << "A new Brain has been created with a copy constructor" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "A brain has been destroyed" << std::endl;
}

Brain &	Brain::operator=(Brain const & brain) {
	int i;

	i = 0;
	while (i < 100){
		this->ideas[i] = brain.ideas[i];
		i++;
	}
	return *this;
}