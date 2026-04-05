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

int main ()
{
	{
	std::cout << ">> ANIMALS <<" << std::endl;
		std::cout << "* Animals are in the forest *" << std::endl;
		const int size = 4;
		Animal* animals[size];

		for (int i = 0; i < size; i++) {
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << std::endl;

		std::cout << "* The animals are going crazy! *" << std::endl;
		for (int i = 0; i < size; i++)
			animals[i]->makeSound();
		std::cout << std::endl;

		std::cout << "* The day is over... Time to say goodbye *" << std::endl;
		for (int i = 0; i < size; i++)
			delete animals[i];
	}
	std::cout << std::endl;

	{
		std::cout << ">> DOGS <<" << std::endl;
		std::cout << "* Creating dog Snoopy with default ideas *" << std::endl;
		Dog Snoopy;

		Snoopy.getBrain()->setIdea(0, "Eat");
		Snoopy.getBrain()->setIdea(1, "Sleep");
		Snoopy.getBrain()->setIdea(2, "Play");
		std::cout << "Snoopy's ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Snoopy.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "* Snoopy was cloned into dog Snuppy *"  << std::endl;
		Dog Snuppy = Snoopy;
		std::cout << "Snuppy's ideas after cloning:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Snuppy.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "* Snoopy changed his ideas *" << std::endl;
		Snoopy.getBrain()->setIdea(0, "Eat more");
		Snoopy.getBrain()->setIdea(1, "Sleep more");
		Snoopy.getBrain()->setIdea(2, "Play more");
		std::cout << "Snoopy's new ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Snoopy.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "* Snuppy didn't change his ideas *" << std::endl;
		std::cout << "Snuppy's ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Snuppy.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "* Dogs ran off wagging their tails *" << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	{
		std::cout << ">> CATS" << std::endl;
		std::cout << "* Creating cat Tom with default ideas *" << std::endl;
		Cat Tom;

		Tom.getBrain()->setIdea(0, "Eat fish");
		Tom.getBrain()->setIdea(1, "Ignore humans");
		Tom.getBrain()->setIdea(2, "Sleep");
		std::cout << "Tom's ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Tom.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "* Tom was cloned into cat Jerry *" << std::endl;
		Cat Jerry = Tom;
		std::cout << "Jerry's ideas after cloning:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Jerry.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "* Tom changed his ideas *" << std::endl;
		Tom.getBrain()->setIdea(0, "Eat brains");
		Tom.getBrain()->setIdea(1, "Сatch mouses");
		Tom.getBrain()->setIdea(2, "Play much");
		std::cout << "Tom's new ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Tom.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "* Jerry didn't change its ideas *" << std::endl;
		std::cout << "Jerry's ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Jerry.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "* Cats walked away indifferently, of course *" << std::endl;
	}

	return 0;

}