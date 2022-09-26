/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:58:16 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/26 19:32:00 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new 	WrongCat();
	std::cout << std::endl;
	std::cout << "-----------------------------------------"  << std::endl << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	
	std::cout << std::endl;
	std::cout << "-----------------------------------------"  << std::endl << std::endl;
	
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	wrong->makeSound();

	std::cout << std::endl;
	std::cout << "-----------------------------------------"  << std::endl << std::endl;
	
	delete meta;
	delete j;
	delete i;
	delete wrong;
	
	return 0;
}
