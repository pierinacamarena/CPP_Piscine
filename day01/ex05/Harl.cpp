/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:30:20 by pierina           #+#    #+#             */
/*   Updated: 2022/09/05 19:04:33 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void	Harl::complain( std::string level ){
	void		(Harl::*HarlComp[4])( void ) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4){
		if (level == levels[i])
		{
			(this->*HarlComp[i])();
			return ;
		}
		i++;
	}
}

void	Harl::_debug( void ){
	std::cout << "DEBUG:" << std::endl;
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-special";
	std::cout << " -ketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void ){
	std::cout << "INFO:" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning( void ){
	std::cout << "WARNING:" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void	Harl::_error( void ){
	std::cout << "ERROR:" << std::endl;
	std::cout << "This is unacceptable! I want";
	std::cout << " to speak to the manager now." << std::endl;
}