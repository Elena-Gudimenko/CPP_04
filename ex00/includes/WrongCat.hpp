/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 10:47:44 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/31 10:47:44 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	void makeSound() const;
	WrongCat();
	WrongCat(const WrongCat&);
	WrongCat& operator= (const WrongCat&);
	~WrongCat();
};



#endif