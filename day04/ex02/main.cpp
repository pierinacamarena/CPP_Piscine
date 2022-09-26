/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:58:16 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/26 21:26:17 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

# define NbAnimals 4

int main()
{

	std::cout << "Test1: Table and destruction" << std::endl;
	std::cout << std::endl;
	const AAnimal* meta[NbAnimals];

	int	n = -1;
	while (++n < NbAnimals)
	{
		if (n < (NbAnimals / 2))
		{
			meta[n] = new Dog();
			std::cout << "This animal is a " << meta[n]->getType() << " and it does ";
			meta[n]->makeSound();
			std::cout << std::endl;
		}
		else
		{
			meta[n] = new Cat();
			std::cout << "This animal is a " << meta[n]->getType() << " and it does ";
			meta[n]->makeSound();
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;

	std::cout << "Test2: Leaks" << std::endl;
	std::cout << std::endl;

	const AAnimal*	i = new Dog();
	const AAnimal*	j = new Cat();

	delete i;
	delete j;
	std::cout << std::endl;

	std::cout << "Test3: Deep copy" << std::endl;
	std::cout << std::endl;

	Cat tom;
	std::cout << std::endl;
	Cat garfield(tom);
	std::cout << std::endl;

	std::cout << "Test4: Brain " << std::endl;
	std::cout << std::endl;

	Brain*	brain = meta[0]->getBrain();


	brain->ideas[0] = "Mium Mium I'm hungry !";
	brain->ideas[1] = "Can I have a hug?";
	brain->ideas[2] = "Siesta time !";

	std::cout << brain->ideas[0] << std::endl;;
	std::cout << brain->ideas[1] << std::endl;;
	std::cout << brain->ideas[2] << std::endl;;

	std::cout << std::endl;

	n = -1;
	while (++n < NbAnimals)
		delete meta[n];

	std::cout << std::endl;

	return (0);
}

// int main()
// {
// 	std::cout << "------------------------------------------------------------------" << std::endl;
// 	std::cout << "Test given by sujet" << std::endl;
// 	std::cout << std::endl;

// 	const AAnimal* j = new Dog();
// 	const AAnimal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;

// 	std::cout << std::endl;
// 	std::cout << "------------------------------------------------------------------" << std::endl;
// 	std::cout << "Array of animal objects" << std::endl;
// 	std::cout << std::endl;
	
// 	const AAnimal*		animals[10];

// 	int					k = 0;
// 	while (k < 5) {
// 		std::cout << "-----------------------------------" << std::endl;
// 		animals[k] = new Dog();
// 		std::cout << "Dog #" << k + 1 << " says: ";
//  		animals[k]->makeSound();
// 		std::cout << "-----------------------------------" << std::endl << std::endl;
// 		k++;
//  	}
// 	while (k < 10) {
// 		std::cout << "-----------------------------------" << std::endl;
// 		animals[k] = new Cat();
// 		std::cout << "Cat #" << k + 1 << " says: ";
//  		animals[k]->makeSound();
// 		std::cout << "-----------------------------------" << std::endl << std::endl;
// 		k++;
// 	}
// 	k = 0;
// 	while (k < 10) {
// 		delete animals[k];
// 		k++;
// 	}
// 	std::cout << std::endl;
// 	std::cout << "------------------------------------------------------------------" << std::endl;
// 	std::cout << "Deep copy" << std::endl;
// 	std::cout << std::endl;
// 	Cat michi;
// 	std::cout << std::endl;
// 	Cat MichiMeow(michi);
// 	std::cout << std::endl;

// 	return 0;
// }


// int main()
// {
// 	const AAnimal*		animals[10];
// 	int					k = 0;

// 	while (k < 5) {
// 		std::cout << "-----------------------------------" << std::endl;
// 		animals[k] = new Dog();
// 		std::cout << "Dog #" << k + 1 << " says: ";
//  		animals[k]->makeSound();
// 		std::cout << "-----------------------------------" << std::endl << std::endl;
// 		k++;
//  	}
// 	while (k < 10) {
// 		std::cout << "-----------------------------------" << std::endl;
// 		animals[k] = new Cat();
// 		std::cout << "Cat #" << k + 1 << " says: ";
//  		animals[k]->makeSound();
// 		std::cout << "-----------------------------------" << std::endl << std::endl;
// 		k++;
// 	}
// 	k = 0;
// 	while (k < 10) {
// 		delete animals[k];
// 		k++;
// 	}
// 	return 0;
// }

// In your main function, create and fill an array of Animal objects. Half of it will
// be Dog objects and the other half will be Cat objects. At the end of your program
// execution, loop over this array and delete every Animal. You must delete directly dogs
// and cats as Animals. The appropriate destructors must be called in the expected order.