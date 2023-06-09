/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:43:38 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/21 11:08:44 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iostream>

int main ()
{
	Span sp = Span(6);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;

	Span s1 = sp;
	s1.addNumber(100);
	sp = s1;
	std::cout << "longest span is now: " << sp.longestSpan() << std::endl;


	std::vector<int> v(20000);
	for (unsigned int i = 0; i < v.size(); ++i)
		v[i] = i;
	try {
		Span s(20000);
		s.addRange(v.begin(), v.end());
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
