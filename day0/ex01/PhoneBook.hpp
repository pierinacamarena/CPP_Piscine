/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:33:31 by pierina           #+#    #+#             */
/*   Updated: 2022/08/31 19:07:17 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <ctype.h>
#include "Contact.hpp"

class PhoneBook {
	
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	printHeader(void);
		void	printAllContacts(void);
		void	addContact(void);
		void	searchContact(void);
		int		exitPhoneBook(void);

	private:
		Contact				contacts[8];
		int			_nextAdd;
		int			_numContacts;
		int			_firstSet;
		static bool	_idNumeric(std::string id);
};

#endif