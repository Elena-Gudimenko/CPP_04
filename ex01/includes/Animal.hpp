/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 20:46:27 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/30 20:46:27 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal&);
    virtual ~Animal(void);

    std::string getType() const;
    void setType(std::string);
    virtual void makeSound() const;
};

#endif