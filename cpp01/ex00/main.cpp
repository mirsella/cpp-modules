/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:14:11 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 13:15:30 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main (void)
{
	Zombie bob;
	bob.set_name("bob");
	bob.announce();

	Zombie *joe = newZombie("joe");
	if (!joe)
		return 1;
	joe->announce();
	delete joe;

	randomChump("jim");
	return 0;
}
