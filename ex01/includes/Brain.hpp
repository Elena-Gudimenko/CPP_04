/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 23:22:17 by elvictor          #+#    #+#             */
/*   Updated: 2026/04/04 23:22:17 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	protected:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(const Brain& other);
        Brain&	operator=(const Brain& other);
		~Brain(void);
		
		std::string	getIdea(int index) const;
		void		setIdea(int index, const std::string idea);
};

#endif