/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:30:17 by pierina           #+#    #+#             */
/*   Updated: 2022/08/29 21:56:11 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	PhoneBook::_numContacts = 0;
int	PhoneBook:: _oldestContact = 0;

PhoneBook::PhoneBook(void){
	return ;
};

PhoneBook::~PhoneBook(void){
	return
};

void	PhoneBook::printHeader(void){
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
};

void	PhoneBook::printAllContacts(void)
{
	int	i = 0;
	while (i < PhoneBook::_numContacts)
	{
		this->_contacts[i].printSpecificContact();
		i++;
	}
}

void	PhoneBook::addContact(void){
	if (this->_numContacts >= 7)
	{	std::cout << "Reached the limit of contacts, \
		you are now replacing the oldest contact" << std::endl;
		//insert here a function that will replace the oldest contact
	}
	else
	{
		Contact::setContact(_numContacts);
		PhoneBook::_numContacts++;
	}
	return ;
};

void	PhoneBook::searchContact(void)
{
	this->printHeader();
	this->printAllContacts();
	
}