/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:00:32 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 13:13:03 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "not enought Zombies for a horde !" << std::endl, 0;
		return NULL;
	}
	Zombie *horde = new Zombie[N];
	if (!horde)
	{
		return NULL;
		std::cout << "couldn't allocate horde" << std::endl;
	}
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return horde;
}
