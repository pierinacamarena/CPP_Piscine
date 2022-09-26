/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:09:14 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/26 18:25:22 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERT_HPP
#define SCALAR_CONVERT_HPP

#include <iostream>
#include <string>

class	ScalarConvert {

public:

	ScalarConvert();
	ScalarConvert(std::string s);
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

	//char --> 'c', 'a', ...
	//int, --> 0, -42, 42, ..
	//float, --> 0.0f, -4.2f, 4.2f, ..  (including -inff, +inff)
	//double --> 0.0, -4.2, 4.2, .. (-infl, +inf and nan)
	
private:

	std::string	_sLit;
	std::string	_type;
};

#endif