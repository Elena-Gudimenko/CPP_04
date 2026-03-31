/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 23:33:40 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/30 23:33:40 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main ()
{
	const Animal* a = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	const WrongAnimal* w = new WrongCat();

	std::cout << std::endl;
	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;

	std::cout << std::endl;
	d->makeSound();
	c->makeSound();
	a->makeSound();
	w->makeSound();
	
	std::cout << std::endl;
	delete d;
	delete c;
    delete a;
	delete w;
}