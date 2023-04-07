/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:00:04 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 14:10:56 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main ()
{
	Bureaucrat	Hermes("Hermes Conrad", 37);
	Form		Form1("Form1", 37, 37);
	Form		Form2("Form2", 36, 36);
	try {
		Form		Form3("Form3", 0,151);
	}
	catch (const std::exception& e) {
		std::cout << "couldn't create Form3: " << e.what() << std::endl;
	}

	Hermes.signForm(Form1);
	Hermes.signForm(Form2);
	return 0;
}
