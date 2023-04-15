/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:43:38 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/15 12:18:38 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>

#define MAX_VAL 750
int	main () {
	Array<int> intarray(10);
	for (unsigned int i = 0; i < intarray.size(); i++)
		intarray[i] = i;

	std::cout << "intarray[0] = " << intarray[0] << std::endl;
	std::cout << "intarray[1] = " << intarray[1] << std::endl;
	std::cout << "intarray[" << intarray.size() - 1 << "] = " << intarray[intarray.size() - 1] << std::endl;
	try {
		std::cout << "intarray[" << intarray.size() << "] = " << intarray[intarray.size()] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	Array<std::string> strarray(3);
	strarray[0] = "Hello";
	strarray[1] = "World";
	strarray[2] = "!";

	std::cout << std::endl;
	for (size_t i = 0; i < strarray.size(); i++) {
		std::cout << "strarray[" << i << "] = " << strarray[i] << std::endl;
	}

	Array<int> tmp(intarray);
	for (size_t i = 0; i < tmp.size(); i++) {
		tmp[i] = i * 2;
	}
	std::cout << std::endl;
	intarray = tmp;
	for (size_t i = 0; i < intarray.size(); i++) {
		std::cout << "intarray[" << i << "] * 2 = " << intarray[i] << std::endl;
	}

	// 42's main.cpp
	std::cout << std::endl << "42's main" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}
