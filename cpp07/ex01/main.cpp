/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:43:38 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/12 14:26:13 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	printstring(std::string &array)
{
	std::cout << "printstring: " + array << std::endl;
}

void	printintby5(int &i)
{
	std::cout << "printintby5: " << i * 5 << std::endl;
}

int	main ()
{
	std::string	strarray[3] = {"Hello", "World", "!"};
	int			intarray[3] = {1, 2, 3};

	::iter(strarray, 3, &printstring);
	::iter(intarray, 3, &printintby5);
}
