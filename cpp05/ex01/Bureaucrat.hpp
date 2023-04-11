/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:00:25 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/11 22:49:22 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();

		class GradeTooLowException: public std::exception {
			public: const char*	 what() const throw();
		};
		class GradeTooHighException: public std::exception {
			public: const char*	 what() const throw();
		};

		void	signForm(Form&) const;

		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int grade);
		void		increment();
		void		decrement();

	private:
		static const int kMinGrade = 150;
		static const int kMaxGrade = 1;

		const std::string _name;
		int			_grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);
