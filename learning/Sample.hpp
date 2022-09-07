/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:36:35 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/06 21:27:48 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#include <iostream>

class Sample {
	
public:

	Sample( );								  		//Canonical
	Sample( int const n);							//Canonical
	Sample( Sample const & src);					//Canonical
	~Sample( void );								//Canonical

	Sample &	operator=( Sample const & rhs);		//Canonical

	int		getFoo(void) const;

private:

	int		_foo;
};

std::ostream &		operator<<( std::ostream & o, Sample const & i);

#endif
