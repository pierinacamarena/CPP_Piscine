/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:09:21 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/28 22:11:35 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <limits>
#include <numbers>

void	to_char(std::string str)
{
	double x;
	if (sscanf(str.c_str(), "%lf", &x) == 1)
	{
		std::cout << "coucou" << static_cast<char>(x) << std::endl;
	}
	
}


int main(int ac, char **av) {
	if (ac == 2) {
		std::string	stLit = static_cast<std::string>(av[1]);
		to_char(stLit);

		char* pEnd;
		double d = std::strtod(av[1], &pEnd);

		ScalarConvert	literal(stLit, d);
		if (literal.getType() == "undefined") {
			std::cout << "conversion is impossible, it is not one of the required types" << std::endl;
			return (1);
		}
		//CHAR
		std::cout << "char: ";
		try {
			std::cout << literal.convertToChar() << std::endl;
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}

		//INT
		std::cout << "int: ";
		try {
			std::cout <<  literal.convertToInt() << std::endl;	
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		// //FLOAT

		std::cout << "float: ";
		try {
			float f = literal.convertToFloat();
			if (f == static_cast<int>(f))
				std::cout << std::fixed << f << ".0f" << std::endl;
			else
				std::cout << std::fixed << f << "f" << std::endl;	
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		// //DOUBLE

		std::cout << "double: ";
		try {
		double dob = literal.convertToDouble();
		if (dob == static_cast<int>(dob))
			std::cout << std::fixed << dob << ".0" << std::endl;
		else
			std::cout << std::fixed << dob << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		return (0);
	}
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
}
