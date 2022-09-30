/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:34:59 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/30 13:51:42 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
	std::cout << "Creation of two arrays" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	Array<int>			int_arr(10);
	Array<std::string>	str_arr(5);

	std::cout << "Populating the arrays" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	
	return (1);

}