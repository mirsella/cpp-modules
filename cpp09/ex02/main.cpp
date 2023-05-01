/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:06:01 by mirsella          #+#    #+#             */
/*   Updated: 2023/05/01 16:38:25 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <sstream>
#include <errno.h>
#include "PmergeMe.hpp"
#include <ctime>
#include <cstdlib>

template <typename T>
void	printcontainer(T& container) {
	typename T::iterator	it = container.begin();
	while (it != container.end())
		std::cout << *it++ << " ";
	std::cout << std::endl;
}

int main (int argc, char *argv[]) {
	if (argc < 2) {
		std::cout << "Usage: " << argv[0] << " <int int ...>" << std::endl;
		return 1;
	}

	std::list<int>	l;
	std::deque<int>	d;
	for (size_t i = 1; i < (size_t)argc; i++) {
		std::stringstream	ss(argv[i]);
		std::string		token;
		while (ss >> token) {
			char*	ptr;
			errno = 0;
			int	value = std::strtol(token.c_str(), &ptr, 10);
			if (*ptr != 0 || errno != 0)
				return (std::cout << "Error: invalid input: " << token << std::endl, 1);
			if (value < 0)
				return (std::cout << "Error: negative number: " << value << std::endl, 1);
			l.push_back(value);
			d.push_back(value);
		}
	}

	std::cout << "Before: "; printcontainer(l);
	clock_t startl = clock();
	PmergeMe::mergeInsertSort(l);
	clock_t endl = clock();
	double durationl = ((double)(endl - startl) / CLOCKS_PER_SEC) * 1000;
	clock_t startd = clock();
	PmergeMe::mergeInsertSort(d);
	clock_t endd = clock();
	double durationd = ((double)(endd - startd) / CLOCKS_PER_SEC) * 1000;
	std::cout << "After: "; printcontainer(l);
	std::cout << "Time to process range of " << l.size() << " elements with std::list  : " << durationl << "ms" << std::endl;
	std::cout << "Time to process range of " << d.size() << " elements with std::deque : " << durationd << "ms" << std::endl;

	std::list <int> l2(l.begin(), l.end());
	l2.sort();
	if (l == l2)
		std::cout << "std::list is sorted." << std::endl;
	else
		std::cout << "std::list is not sorted." << std::endl;
	if (d == std::deque<int>(l2.begin(), l2.end()))
		std::cout << "std::deque is sorted." << std::endl;
	else
		std::cout << "std::deque is not sorted." << std::endl;
	return 0;
}
