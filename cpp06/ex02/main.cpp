/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:43:05 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/10 13:51:18 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base* generate(void)
{
	srand(time(NULL));
	int a = rand() % 3;
	if (a == 0)
		return (new A());
	else if (a == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

int main()
{
	Base *b = generate();
}
