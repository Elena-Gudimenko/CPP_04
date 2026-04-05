/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 23:46:58 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/30 23:46:58 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* _brain;
public:
	Cat(void);
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat(void);

	void	makeSound(void) const;
	Brain*	getBrain(void) const;
};

#endif
