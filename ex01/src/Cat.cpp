/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 23:47:31 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/30 23:47:31 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Cats don’t bark! ....Meeeooow" << std::endl;
}

void Cat::addIdea(std::string idea)
{
	brain->addIdea(idea);
}

std::string Cat::getIdea(int index) const
{
	return (brain->getIdea(index));
}

Cat::Cat()
{
	std::cout << "Default Cat Constructor" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	setType(cat.getType());
	brain = new Brain(*cat.brain);
}

Cat& Cat::operator= (const Cat& cat)
{
	std::cout << "Cat Copy Assignment Operator" << std::endl;
	if (this == &cat)
		return (*this);
	setType(cat.getType());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete brain;
}