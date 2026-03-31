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

class Dog : public Animal {
public:
	virtual void makeSound() const;
	Dog();
	Dog(const Dog&);
	Dog& operator= (const Dog&);
	virtual ~Dog();
};

#endif