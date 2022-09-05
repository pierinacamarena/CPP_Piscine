/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:54:48 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/05 19:27:49 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef HARL_HPP
#define HARL_HPP

class Harl {
	public:
		Harl();
		~Harl();
		void	complain( std::string filter);

	private:
		void	_debug( void );
		void	_info( void );
		void	_warning ( void );
		void	_error ( void);
};

#endif