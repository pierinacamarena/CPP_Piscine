/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:54:27 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/05 19:32:55 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	if  (ac == 2) {
		Harl harl;
		harl.complain(av[1]);
		return (0);
	}
	else {
		std::cout << "error: wrong number of arguments" << std::endl;
		return (1);
	}
}