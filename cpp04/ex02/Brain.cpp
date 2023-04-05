/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:00:14 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/05 11:53:14 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	for (size_t i = 0; i < 100; i++) {
		_ideas[i] = brain._ideas[i];
	}
	std::cout << "Brain created from copy" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	if (this == &brain)
		return *this;
	for (size_t i = 0; i < 100; i++) {
		_ideas[i] = brain._ideas[i];
	}
	std::cout << "Brain copied by assignment" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	return _ideas[i % 100];
}

void	Brain::setIdea(int i, std::string idea)
{
	_ideas[i % 100] = idea;
}
