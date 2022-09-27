/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:58:16 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/27 11:50:03 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "Test given by sujet" << std::endl;
	std::cout << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "Array of animal objects" << std::endl;
	std::cout << std::endl;
	
	const Animal*		animals[10];

	int					k = 0;
	while (k < 5) {
		std::cout << "-----------------------------------" << std::endl;
		animals[k] = new Dog();
		std::cout << "Dog #" << k + 1 << " says: ";
 		animals[k]->makeSound();
		std::cout << "-----------------------------------" << std::endl << std::endl;
		k++;
 	}
	while (k < 10) {
		std::cout << "-----------------------------------" << std::endl;
		animals[k] = new Cat();
		std::cout << "Cat #" << k + 1 << " says: ";
 		animals[k]->makeSound();
		std::cout << "-----------------------------------" << std::endl << std::endl;
		k++;
	}
	k = 0;
	while (k < 10) {
		delete animals[k];
		k++;
	}

	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "Deep copy" << std::endl;
	std::cout << std::endl;
	Cat michi;
	std::cout << std::endl;
	Cat MichiMeow(michi);
	std::cout << std::endl;

	return 0;
}
