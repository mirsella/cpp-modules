/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:21:08 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/17 17:29:34 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _maxSize(n)
{}

Span::Span(const Span &src): _maxSize(src._maxSize)
{
	*this = src;
}

Span&	Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		this->_maxSize = rhs._maxSize;
		this->_numbers = rhs._numbers;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (this->_numbers.size() < this->_maxSize)
		this->_numbers.push_back(n);
	else
		throw Span::SpanFull();
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_numbers.size() + std::distance(begin, end) > _maxSize)
		throw Span::SpanFull();
	_numbers.insert(_numbers.end(), begin, end);
}

int		Span::shortestSpan()
{
	int	min = 0;
	int	tmp = 0;

	if (_numbers.size() < 2)
		throw Span::SpanTooSmall();
	for (std::vector<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
	{
		for (std::vector<int>::iterator it2 = it + 1; it2 != _numbers.end(); it2++)
		{
			if (*it > *it2)
				tmp = *it - *it2;
			else
				tmp = *it2 - *it;
			if (tmp < min || min == 0)
				min = tmp;
		}
	}
	return min;
}

int	Span::longestSpan()
{
	int	max = 0;
	int	tmp = 0;

	if (_numbers.size() < 2)
		throw Span::SpanTooSmall();
	for (std::vector<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
	{
		for (std::vector<int>::iterator it2 = it + 1; it2 != _numbers.end(); it2++)
		{
			if (*it > *it2)
				tmp = *it - *it2;
			else
				tmp = *it2 - *it;
			if (tmp > max)
				max = tmp;
		}
	}
	return max;
}

const char* Span::SpanFull::what() const throw()
{
	return ("Span is full");
}

const char* Span::SpanTooSmall::what() const throw()
{
	return ("Span don't have enough elements");
}
