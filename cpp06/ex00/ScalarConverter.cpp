/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:36:44 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/12 09:40:26 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cerrno>
#include <cstring>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &) {}

ScalarConverter	& ScalarConverter::operator=(ScalarConverter const &)
{ return *this; }

ScalarConverter::~ScalarConverter() {}

std::string	ScalarConverter::getType(const std::string input)
{
	if (input.length() == 0)
		return "empty";
	else if (input.length() == 1 && !std::isdigit(input[0])) {
		return "char";
	} else {
		char* endptr = NULL;
		errno = 0;
		std::strtol(input.c_str(), &endptr, 0);
		if (endptr == input.c_str() + input.length() && errno == 0) {
			return "int";
		} else {
			endptr = NULL;
			errno = 0;
			std::strtof(input.c_str(), &endptr);
			if (((endptr == input.c_str() + input.length()) || (endptr[0] == 'f' && endptr[1] == 0)) && errno == 0) {
				return "float";
			} else {
				endptr = NULL;
				errno = 0;
				std::strtod(input.c_str(), &endptr);
				if (endptr == input.c_str() + input.length() && errno == 0) {
					return "double";
				} else {
					return "unknown";
				}
			}
		}
	}
}

void	printChar(char c)
{
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	printInt(long i)
{
	char c = static_cast<char>(i);
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	printFloat(float f)
{
	char c = static_cast<char>(f);
	if (std::isnan(f) || std::isinf(f) || f < CHAR_MIN || f > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (std::isnan(f) || std::isinf(f) || f > (float)INT_MAX || f < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	printDouble(double d)
{
	char c = static_cast<char>(d);
	if (std::isnan(d) || std::isinf(d))
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else if (d < CHAR_MIN && d > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (std::isnan(d) || std::isinf(d) || d > (double)INT_MAX || d < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert(const std::string input)
{
	std::string type = getType(input);
	if (type == "char") {
		char c = input[0];
		printChar(c);
	} else if (type == "int") {
		long l = std::atol(input.c_str());
		printInt(l);
	} else if (type == "float") {
		float f = std::strtof(input.c_str(), NULL);
		printFloat(f);
	} else if (type == "double") {
		double d = std::strtod(input.c_str(), NULL);
		printDouble(d);
	} else
	{
		if (errno)
			std::perror("Error");
		else
			std::cout << "type: " + type << std::endl;
	}
}
