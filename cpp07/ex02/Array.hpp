/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:39:25 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/12 15:53:31 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &src);
		~Array();

		Array &operator=(Array const &rhs);
		T &operator[](unsigned int n) const;

		unsigned int size() const;

		class OutOfBoundsException: public std::exception
		{ public: virtual const char *what() const throw(); };

	private:
		T *_array;
		unsigned int _size;
};
