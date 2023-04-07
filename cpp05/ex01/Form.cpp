/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:45:18 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 14:03:35 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("sample form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute): _name(name), _signed(false)
{
	if (gradeToSign > kMinGrade || gradeToExecute > kMinGrade)
		throw Form::GradeTooLowException();
	if (gradeToSign < kMaxGrade || gradeToExecute < kMaxGrade)
		throw Form::GradeTooHighException();
	_gradeToSign = gradeToSign;
	_gradeToExecute = gradeToExecute;
}

Form::Form(const Form& src)
{
	*this = src;
}

Form& Form::operator=(const Form& rhs)
{
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_name = rhs._signed;
	_gradeToSign = rhs._gradeToSign;
	_gradeToExecute = rhs._gradeToExecute;
	return *this;
}

Form::~Form() {}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (_gradeToSign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	_signed = true;
}

std::string	Form::getName() const
{
	return _name;
}

bool	Form::getSigned() const
{
	return _signed;
}

int	Form::getGradeToSign() const
{
	return _gradeToSign;
}

int	Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}

std::ostream&	operator<<(std::ostream& out, const Form& src)
{
	std::string result = "Form " + src.getName() + " is " + (src.getSigned() ? "signed" : "not signed");
	out << result;
	return out;
}
