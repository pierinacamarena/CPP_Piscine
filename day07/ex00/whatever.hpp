/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:38:33 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/29 21:04:40 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implement the following function templates:
// • swap: Swaps the values of two given arguments. Does not return anything.
// • min: Compares the two values passed in its arguments and returns the smallest
// one. If the two of them are equal, then it returns the second one.
// • max: Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one.

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> 
	void swap(T& x, T& y) {
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
