/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:19:51 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/31 15:07:33 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		Point &operator=(const Point &assign);
		~Point();
		const Fixed &getX() const;
		const Fixed &getY() const;

	private:
		const Fixed _x;
		const Fixed _y;
};

#endif
