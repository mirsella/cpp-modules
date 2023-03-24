/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:22:27 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 13:15:56 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name)
{
	Zombie	*zb = new Zombie;
	if (!zb)
	{
		std::cout << "Error: newZombie failed to allocate memory" << std::endl;
		return NULL;
	}
	zb->set_name(name);
	return zb;
}
