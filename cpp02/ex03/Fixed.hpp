/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:16:22 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/27 17:13:04 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);
		Fixed	&operator=(const Fixed &fixed);
		~Fixed();

		bool	operator<(const Fixed fixed) const;
		bool	operator>(const Fixed fixed) const;
		bool 	operator<=(const Fixed fixed) const;
		bool 	operator>=(const Fixed fixed) const;
		bool 	operator==(const Fixed fixed) const;
		bool 	operator!=(const Fixed fixed) const;

		float	operator+(const Fixed fixed) const;
		float	operator-(const Fixed fixed) const;
		float	operator*(const Fixed fixed) const;
		float	operator/(const Fixed fixed) const;

		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);

		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
