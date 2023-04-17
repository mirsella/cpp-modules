/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:43:38 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/17 17:29:58 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iostream>

int main ()
{
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}


	std::vector<int> v(10000);
	for (int i = 0; i < 10000; ++i)
		v[i] = i;
	try {
		Span s(10000);
		s.addRange(v.begin(), v.end());
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
