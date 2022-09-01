/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:17:19 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/01 21:29:34 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "|" << std::setw(40) << "Memory address of the string variable| " << &str << std::endl;
	std::cout << "|" << std::setw(40) << "Memory address held by stringPTR| " << stringPTR << std::endl;
	std::cout << "|" << std::setw(40) << "Memory address held by stringREF| " << &stringREF << std::endl;
	std::cout << "|" << std::setw(40) << "The value of the string variable| " << str << std::endl;
	std::cout << "|" << std::setw(40) << "The value pointed to by stringPTR| " << *stringPTR << std::endl;
	std::cout << "|" << std::setw(40) << "The value pointed to by stringREF| " << stringREF << std::endl;

	return (0);
}