/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:42:47 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/19 00:17:44 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const & src);
		~MutantStack();
		MutantStack & operator=(MutantStack<T> const & rhs);
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		iterator rbegin() { return this->c.rbegin(); }
		iterator rend() { return this->c.rend(); }
};

#include "MutantStack.tpp"
