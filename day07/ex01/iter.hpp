/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:17:07 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/29 21:18:05 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> 
	void iter(T const x, T const y) {
	T temp = x;
	x = y;
	y = temp;
}

template <typename T>
	T const max(T const & x, T const & y) {
	return (x > y) ? x : y;
}

template <typename T>
	T const min(T const & x, T const & y) {
	return (x < y) ? x : y;
}

#endif