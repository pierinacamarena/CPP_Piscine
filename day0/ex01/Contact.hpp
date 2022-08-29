/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:33:36 by pierina           #+#    #+#             */
/*   Updated: 2022/08/29 13:24:48 by pierina          ###   ########.fr       */
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
		void	printContactFullInfo(void);
		void	printSpecificContact(void);

	private:

		int				_index;
		std::string		_first_name;
		std::string 	_last_name;
		std::string		_nickanme;
		std::string		_phone_number;
		std::string		_darkest_secret;
};

#endif