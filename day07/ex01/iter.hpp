/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:17:07 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/30 10:02:56 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> 
	void iter(T (*ptr), int const & size, void f(T const & i)) {
		for (int i = 0; i < size; i++)
			f(ptr[i]);
		return;
}

template <typename T> 
	void print(T const & t) {
		std::cout << t << std::endl;
}
#endif