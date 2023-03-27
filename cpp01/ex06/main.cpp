/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:39:14 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/27 10:34:00 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char *argv[])
{
	Harl harl;
	(void)argc;

	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter [DEBUG, INFO, WARNING, ERROR]" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}
