/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:14:11 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 12:57:11 by lgillard         ###   ########.fr       */
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
	joe->announce();
	delete joe;

	randomChump("jim");
	return 0;
}
