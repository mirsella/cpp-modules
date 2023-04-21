/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:54:49 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/21 11:03:34 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char* NotFoundException::what() const throw() {
		return "Value not found in container";
}

template <typename T>
std::vector<int>::iterator	easyfind(T &container, int n) {
	std::vector<int>::iterator	it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFoundException();
	return it;
}
