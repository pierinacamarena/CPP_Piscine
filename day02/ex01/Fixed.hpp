/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:32:09 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/06 21:35:45 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {
	
public:
	
	Fixed();
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed( void );

	Fixed &		operator=( Fixed const & rhs);
	float		toFloat( void ) const;
	int			toInt( void ) const;
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

private:

	int					_value;
	static const int	_numBits;
};

#endif