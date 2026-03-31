/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 10:48:43 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/31 10:48:43 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow" << std::endl;
}

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat Constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& cat) : WrongAnimal(cat)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	setType(cat.getType());
}

WrongCat& WrongCat::operator= (const WrongCat& cat)
{
	std::cout << "WrongCat Copy Assignment Operator" << std::endl;
	if (this == &cat)
		return (*this);
	setType(cat.getType());
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}