/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 10:41:18 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/31 10:41:18 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator= (const WrongAnimal&);
    ~WrongAnimal();
	std::string getType() const;
	void setType(std::string);
	void makeSound() const;
};



#endif
