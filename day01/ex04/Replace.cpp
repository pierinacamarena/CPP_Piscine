/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:07:29 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/05 17:02:16 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string s1, std::string s2) : _search(s1), _replace(s2){
	return ;
}

Replace::Replace(void){
	return ;
}

Replace::~Replace(void){
	return ;
}

void Replace::replaceStringOcurr( std::ifstream& inFile, std::ofstream& outFile)
{
	std::string line;
	size_t		pos;
	pos = 0;
	while (std::getline(inFile, line))
	{
		pos = line.find(this->_search);
		while (pos != std::string::npos){
			line.erase(pos, this->_search.length());
			line.insert(pos, this->_replace);
			pos = line.find(this->_search, pos + this->_search.size());
		}
		outFile << line << std::endl;
	}
}