/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:20:02 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 13:28:52 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main ()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address of the string variable " << &string << std::endl;
	std::cout << "memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF " << &stringREF << std::endl;

	std::cout << "value of the string variable " << string << std::endl;
	std::cout << "value of the stringPTR " << *stringPTR << std::endl;
	std::cout << "value of the stringREF " << stringREF << std::endl;
	return 0;
}
