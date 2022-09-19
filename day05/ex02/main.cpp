/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:40:45 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/19 20:33:15 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

	std::cout << "Creating valid Bureaucrats and valid Forms" << std::endl;
	
	Bureaucrat gagi("Gagi", 24);
	Bureaucrat cuysin("Cuysin", 35);
	Bureaucrat ardi("Ardi", 37);

	Form form1("Form1", 24, 24);
	Form form2("Form2", 35, 35);
	Form form3("Form3", 37, 37);

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << gagi << std::endl;
	std::cout << cuysin << std::endl;
	std::cout << ardi << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	
	std::cout << "Trying to create invalid forms" << std::endl;
	try {
		Form("MeanForm", 156, 12);	
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		Form("MeanForm", 56, 152);	
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		Form("MeanForm", 0, 15);	
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		Form("MeanForm", 56, 0);	
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	std::cout << "Trying to sign forms" << std::endl;
	try {
		form1.beSigned(cuysin);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << form1 << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Trying to sign forms" << std::endl;
	try {
		form1.beSigned(gagi);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << form1 << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	return (0);
}