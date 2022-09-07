/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:59:02 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/07 19:26:38 by pcamaren         ###   ########.fr       */
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

	bool		operator>( Fixed const & rhs) const;
	bool		operator<( Fixed const & rhs) const;
	bool		operator>=( Fixed const & rhs) const;
	bool		operator<=( Fixed const & rhs) const;
	bool		operator==( Fixed const & rhs) const;
	bool		operator!=( Fixed const & rhs) const;

	Fixed &		operator=( Fixed const & rhs) const;
	Fixed		operator+( Fixed const & rhs) const;
	Fixed		operator-( Fixed const & rhs) const;
	Fixed		operator*( Fixed const & rhs) const;
	Fixed		operator/( Fixed const & rhs) const;

	Fixed &		operator++( void ); 
	Fixed &		operator--( void );
	Fixed		operator++( int );
	Fixed		operator--( int );
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


/**
when doing ++(++(++someNum));
when returning the reference from operator++(), the second and third ++
will invoke the same object someNum 
**/