/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:58:16 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/16 11:04:16 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
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
	k = 0;
	while (k < 10) {
		delete animals[k];
		k++;
	}
	return 0;
}

// In your main function, create and fill an array of Animal objects. Half of it will
// be Dog objects and the other half will be Cat objects. At the end of your program
// execution, loop over this array and delete every Animal. You must delete directly dogs
// and cats as Animals. The appropriate destructors must be called in the expected order.