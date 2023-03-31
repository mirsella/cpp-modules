/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:53:38 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/31 16:15:40 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int main( void ) {
	bool	result;

	result = bsp(Point(1, 1), Point(4, 1), Point(2, 5), Point(3, 2));
	std::cout << "is in the rectangle: " << result << std::endl;

	result = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15));
	std::cout << "is in the rectangle: " << result << std::endl;

	result = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15));
	std::cout << "is in the rectangle: " << result << std::endl;

	result = bsp(Point(0, 0), Point(0, 0), Point(20, 0), Point(10, 15));
	std::cout << "is in the rectangle: " << result << std::endl;

	result = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(0, 0));
	std::cout << "is in the rectangle: " << result << std::endl;
	return 0;
}
