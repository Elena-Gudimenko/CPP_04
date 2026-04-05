/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 23:38:28 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/30 23:38:28 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain* _brain;
public:
	Dog(void);
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog(void);
	
	void	makeSound(void) const;
	Brain*  getBrain(void) const;
};

#endif