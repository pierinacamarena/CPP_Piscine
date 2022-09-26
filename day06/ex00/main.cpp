/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:09:21 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/26 18:36:31 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int ac, char **av) {
	if (ac == 2) {
		std::string	stLit = static_cast<std::string>(av[1]);

		std::cout << stLit << std::endl;

		ScalarConvert	literal(stLit);
		// literal.setType();
		//check if the literal belongs to one of the following scalar types
		//char --> 'c', 'a', ...
		//int, --> 0, -42, 42, ..
		//float, --> 0.0f, -4.2f, 4.2f, ..  (including -inff, +inff)
		//double --> 0.0, -4.2, 4.2, .. (-infl, +inf and nan)
	

		//except for char, only decimal notation will be used
		//check for non displayable characters
			//print an informative message
		
		//once it passes all the checks
		//check what type of literal it is 
		//convert from a string to an actual type
		//convert it explicitly to three other data types
		//display the result as shown
		//if the conversion does not make sense or is impossible,
			//display a message to inform the type conversion is impossible
		return (0);
	}
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
}