/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 23:29:43 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/30 23:29:43 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "An animal has been created." << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type) {
	std::cout << "An animal has been cloned." << std::endl;
}

Animal::~Animal(void) {
	std::cout << "An animal has been destroyed." << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	std::cout << "An animal has been assigned values from another animal." << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << _type << ": Sound of animal" << std::endl;
}

std::string	Animal::getType(void) const {
	return _type;
}