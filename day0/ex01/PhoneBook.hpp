/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:33:31 by pierina           #+#    #+#             */
/*   Updated: 2022/08/30 13:51:54 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook {
	
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	printHeader(void);
		void	printAllContacts(void);
		void	addContact(void);
		void	searchContact(void);

	private:
		static int	_nextAdd;
		static int	_numContacts;
		static bool	_idNumeric(std::string id);
		Contact		_contacts[8];
};

#endif