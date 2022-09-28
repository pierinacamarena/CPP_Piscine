/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:09:14 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/28 18:33:06 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERT_HPP
#define SCALAR_CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib> 
#include <limits>

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
	bool			isNan();

	std::string		getType();
	void			setType();

	void			fullConversion();

	class 	NonDisplayableException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("non displayable");
			}
	};

	class ImpossibleException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("impossible");
			}
	};
	
	class OutOfRangeException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("out of range number");
			}
	};
private:

	std::string	_sLit;
	std::string	_type;
	double		_d;
	bool		_isNan;
};

#endif