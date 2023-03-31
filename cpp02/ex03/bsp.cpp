/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:29:41 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/31 15:52:17 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	triangle_area(const Point a, const Point b, const Point c)
{
	return std::abs((a.getX() * (b.getY() - c.getY())
			+ b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY())) / 2);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	if (triangle_area(a, b, c) == 0)
		return false;
	float a0 = triangle_area(a, b, c);
	float a1 = triangle_area(a, b, point);
	float a2 = triangle_area(a, c, point);
	float a3 = triangle_area(b, c, point);
	if (a1 == 0 || a2 == 0 || a3 == 0)
		return false;
	if (a0 == a1 + a2 + a3)
		return true;
	return false;
}

