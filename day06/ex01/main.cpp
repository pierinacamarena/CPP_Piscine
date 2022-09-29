/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:09:21 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/29 12:54:23 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main() {

	Data		data;
	Data		*data_ptr;
	uintptr_t	uint_ptr;

	std::cout << "-----------------Initial Values-----------------" << std::endl << std::endl;
	data.str = "Meow meow meow";
	data_ptr = &data;

	std::cout << "Data *: "<< data_ptr << std::endl;
	std::cout << "content of str: " << data_ptr->str << std::endl << std::endl;

	std::cout << "-----------------Serialization-----------------" << std::endl << std::endl;

	uint_ptr = serialize(data_ptr);
	data_ptr = NULL;
	std::cout << "uint_ptr: " << uint_ptr << std::endl;
	std::cout << "Data *: "<< data_ptr << std::endl << std::endl;

	std::cout << "-----------------Deserialization-----------------" << std::endl << std::endl;

	data_ptr = deserialize(uint_ptr);
	uint_ptr = 0;
	std::cout << "uint_ptr: " << uint_ptr << std::endl;
	std::cout << "Data *: "<< data_ptr << std::endl;
	std::cout << "content of str: " << data_ptr->str << std::endl;

	return (0);
}
