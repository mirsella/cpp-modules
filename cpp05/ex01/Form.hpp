/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:39:01 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 13:38:44 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &src);
		~Form();
		Form &operator=(const Form &rhs);

		void		beSigned(const Bureaucrat &bureaucrat);

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

	private:
		static const int kMinGrade = 150;
		static const int kMaxGrade = 1;

		std::string _name;
		bool		_signed;
		int 		_gradeToSign;
		int 		_gradeToExecute;
};
