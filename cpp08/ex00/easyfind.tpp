/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:54:49 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/17 15:00:11 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
std::vector<int>::iterator	easyfind(T &container, int n) {
	std::vector<int>::iterator	it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFoundException();
	return it;
}
