/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:24:11 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/29 12:00:08 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct	s_Data {
	std::string str;
}				Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif