/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:45:18 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 15:32:15 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("sample form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute): _name(name), _signed(false)
{
	if (gradeToSign > kMinGrade || gradeToExecute > kMinGrade)
		throw AForm::GradeTooLowException();
	if (gradeToSign < kMaxGrade || gradeToExecute < kMaxGrade)
		throw AForm::GradeTooHighException();
	_gradeToSign = gradeToSign;
	_gradeToExecute = gradeToExecute;
}

AForm::AForm(const AForm& src)
{
	*this = src;
}

AForm& AForm::operator=(const AForm& rhs)
{
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_name = rhs._signed;
	_gradeToSign = rhs._gradeToSign;
	_gradeToExecute = rhs._gradeToExecute;
	return *this;
}

AForm::~AForm()
{}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (_gradeToSign < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	_signed = true;
}

void	AForm::execute(const Bureaucrat& bureaucrat) const
{
	if (!_signed)
		throw AForm::NotSignedException();
	if (_gradeToExecute < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	_execution();
}

std::string	AForm::getName() const
{
	return _name;
}

bool	AForm::getSigned() const
{
	return _signed;
}

int	AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int	AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "Form is not signed";
}

std::ostream&	operator<<(std::ostream& out, const AForm& src)
{
	std::string result = "AForm " + src.getName() + " is " + (src.getSigned() ? "signed" : "not signed");
	out << result;
	return out;
}
