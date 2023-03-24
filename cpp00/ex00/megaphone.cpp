/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:08:33 by mirsella          #+#    #+#             */
/*   Updated: 2023/03/23 18:22:11 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include <cctype>

int main (int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	argv++;
	while (*argv)
	{
		while (**argv)
		{
			std::cout << (char)std::toupper(**argv);
			(*argv)++;
		}
		argv++;
	}
	std::cout << std::endl;
	return 0;
}
