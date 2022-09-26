/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:09:11 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/26 22:31:36 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {
	return;
}

ScalarConvert::ScalarConvert(std::string s) : _sLit(s){
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
			this->_type = "meow";
			std::cout << "it is not one of the required type" << std::endl;
		}
		std::cout << "type: " << _type << std::endl;	
	}
	else {
		std::cout << "Error: empty string" << std::endl;
	}
}


void	ScalarConvert::fullConversion() {
	if (_type == "char"){
		//convert to char
	}
	else if (_type == "float") {
		//convert to float
	}
	else if (_type == "double") {
		//convert to double
	}
	else if (_type == "int") {
		//convert to int
	}
}