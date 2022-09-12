/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:58:02 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/12 12:47:37 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed		a;
	Fixed const	b( Fixed( 5.05f) * Fixed( 2 ));

	std::cout << "Prefix and postfix operators increment" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	std::cout << "Prefix and postfix operators decrement" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	
	std::cout << "Printing b" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << b << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	std::cout << "Comparison operators" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "(a > b)" << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << "(a < b)" << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << "(a >= b)" << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << "(a <= b)" << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << "(a == b)" << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << "(a != b)" << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	std::cout << "Arithmetic operators" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "(a + b)" << std::endl;
	std::cout << (a + b) << std::endl;
	std::cout << "(a - b)" << std::endl;
	std::cout << (a - b) << std::endl;
	std::cout << "(a * b)" << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << "(a / b)" << std::endl;
	std::cout << (a / b) << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	
	std::cout << "Min/Max" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Max" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "Min" << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	return 0;
}