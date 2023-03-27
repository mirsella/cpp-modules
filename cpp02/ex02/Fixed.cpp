/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:26:17 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/27 17:11:10 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdio.h>

Fixed::Fixed()
{
	/* std::cout << "Default constructor called" << std::endl; */
	_value = 0;
}

Fixed::Fixed(const int value)
{
	/* std::cout << "Int constructor called" << std::endl; */
	_value = value << _bits;
}

Fixed::Fixed(const float value)
{
	/* std::cout << "Float constructor called" << std::endl; */
	_value = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	/* std::cout << "Copy constructor called" << std::endl; */
	*this = fixed;
}

Fixed::~Fixed()
{
	/* std::cout << "Destructor called" << std::endl; */
}

Fixed  &Fixed::operator=(const Fixed &fixed)
{
	/* std::cout << "Copy assignment called" << std::endl; */
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return *this;
}

bool	Fixed::operator<(const Fixed fixed) const
{
	return this->toFloat() < fixed.toFloat();
}

bool	Fixed::operator>(const Fixed fixed) const
{
	return this->toFloat() > fixed.toFloat();
}

bool 	Fixed::operator<=(const Fixed fixed) const
{
	return this->toFloat() <= fixed.toFloat();
}

bool 	Fixed::operator>=(const Fixed fixed) const
{
	return this->toFloat() >= fixed.toFloat();
}

bool 	Fixed::operator==(const Fixed fixed) const
{
	return this->toFloat() == fixed.toFloat();
}

bool 	Fixed::operator!=(const Fixed fixed) const
{
	return this->toFloat() != fixed.toFloat();
}

float	Fixed::operator+(const Fixed fixed) const
{
	return this->toFloat() + fixed.toFloat();
}

float	Fixed::operator-(const Fixed fixed) const
{
	return this->toFloat() - fixed.toFloat();
}

float	Fixed::operator*(const Fixed fixed) const
{
	return this->toFloat() * fixed.toFloat();
}

float	Fixed::operator/(const Fixed fixed) const
{
	return this->toFloat() / fixed.toFloat();
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

Fixed	Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	_value++;
	return tmp;
}

Fixed	Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	_value--;
	return tmp;
}

int	Fixed::getRawBits() const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat() const
{
	return (float)_value / (float)(1 << _bits);
}

int	Fixed::toInt() const
{
	return _value >> _bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
