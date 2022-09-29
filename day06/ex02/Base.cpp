/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:06:36 by pierina           #+#    #+#             */
/*   Updated: 2022/09/29 13:56:21 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {
	
}

// It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
// to use anything you like for the random choice implementation.
Base * generate(void) {
	int	rn = std::rand() % 3;

	if (rn == 0) {	
		std::cout << "A" << std::endl;
		return (new A);
	}
	else if (rn == 1) {
		std::cout << "B" << std::endl;
		return (new B);
	}
	else if (rn == 2) {
		std::cout << "C" << std::endl;
		return (new C);
	}
	return (NULL);
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C".
void	identify(Base *p) {
	if (dynamic_cast<A *>(p) != NULL) {
		std::cout << "Type: A" << std::endl;
		return;
	}
	if (dynamic_cast<B *>(p) != NULL) {
		std::cout << "Type: B" << std::endl;
		return;
	}
	if (dynamic_cast<C *>(p) != NULL) {
		std::cout << "Type: C" << std::endl;
		return;
	}
	return ;
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
// inside this function is forbidden.
void	identify(Base& p) {
	
	try {
		std::cout << "Checking if it is of type A" << std::endl;
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Type: A" << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Checking if it is of type B" << std::endl;
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Type: B" << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Checking if it is of type C" << std::endl;
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Type: C" << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}