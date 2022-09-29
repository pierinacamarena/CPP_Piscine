/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:34:59 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/29 21:16:28 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}

// int main () {

// 	std::string x = 7;
// 	std::string	y = 8;

// 	std::cout << "testing min: " << ::min(x,y) << std::endl;
// 	std::cout << "testing max: " << ::max(x,y) << std::endl;
// 	std::cout << "testing swap" <<std::endl;
// 	std::cout << "before swap:" << std::endl;
// 	std::cout << "x: " << x << " y: " << y << std::endl;
// 	::swap(x,y);
// 	std::cout << "after swap:" << std::endl;
// 	std::cout << "x: " << x << " y: " << y << std::endl;

// 	char a = 'a';
// 	char b = 'd';

// 	std::cout << "testing min: " << ::min(a,b) << std::endl;
// 	std::cout << "testing max: " << ::max(a,b) << std::endl;
// 	std::cout << "testing swap" <<std::endl;
// 	std::cout << "before swap:" << std::endl;
// 	std::cout << "a: " << a << " b: " << b << std::endl;
// 	::swap(a,b);
// 	std::cout << "after swap:" << std::endl;
// 	std::cout << "a: " << a << " b: " << b << std::endl;
// }