/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:32:09 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/07 16:59:02 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class	Fixed {
	
public:
	
	Fixed();
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed( void );

	Fixed &		operator=( Fixed const & rhs);

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	
	float		toFloat( void ) const;
	int			toInt( void ) const;
	

private:

	int					_value;
	static const int	_numBits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif


// And add the following function to the Fixed class files:
// • An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.