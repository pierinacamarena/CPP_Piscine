/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:30:17 by pierina           #+#    #+#             */
/*   Updated: 2022/09/01 18:13:06 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


PhoneBook::PhoneBook(void){
	this->_nextAdd = 0;
	this->_numContacts = 0;
	this->_firstSet = 0;
}

PhoneBook::~PhoneBook(void){
}

void	PhoneBook::printHeader(void){
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
}

void	PhoneBook::printAllContacts(void)
{
	int	i = 0;
	while (i < PhoneBook::_numContacts)
	{
		this->contacts[i].printSpecificContact();
		i++;
	}
};

void	PhoneBook::addContact(void){
	if (this->_nextAdd > 7)
	{	std::cout << "Reached the limit of contacts, \
		you are now replacing the oldest contact" << std::endl;
		this->_nextAdd = 0;
		this->contacts[this->_nextAdd].setContact(this->_nextAdd);
	}
	else
	{
		this->contacts[this->_nextAdd].setContact(this->_nextAdd);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
		this->_nextAdd++;
		this->_firstSet = 1;
		if (this->_numContacts < 8)
			this->_numContacts += 1;
	}
	return ;
}

bool	PhoneBook::_idIsNumeric(std::string id){
	size_t	i = 0;
	while (i < id.length()){
		if (!std::isdigit(id[i]))
			return (false);
		i++;
	}
	return (true);
}

void	PhoneBook::searchContact(void)
{
	std::string	id;
	int			idInt;
	this->printHeader();
	this->printAllContacts();
	std::cout << "Enter the id of the required contact: ";
	std::getline(std::cin, id);
	if(std::cin.eof())
		std::exit(1);
	if (id.empty()){
		std::cout << "Not a valid id" << std::endl;
		return ;
	}
	if (!this->_idIsNumeric(id))
	{
		std::cout << "id must be a numeric value between 0 and 7" << std::endl;
		return ;
	}
	idInt = std::atoi(id.c_str());
	if (idInt < 0 || idInt > 7){
		std::cout << "id out of range" << std::endl;
		return ;
	}
	if (idInt >= this->_numContacts || this->_firstSet == 0){
		std::cout << "This id does not refer to an existing contact" << std::endl;
		return ;
	}
	this->contacts[idInt].printContactFullInfo();
}

int		PhoneBook::exitPhoneBook(void){
	std::cout << "The PhoneBook has been destroyed. Goodbye!" << std::endl;
	return (0);
}