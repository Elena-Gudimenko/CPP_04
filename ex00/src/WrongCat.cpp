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
WrongCat::WrongCat(void) : WrongAnimal() {
	std::cout << "A wrong cat has been created." << std::endl;
	_type = "Wrong cat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "A wrong cat has been cloned." << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "A wrong cat has been destroyed." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	std::cout << "A wrong cat has been assigned values from another wrong cat." << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << _type << ": Wrong Meooooooow!" << std::endl;
}