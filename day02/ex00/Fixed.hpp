/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:02:18 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/06 21:28:05 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {
	
public:
	
	Fixed();
	Fixed(Fixed const & src);
	~Fixed( void );

	Fixed &		operator=( Fixed const & rhs);
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

private:

	int					_value;
	static const int	_numBits;
};

#endif