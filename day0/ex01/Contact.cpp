/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:30:35 by pierina           #+#    #+#             */
/*   Updated: 2022/08/31 19:01:36 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ){
}

Contact::~Contact( void ){
}

bool _not_printable(char c)
{
	if (!std::isprint(c))
		return (true);
	return (false);
}

std::string Contact::_editContent(std::string content){
	if (content.size() > 10)
		return (content.substr(0, 9) + '.');
	return (content);
}


void	Contact::printSpecificContact(void)
{
	std::cout << std::setw(10) << this->_index << "|";
	std::cout << std::setw(10) << _editContent(this->_first_name) << "|";
	std::cout << std::setw(10) << _editContent(this->_last_name) << "|";
	std::cout << std::setw(10) << _editContent(this->_nickanme) << "|" << std::endl;
}

/**
 * Print all contact info
 **/

void	Contact::printContactFullInfo(void){
	std::cout << "Index: " << this->_index << std::endl;
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickanme << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}

std::string	Contact::_setPhoneNumber(std::string content){
	size_t	i = 0;
	if (content[0] == '+')
		i++;
	while (i < content.length())
	{
		if (!std::isdigit(content[i]))
			break;
		i++;
	}
	if (i == content.length())
		return (content);
	else
	{
		std::cout << "Phone number not valid" << std::endl;
		return ("");
	}
}

// std::string Contact::_cleanContent(std::string content){
// 	return(content.erase(std::remove_if(content.begin(), content.end(), _not_printable), content.end()));
// };

std::string Contact::_setField(std::string fieldName)
{
	std::string content;
	while (content.empty())
	{
		std::cout << "Enter the " << fieldName << " of the contact: ";
		std::getline(std::cin, content);
		if (std::cin.eof())
			std::exit(1);
		if (fieldName.compare("Phone Number") == 0)
			content = Contact::_setPhoneNumber(content);
	}
	return (content);
}

/**
 * Saves a new contact, seting all the data. It won't allow to set empty data
 **/

void	Contact::setContact(int index){
	std::string	content;
	this->_index = index;
	std::cout << "Adding contact " << index + 1 << " to the PhoneBook" << std::endl;
	this->_first_name = this->_setField("First Name");
	this->_last_name = this->_setField("Last Name");
	this->_nickanme = this->_setField("Nickname");
	this->_phone_number = this->_setField("Phone Number");
	this->_darkest_secret = this->_setField("Darkest Secret");
	std::cout << "Done adding the information of the contact" << std::endl;
	std::cout << std::endl;
}
