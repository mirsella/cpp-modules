/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:00:04 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/12 09:19:01 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert [input]" << std::endl;
		return (0);
	}
	ScalarConverter::convert(std::string(argv[1]));
}
