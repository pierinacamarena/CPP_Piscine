/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:30:12 by pierina           #+#    #+#             */
/*   Updated: 2022/09/05 18:45:10 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char **av){
	if (ac == 4){
		std::string		inFile;
		std::string		s1;
		std::string		s2;
		
		inFile = av[1];
		s1 = av[2];
		s2 = av[3];
		if (s1.length() == 0){
			std::cout << "error: filename or string to replace is empty" << std::endl;
			return (1);
		}
		std::ifstream	input_file(av[1]);
		if (!input_file.good()){
			std::cout << "error: error with the file" << std::endl;
			return (1);
		}
		if (input_file.peek() == EOF)
		{
			std::cout << "error: input file is empty" << std::endl;
			return (1);
		}
		std::string		newFile;
		newFile = inFile.append(".replace");
		std::ofstream outFile(newFile.c_str());
		
		Replace outPut(s1, s2);
		if (outFile)
			outPut.Replace::replaceStringOcurr(input_file, outFile);
		else
		{
			std::cout << "error: outfile could not be open" << std::endl;
			return (1);
		}
		input_file.close();
		outFile.close();
		return (0);	
	}
	else {
		std::cout << "error: wrong number of parameters" << std::endl;
		return (1);
	}
}