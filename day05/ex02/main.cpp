/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:40:45 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/23 20:53:03 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "Form.hpp"

int main( void ) {

	std::cout << "Creating valid Bureaucrats " << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	Bureaucrat gagi("Gagi", 140);
	Bureaucrat cuysin("Cuysin", 40);
	Bureaucrat ardi("Ardi", 2);
	std::cout << "-------------------------------------------------------------------" << std::endl << std::endl;
	std::cout << "Creating valid Forms " << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	PresidentialPardonForm	form1("target1");
	RobotomyRequestForm		form2("target2");
	ShruberryCreationForm	form3("targer3");
	PresidentialPardonForm	form4("target4");
	RobotomyRequestForm		form5("target5");
	ShruberryCreationForm	form6("targer6");
	// std::cout << "-------------------------------------------------------------------" << std::endl << std::endl;

	// std::cout << "Printing the values of the Bureaucrats" << std::endl;
	// std::cout << "-------------------------------------------------------------------" << std::endl;
	// std::cout << gagi << std::endl;
	// std::cout << cuysin << std::endl;
	// std::cout << ardi << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
	// std::cout << "Printing the values of the Forms" << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
	// std::cout << form1 << std::endl;
	// std::cout << form2 << std::endl;
	// std::cout << form3 << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	
	std::cout << "Testing beSigned() function" << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;

	try {
		form1.beSigned(gagi);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		form1.beSigned(cuysin);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		form1.beSigned(ardi);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		form2.beSigned(gagi);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		form2.beSigned(cuysin);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		form2.beSigned(ardi);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		form3.beSigned(gagi);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		form3.beSigned(cuysin);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		form3.beSigned(ardi);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	// std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	// std::cout << "Testing execute functions" << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;	
	// std::cout << "Testing PresidentialPardonForm" << std::endl;
	// std::cout << "should be executed by ardi if signed" << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
	// try {
	// 	form1.execute(gagi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form1.execute(cuysin);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form1.execute(ardi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form4.execute(gagi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form4.execute(cuysin);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form4.execute(ardi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "-------------------------------------------------------" << std::endl;
	// std::cout << "Testing RobotomyRequestForm" << std::endl;
	// std::cout << "should be executed by cuysin and ardi if signed" << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
	// try {
	// 	form2.execute(gagi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form2.execute(cuysin);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form2.execute(ardi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form5.execute(gagi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form5.execute(cuysin);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form5.execute(ardi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "-------------------------------------------------------" << std::endl;
	// std::cout << "Testing ShruberryRequestForm" << std::endl;
	// std::cout << "should be executed by cuysin and ardi if signed" << std::endl;
	// std::cout << "-------------------------------------------------------" << std::endl;
	// try {
	// 	form3.execute(gagi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form3.execute(cuysin);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form3.execute(ardi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form6.execute(gagi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form6.execute(cuysin);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	form6.execute(ardi);
	// }
	// catch (std::exception & e){
	// 	std::cout << e.what() << std::endl;
	// }
	std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	std::cout << "testing the executeForm function" << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Testing PresidentialPardonForm" << std::endl;
	std::cout << "should be executed by ardi if signed" << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	gagi.executeForm(form1);
	cuysin.executeForm(form1);
	ardi.executeForm(form1);
	std::cout << ".........................................." << std::endl;
	gagi.executeForm(form4);
	cuysin.executeForm(form4);
	ardi.executeForm(form4);
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Testing RobotomyRequestForm" << std::endl;
	std::cout << "should be executed by cuysin and ardi if signed" << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	gagi.executeForm(form2);
	cuysin.executeForm(form2);
	ardi.executeForm(form2);
	std::cout << ".........................................." << std::endl;
	gagi.executeForm(form5);
	cuysin.executeForm(form5);
	ardi.executeForm(form5);
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Testing ShruberryRequestForm" << std::endl;
	std::cout << "should be executed by cuysin and ardi if signed" << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	gagi.executeForm(form3);
	cuysin.executeForm(form3);
	ardi.executeForm(form3);
	std::cout << ".........................................." << std::endl;
	gagi.executeForm(form6);
	cuysin.executeForm(form6);
	ardi.executeForm(form6);
	std::cout << "-------------------------------------------------------" << std::endl << std::endl;
	return (0);
}