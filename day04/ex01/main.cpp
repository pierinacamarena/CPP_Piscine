/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:58:16 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/27 17:06:25 by pcamaren         ###   ########.fr       */
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

	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "Brain test :D" << std::endl;
	std::cout << std::endl;

	const Dog* doggy = new Dog();
	Brain*	brain = doggy->getBrain();

	brain->ideas[0] = "i think wooof woof !";
	brain->ideas[1] = "hooman is tired?";
	brain->ideas[2] = "hooman says i am a good boi!";
	brain->ideas[3] = "hooman wants to get a cat, i dont like cats";

	std::cout << brain->ideas[0] << std::endl;
	std::cout << brain->ideas[1] << std::endl;
	std::cout << brain->ideas[2] << std::endl;
	std::cout << brain->ideas[3] << std::endl;

	delete doggy;
	std::cout << std::endl;

	return 0;
}
