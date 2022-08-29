/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:30:35 by pierina           #+#    #+#             */
/*   Updated: 2022/08/29 13:49:10 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ){
	return ;
};

Contact::~Contact( void ){
	return ;
};

void	Contact::printSpecificContact(void)
{
	std::cout << std::setw(10) << this->_index << " | ";
	std::cout << std::setw(10) << this->_first_name << " | ";
	std::cout << std::setw(10) << this->_last_name << " | ";
	std::cout << std::setw(10) << this->_nickanme << " | " << std::endl;
}

/**
 * Print all contact info
 **/

void	Contact::printContactFullInfo(void){
	std::cout << this->_index << std::endl;
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickanme << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_darkest_secret << std::endl;
};

/**
 * Saves a new contact
 **/

void	Contact::setContact(int index){

	this->_index = index;
	std::cout << "Adding a new contact" << std::endl;
	std::cout << "Enter the First Name of the contact";
	std::getline(std::cin, this->_first_name);
	std::cout << "Enter the Last Name of the contact";
	std::getline(std::cin, this->_last_name);
	std::cout << "Enter the nickname of the contact";
	std::getline(std::cin, this->_nickanme);
	std::cout << "Enter the phone number of the contact";
	std::getline(std::cin, this->_phone_number);
	std::cout << "Enter the darkest secret of the contact";
	std::getline(std::cin, this->_darkest_secret);
};