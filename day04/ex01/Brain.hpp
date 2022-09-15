/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:02:10 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/15 20:50:34 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {

public:

	Brain( void );
	Brain( Brain const & brain);
	~Brain( void );

	Brain &	operator=(Brain const & brain);
	std::string	ideas[100];	

};

// Implement a Brain class. It contains an array of 100 std::string called ideas.
// This way, Dog and Cat will have a private Brain* attribute.
// Upon construction, Dog and Cat will create their Brain using new Brain();
// Upon destruction, Dog and Cat will delete their Brain.
// In your main function, create and fill an array of Animal objects. Half of it will
// be Dog objects and the other half will be Cat objects. At the end of your program
// execution, loop over this array and delete every Animal. You must delete directly dogs
// and cats as Animals. The appropriate destructors must be called in the expected order.
// Don’t forget to check for memory leaks.
// A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies
// are deep copies!

#endif