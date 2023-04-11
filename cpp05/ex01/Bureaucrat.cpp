/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:55:17 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/11 22:49:22 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this == &rhs)
		return *this;
	_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

void	Bureaucrat::signForm(Form &form) const
{
	try {
		form.beSigned(*this);
		std::cout << _name + " signed " + form.getName() << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << _name + " cannot sign " + form.getName() + " because "
			+ e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

void Bureaucrat::increment()
{
	setGrade(_grade - 1);
}

void Bureaucrat::decrement()
{
	setGrade(_grade + 1);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src)
{
	out << src.getName() + ", Bureaucrat grade " << src.getGrade();
	return out;
}
