/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:09:14 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/27 21:41:46 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERT_HPP
#define SCALAR_CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>  

class	ScalarConvert {

public:

	ScalarConvert();
	ScalarConvert(std::string s, double d);
	ScalarConvert(ScalarConvert const & copy);
	~ScalarConvert();
	
	ScalarConvert &	operator=(ScalarConvert const & rhs);

	char			convertToChar();
	int				convertToInt();
	float			convertToFloat();
	double			convertToDouble();

	bool			isChar();
	bool			isInt();
	bool			isFloat();
	bool			isDouble();

	std::string		getType();
	void			setType();

	void			fullConversion();

	class 	NonDisplayableException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("non displayable");
			}
	};

	class GradeTooHighException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("impossible");
			}
	};
	
private:

	std::string	_sLit;
	std::string	_type;
	double		_d;
};

#endif