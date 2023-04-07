/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:04:42 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 16:28:55 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern &) {}

Intern::~Intern() {}

Intern & Intern::operator=(const Intern &) { return *this; }

AForm * Intern::makeForm(std::string const & formName, std::string const & target) const
{
	std::string	names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* funcs[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	AForm* form = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (names[i] == formName)
			form = funcs[i];
		else
			delete funcs[i];
	}
	if (!form)
		std::cout << "Intern cannot create form " << formName << std::endl;
	return form;
}
