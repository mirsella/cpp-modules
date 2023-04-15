/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:43:38 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/15 11:27:27 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	printintby5(int &i)
{
	std::cout << "printintby5: " << i * 5 << std::endl;
}

template <typename T>
void	print(T &t)
{
	std::cout << "print:" << t << std::endl;
}

int	main ()
{
	std::string	strarray[3] = {"Hello", "World", "!"};
	int			intarray[3] = {1, 2, 3};

	::iter(strarray, 3, &print);
	::iter(intarray, 3, &print);
	::iter(intarray, 3, &printintby5);
}
