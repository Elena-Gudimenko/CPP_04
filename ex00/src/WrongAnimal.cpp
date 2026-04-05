/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 10:46:52 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/31 10:46:52 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Wrong animal") {
	std::cout << "A wrong animal has been created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type) {
	std::cout << "A wrong animal has been cloned." << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "A wrong animal has been destroyed." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "A wrong animal has been assigned values from another wrong animal." << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << _type << ": wrong sound animal" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return _type;
}