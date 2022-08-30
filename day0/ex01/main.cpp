/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:07:36 by pierina           #+#    #+#             */
/*   Updated: 2022/08/30 20:56:31 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	int			loop;

	loop = 1;
	std::cout << "Initializing your PhoneBook" << std::endl;
	std::cout << "Commands available: [ADD, SEARCH, EXIT]" << std::endl;
	std::cout << "Please input your desired command" << std::endl;
	while (loop){
		std::cout << "Enter a command [ADD/SEARCH/EXIT]:" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			phonebook.addContact();
		else if (cmd.compare("SEARCH") == 0)
			phonebook.searchContact();
		else if (cmd.compare("EXIT") == 0)
			return (phonebook.exitPhoneBook());
		else {	
			std::cout << "invalid input" << std::endl;
			std::cout << "Enter a command [ADD/SEARCH/EXIT]:" << std::endl;
		}
	}
	return (0);
}