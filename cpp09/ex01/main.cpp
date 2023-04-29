/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:06:01 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/28 23:09:48 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

int main (int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Usage: " << argv[0] << " <expression>" << std::endl;
		return 1;
	}

	try {
		double result = RPN::calculate(argv[1]);
		std::cout << result << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
