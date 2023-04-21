/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:30:52 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/21 11:03:34 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class NotFoundException: public std::exception {
	public: virtual const char* what() const throw();
};

template <typename T>
std::vector<int>::iterator	easyfind(T &container, int n);

#include "easyfind.tpp"
