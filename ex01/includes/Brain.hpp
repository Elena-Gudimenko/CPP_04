/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 22:04:48 by elvictor          #+#    #+#             */
/*   Updated: 2026/04/04 22:04:48 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];
    int         ideaIndex;

public:
    Brain();
    Brain(const Brain& src);
    Brain& operator=(const Brain& src);
    ~Brain();

    void        addIdea(std::string idea);
    std::string getIdea(int index) const;
    int         getIdeaIndex() const;
    void        setIdeaIndex(int index);
};

#endif