/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:07:26 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/05 18:31:17 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>

class Replace{
	public:
		Replace(void);
		Replace(std::string s1, std::string s2);
		~Replace(void);
		void	replaceStringOcurr(std::ifstream &inFile, std::ofstream& outFile);
		
	private:
		std::string _search;
		std::string	_replace;
};

#endif