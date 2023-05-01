/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 10:32:03 by mirsella          #+#    #+#             */
/*   Updated: 2023/05/01 16:45:09 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstddef>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe&) {};

PmergeMe& PmergeMe::operator=(const PmergeMe&) { return *this; }

PmergeMe::~PmergeMe() {}

void PmergeMe::mergeInsertSort(std::list<int>& l) {
	if (l.size() < 2)
		return;

    std::list<int> left, right;
    std::list<int>::iterator it = l.begin();
	std::advance(it, l.size() / 2);
	left.insert(left.begin(), l.begin(), it);
	right.insert(right.begin(), it, l.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    l.clear();
    std::list<int>::iterator lit = left.begin();
    std::list<int>::iterator rit = right.begin();
    while (lit != left.end() && rit != right.end()) {
        if (*lit < *rit) {
            l.push_back(*lit);
			lit++;
        } else {
            l.push_back(*rit);
			rit++;
        }
    }
    while (lit != left.end()) {
        l.push_back(*lit);
		lit++;
    }
    while (rit != right.end()) {
        l.push_back(*rit);
		rit++;
    }
}

void	PmergeMe::mergeInsertSort(std::deque<int>& d) {
	std::cout << "* sorting array deque container *" << std::endl;
	(void)d;
}
