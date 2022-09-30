/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:34:59 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/30 10:18:44 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main () {
	int			iTab[5] = {3, 4, 1, 6, 3};
	std::string	sTab[3] = {"meow", "woof", "quack"};
	double		dTab[7] = {3.3, 2.2, 4.9, 12.3, 7.7, 83.21, 11.09};

	std::cout << "printing int tab" << std::endl;
	std::cout << "------------------------" << std::endl;
	iter(iTab, 5, print);
	std::cout << std::endl;
	std::cout << "printing string tab" << std::endl;
	std::cout << "------------------------" << std::endl;
	iter(sTab, 3, print);
	std::cout << std::endl;
	std::cout << "printing double tab" << std::endl;
	std::cout << "------------------------" << std::endl;
	iter(dTab, 7, print);
	std::cout << std::endl;
	return (0);
}