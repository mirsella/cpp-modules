/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:21:37 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/10 13:02:36 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &scalarConverter);
		ScalarConverter &operator=(const ScalarConverter &scalarConverter);
		~ScalarConverter();

		static void	convert(const std::string input);
		static std::string	getType(std::string input);
};