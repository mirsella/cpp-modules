/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:54:49 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/18 13:52:04 by mirsella         ###   ########.fr       */
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
