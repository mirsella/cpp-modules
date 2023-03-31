/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:49:02 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/31 15:29:33 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
}

Point::Point(const Point &copy): _x(copy.getX()), _y(copy.getY())
{
}

Point &Point::operator=(const Point &assign)
{
	if (this != &assign)
	{
		(Fixed)_x = assign.getX();
		(Fixed)_y = assign.getY();
	}
	return *this;
}

Point::~Point()
{
}

const Fixed &Point::getX() const
{
	return _x;
}


const Fixed &Point::getY() const
{
	return _y;
}
