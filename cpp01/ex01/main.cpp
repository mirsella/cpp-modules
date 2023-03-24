/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:14:11 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 13:17:09 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main (void)
{
	Zombie *horde0 = zombieHorde(0, "Bob");
	Zombie *horde5 = zombieHorde(5, "Bob");
	horde5[0].announce();
	horde5[1].announce();
	horde5[2].announce();
	horde5[3].announce();
	horde5[4].announce();
	delete horde0;
	delete[] horde5;
	return 0;
}

