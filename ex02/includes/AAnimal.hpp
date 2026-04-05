/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:42:51 by elvictor          #+#    #+#             */
/*   Updated: 2026/04/05 12:42:51 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal {
	protected:
		std::string		_type;
		
	public:
		AAnimal(void);
		AAnimal(const AAnimal& other);
        AAnimal&	operator=(const AAnimal& other);
		virtual ~AAnimal(void);
		
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif