/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:43:05 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/12 13:25:57 by mirsella         ###   ########.fr       */
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
	{
		std::cout << "creating A" << std::endl;
		return (new A());
	}
	else if (a == 1)
	{
		std::cout << "creating B" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "creating C" << std::endl;
		return (new C());
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void	identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (...) {}
	std::cout << "Unknown" << std::endl;
}

int main()
{
	Base *b = generate();
	std::cout << "identifyer:" << std::endl;
	identify(b);
	identify(*b);
}
