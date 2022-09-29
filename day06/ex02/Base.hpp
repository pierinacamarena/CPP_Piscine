/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:00:07 by pierina           #+#    #+#             */
/*   Updated: 2022/09/29 13:22:38 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cfloat>

class Base {

public:
	virtual ~Base();

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif

//useful link
//https://stackoverflow.com/questions/1276847/difference-in-behavior-while-using-dynamic-cast-with-reference-and-pointers

//dynamic_cast can't return NULL for a failed reference cast, an exception is the only way out.