/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:00:04 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 12:37:33 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main ()
{
	try
	{
		Bureaucrat Hermes("Hermes", 1);
		std::cout << Hermes << std::endl;
		Hermes.increment();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Fry("Fry", 151);
		std::cout << Fry << std::endl;
		Fry.increment();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Leela("Leela", 150);
		std::cout << Leela << std::endl;
		Leela.decrement();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
