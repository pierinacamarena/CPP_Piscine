/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:09:21 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/28 19:38:47 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Implement the following functions:
uintptr_t serialize(Data* ptr);
It takes a pointer and converts it to the unsigned integer type uintptr_t.
Data* deserialize(uintptr_t raw);
It takes an unsigned integer parameter and converts it to a pointer to Data.
Write a program to test that your functions works as expected.
You must create a non-empty (it means it has data members) Data structure.
Use serialize() on the address of the Data object and pass its return value to
deserialize(). Then, ensure the return value of deserialize() compares equal to the
original pointer.
Do not forget to turn in the files of your Data structure.
*/