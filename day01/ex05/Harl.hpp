/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:30:22 by pierina           #+#    #+#             */
/*   Updated: 2022/09/05 18:27:52 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	public:
		Harl();
		~Harl();
		void	complain( std::string level);

	private:
		void	_debug( void );
		void	_info( void );
		void	_warning ( void );
		void	_error ( void);
};

#endif