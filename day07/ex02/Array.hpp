/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:13:01 by pierina           #+#    #+#             */
/*   Updated: 2022/09/30 13:40:13 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
template <typename T>
class Array {

public:

	Array( ) : _array(new T[0]), _len(0) {
		return ;
	}

	Array(unsigned int i) : _array(new T[n]), _len(n) {
		return ;
	}

	Array(Array const & copy) {
		_len = copy._len;
		_array = new T[copy._len];
		for (int i = 0; i < copy._len; i++)
			_array[i] = copy._array[i];
		return ;
	}

	~Array () {
		if (_len > 0)
			delete [] _array;
		return ;
	}
	Array & operator=(Array const & a) {
		if (this != &a) {
			if (_len > 0)
				delete [] _array;
			_len = copy._len;
			_array = new T[copy._len];
			for (int i = 0; i < copy._len; i++)
				_array[i] = copy._array[i];
		}
		return *this;
	}
	unsigned int	size() const {
		return (_len);
	}

	T & operator[] (unsigned int const & index) {
		if (index >= _len)
			throw ::IndexOutofRangeException();
		return (_array[index]);
	}

	class IndexOutofRangeException : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("index out of range");
			}
	};
	
private:

	T * _array;
	int	_len;
};

#endif