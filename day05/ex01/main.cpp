/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:40:45 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/19 13:11:05 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

	std::cout << "Creating valid Bureaucrats" << std::endl;
	
	Bureaucrat gagi("Gagi", 24);
	Bureaucrat cuysin("Cuysin", 35);
	Bureaucrat ardi("Ardi", 37);

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << gagi.getName() << " 's grade is " << gagi.getGrade() << std::endl;
	std::cout << cuysin.getName() << " 's grade is " << cuysin.getGrade() << std::endl;
	std::cout << ardi.getName() << " 's grade is " << ardi.getGrade() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "Valid Increment of grade" << std::endl;
	gagi.incrementGrade();
	gagi.incrementGrade();
	cuysin.incrementGrade();
	cuysin.incrementGrade();
	ardi.incrementGrade();
	ardi.incrementGrade();
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << gagi.getName() << " 's grade is " << gagi.getGrade() << std::endl;
	std::cout << cuysin.getName() << " 's grade is " << cuysin.getGrade() << std::endl;
	std::cout << ardi.getName() << " 's grade is " << ardi.getGrade() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "Valid Decrement of grade" << std::endl;
	gagi.decrementGrade();
	gagi.decrementGrade();
	cuysin.decrementGrade();
	cuysin.decrementGrade();
	ardi.decrementGrade();
	ardi.decrementGrade();
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << gagi.getName() << " 's grade is " << gagi.getGrade() << std::endl;
	std::cout << cuysin.getName() << " 's grade is " << cuysin.getGrade() << std::endl;
	std::cout << ardi.getName() << " 's grade is " << ardi.getGrade() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl << std::endl;

	std::cout << "Creating invalid Bureaucrats" << std::endl;

	try {
		Bureaucrat("MeanGagi", 349932);	
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat("MeanCuysin", 0);	
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat("MeanArdi", 151);	
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat("MeanGagi", -65);	
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	std::cout << "Valid and Invald increment of grade" << std::endl;
	Bureaucrat buro1("Buro1", 2);
	try {
		buro1.incrementGrade();
		buro1.incrementGrade();
		buro1.incrementGrade();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "Valid and Invald decrement of grade" << std::endl;
	Bureaucrat buro2("Buro2", 149);
	try {
		buro2.decrementGrade();
		buro2.decrementGrade();
		buro2.decrementGrade();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	return (0);
}