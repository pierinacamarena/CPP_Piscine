/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:07:36 by pierina           #+#    #+#             */
/*   Updated: 2022/08/29 18:05:09 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string test = "meormw wejks";
	if (test.empty())
		std::cout << "string is empty" << std::endl;
	else
		std::cout << "string is not empty" << std::endl;
	return (0);
}