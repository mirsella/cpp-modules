/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 10:24:02 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/30 23:43:55 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <deque>
#include <algorithm>

class PmergeMe {
	private:
		PmergeMe();
		PmergeMe(const PmergeMe&);
		PmergeMe& operator=(const PmergeMe&);
		~PmergeMe();
	public:
		static void	mergeInsertSort(std::list<int>& l);
		static void	mergeInsertSort(std::deque<int>& d);
};
