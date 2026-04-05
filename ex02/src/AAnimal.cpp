/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:45:55 by elvictor          #+#    #+#             */
/*   Updated: 2026/04/05 12:45:55 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal") {
	std::cout << "An abstruct animal has been created." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type) {
	std::cout << "An abstruct animal has been cloned." << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "An abstruct animal has been destroyed." << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	std::cout << "An abstrust animal has been assigned values from another animal." << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

std::string	AAnimal::getType(void) const {
	return _type;
}