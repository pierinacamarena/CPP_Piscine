/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:34:59 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/30 09:28:44 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "limits.h"

int main( void ) {
	
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;
	
	float e = 42.42f;
	float f = 24.24f;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl << std::endl;

	int int_max = INT_MAX;
	int int_min = INT_MIN;
	std::cout << "int_max = " << int_max << ", int_min = " << int_min << std::endl;
	::swap( int_max, int_min );
	std::cout << "int_max = " << int_max << ", int_min = " << int_min << std::endl;
	std::cout << "min( e, f ) = " << ::min( int_min, int_max ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( int_min, int_max ) << std::endl << std::endl;
	
	return 0;
}
