/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:06:47 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/18 13:57:25 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <vector>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span&);
		Span& operator=(const Span&);
		~Span();

		void	addNumber(int n);
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();

		class SpanFull: public std::exception {
			public: virtual const char* what() const throw();
		};
		class SpanTooSmall: public std::exception {
			public: virtual const char* what() const throw();
		};

	private:
		Span();

		std::vector<int>	_numbers;
		unsigned int		_maxSize;
};
