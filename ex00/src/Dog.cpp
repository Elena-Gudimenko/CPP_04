/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 23:41:33 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/30 23:41:33 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "A dog has been created." << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "A dog has been cloned." << std::endl;
}

Dog::~Dog(void) {
	std::cout << "A dog has been destroyed." << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	std::cout << "A dog has been assigned values from another dog." << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << _type << ": Woof! Woof!" << std::endl;
}