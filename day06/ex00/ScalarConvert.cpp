/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:09:11 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/23 23:57:20 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {
	return;
}

ScalarConvert::ScalarConvert(std::string s) : _sLit(s){
	return;
}

ScalarConvert::ScalarConvert(ScalarConvert const & copy) {
	this->_sLit = copy._sLit;
	return ;
}

ScalarConvert::~ScalarConvert() {
	return ;
}
	
ScalarConvert &	ScalarConvert::operator=(ScalarConvert const & rhs) {
	
}

char			ScalarConvert::convertToChar() {
	
}

int				ScalarConvert::convertToInt() {

}

float			ScalarConvert::convertToFloat() {
	
}

double			ScalarConvert::convertToDouble() {
	
}

bool			ScalarConvert::isDisplayable() {
	
}

bool			ScalarConvert::literalBelongs() {
	
}