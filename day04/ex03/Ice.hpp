/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:02:35 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/16 18:58:58 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
#define

class Ice{

public:

	Ice( void );
	Ice( Ice const & ice );
	~Ice( void );

	Ice &		operator=( Ice const & rhs);
	
	std::string const & getType() const;
	void				setType(std::string type);
	
	Ice*	clone() const;
	void	use(ICharacter &target);
	
protected:

};

#endif