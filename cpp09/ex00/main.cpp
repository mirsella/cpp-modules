/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:06:01 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/28 15:14:35 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main (int argc, char *argv[])
{
	if (argc != 2) {
		std::cout << "Usage: " << argv[0] << " <file>" << std::endl;
		return 1;
	}
	BitcoinExchange::printExchange(argv[1]);
	return 0;
}
