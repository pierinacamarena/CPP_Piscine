/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:09:21 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/29 13:54:25 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {

	int i = 0;

	while ( i < 5)
	{
		std::cout << "-----------------------------------------------" << std::endl;
		std::cout << "The generated base is of type: " << std::endl;
		Base *a = generate();
		std::cout << "Indentifying by pointer:" << std::endl;
		identify(a);
		std::cout << "Indentifying by reference:" << std::endl;
		identify(*a);
		i++;
		std::cout << std::endl << "-----------------------------------------------" << std::endl << std::endl;
	}
	return (0);
}