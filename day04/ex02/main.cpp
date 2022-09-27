/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:58:16 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/27 12:06:10 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// std::cout << " Make sure AAnimal cannot be instantiated : " << std::endl;
	// const AAnimal *abstract = new AAnimal();
	// delete abstract;
	
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "Test given by sujet" << std::endl;
	std::cout << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	
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
	std::cout << "Array of animal objects" << std::endl;
	std::cout << std::endl;
	
	const AAnimal*		animals[10];

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
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "Brain ideas" << std::endl;
	std::cout << std::endl;

	Brain*	brain = animals[0]->getBrain();

	brain->ideas[0] = "i think wooof woof !";
	brain->ideas[1] = "hooman is tired?";
	brain->ideas[2] = "hooman says i am a good boi!";
	brain->ideas[3] = "hooman wants to get a cat";

	std::cout << brain->ideas[0] << std::endl;
	std::cout << brain->ideas[1] << std::endl;
	std::cout << brain->ideas[2] << std::endl;
	std::cout << brain->ideas[3] << std::endl;

	std::cout << std::endl;

	k = 0;
	while (k < 10) {
		delete animals[k];
		k++;
	}
	return 0;
}
