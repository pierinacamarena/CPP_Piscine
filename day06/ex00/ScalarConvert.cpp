/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:09:11 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/27 21:58:32 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {
	return;
}

ScalarConvert::ScalarConvert(std::string s, double d) : _sLit(s), _d(d){
	this->setType();
	return;
}

ScalarConvert::ScalarConvert(ScalarConvert const & copy) {
	*this = copy;
	return ;
}

ScalarConvert::~ScalarConvert() {
	return ;
}
	
ScalarConvert &	ScalarConvert::operator=(ScalarConvert const & rhs) {
	this->_sLit = rhs._sLit;
	this->_type = rhs._type;
	this->_d = rhs._d;
	return *this;
}

bool	ScalarConvert::isChar() {
	if (_sLit.length() == 1 && std::isprint(_sLit[0]) && !std::isdigit(_sLit[0]))
		return (true);
	return (false);
}

bool	ScalarConvert::isInt() {
	size_t	i = 0;
	if (_sLit[0] == '+' || _sLit[1] == '-')
		i++;
	while (i < _sLit.length()) {
		if (!std::isdigit(_sLit[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	ScalarConvert::isDouble() {
	if (_sLit == "-inf" || _sLit == "+inf" || _sLit == "nan")
		return (true);
	size_t	i = 0;
	size_t	len = _sLit.length();
	if (_sLit[0] == '+' || _sLit[1] == '-')
		i++;
	while (i < len && std::isdigit(_sLit[i]))
		i++;
	if (_sLit[i] == '.')
		i++;
	if (i == len)
		return (false);
	while (i < len) {
		if (!std::isdigit(_sLit[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	ScalarConvert::isFloat() {
	if (_sLit == "-inff" || _sLit == "+inff" || _sLit == "nanf")
		return (true);
	size_t	i = 0;
	size_t	len = _sLit.length();
	if (_sLit[0] == '+' || _sLit[1] == '-')
		i++;
	while (i < len && std::isdigit(_sLit[i]))
		i++;
	if (_sLit[i] == '.')
		i++;
	if (i == len)
		return (false);
	while (i < len - 1) {
		if (!std::isdigit(_sLit[i]))
			return (false);
		i++;
	}
	if (_sLit[i] == 'f')
		return (true);
	return (false);
}

void	ScalarConvert::setType() {
	
	if (_sLit.length() > 0) {
		if (this->isChar())
			this->_type = "char";
		else if (this->isInt())
			this->_type = "int";
		else if (this->isDouble())
			this->_type = "double";
		else if (this->isFloat())
			this->_type = "float";
		else
		{
			this->_type = "undefined";
			std::cout << "it is not one of the required type" << std::endl;
		}
		std::cout << "type: " << _type << std::endl;	
	}
	else {
		std::cout << "Error: empty string" << std::endl;
	}
}

char			ScalarConvert::convertToChar() {
	if (_type == "char" && _sLit.length() == 0)
	{
		if (!(std::isprint(_sLit[0])))
		{
			std::cout << "here" << std::endl;
			throw ScalarConvert::NonDisplayableException();
		}
		return (_sLit[0]);
	}
	else {
		if (!(std::isprint(_sLit[0])))
		{
			std::cout << "here" << std::endl;
			throw ScalarConvert::NonDisplayableException();
		}
		return (static_cast<char>(_d));
	}	
}

int				ScalarConvert::convertToInt() {
	if (_type == "char")
		return (static_cast<int>(_sLit[0]));
	else
		return (static_cast<int>(_d));
}

float			ScalarConvert::convertToFloat() {
	if (_type == "char") {
		return (static_cast<float>(_sLit[0]));
	}
	else {
		return (static_cast<float>(_d));
	}
}

double			ScalarConvert::convertToDouble() {
	return (_d);
}