/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:43:38 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/12 16:03:50 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include <iostream>

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
}
