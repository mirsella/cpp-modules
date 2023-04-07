/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:00:04 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 16:32:12 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main ()
{
	Bureaucrat Fry("Fry", 146);
	ShrubberyCreationForm form1("trees");
	Fry.signForm(form1);
	Fry.executeForm(form1);

	Bureaucrat Leela("Leela", 140);
	ShrubberyCreationForm form2("trees");
	Leela.signForm(form2);
	Leela.executeForm(form2);

	Bureaucrat Hermes("Hermes Conrad", 37);

	ShrubberyCreationForm trees("trees");
	Hermes.signForm(trees);
	Hermes.executeForm(trees);

	RobotomyRequestForm robot("Bender");
	Hermes.signForm(robot);
	Hermes.executeForm(robot);

	PresidentialPardonForm pardon("Zoidberg");
	Hermes.signForm(pardon);
	Hermes.executeForm(pardon);

	Bureaucrat Nixon("Nixon", 1);
	Nixon.signForm(pardon);
	Nixon.executeForm(pardon);

	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		Hermes.signForm(*rrf);
		Hermes.executeForm(*rrf);
		delete rrf;
	}
	return 0;
}
