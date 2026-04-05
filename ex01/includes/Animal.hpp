/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 20:46:27 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/30 20:46:27 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string		_type;
		
	public:
		Animal(void);
		Animal(const Animal& other);
        Animal&	operator=(const Animal& other);
		virtual ~Animal(void);
		
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif