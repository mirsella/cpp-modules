/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:39:01 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 15:31:51 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &src);
		AForm &operator=(const AForm &rhs);
		virtual ~AForm();

		void	beSigned(const Bureaucrat& bureaucrat);
		void	execute(const Bureaucrat& bureaucrat) const;

		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		class GradeTooHighException: public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char* what() const throw();
		};
		class NotSignedException: public std::exception {
			const char* what() const throw();
		};

	private:
		static const int kMinGrade = 150;
		static const int kMaxGrade = 1;

		std::string _name;
		bool		_signed;
		int 		_gradeToSign;
		int 		_gradeToExecute;

		virtual void		_execution() const = 0;
};
