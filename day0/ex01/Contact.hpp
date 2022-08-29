/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:33:36 by pierina           #+#    #+#             */
/*   Updated: 2022/08/29 19:20:23 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:

		Contact(void);
		~Contact(void);
		void	setContact(int index);
		void	setContactProtected(int index);
		void	printContactFullInfo(void);
		void	printSpecificContact(void);

	private:

		int					_index;
		std::string			_first_name;
		std::string 		_last_name;
		std::string			_nickanme;
		std::string			_phone_number;
		std::string			_darkest_secret;
		static std::string	_editContent(std::string content);
		static std::string	_cleanContent(std::string content);
		static std::string	_setPhoneNumber(std::string content);
		static bool			_setContent(std::string type, std::string content);
		static bool			_is_printable(char c);
};

#endif