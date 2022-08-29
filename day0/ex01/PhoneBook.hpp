/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:33:31 by pierina           #+#    #+#             */
/*   Updated: 2022/08/29 12:45:31 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook {
	public:
		//implement a constructor
		PhoneBook(void);
		//implement a destructor
		~PhoneBook(void);
	private:
		Contact contacts[8];
	//Has an array of 8 contacts
	//it can only contain 8 contacts, if a 9th is added the oldest one is replaced by the new one
	//
};

#endif