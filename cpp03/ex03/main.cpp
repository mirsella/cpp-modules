/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:07:17 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/03 19:13:27 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main ()
{
	DiamondTrap dwight("dwight");
	dwight.attack("Jim");
	dwight.takeDamage(5);
	dwight.beRepaired(5);
	std::cout << "dwight hit points: " << dwight.getHitPoints() << std::endl;
	dwight.guardGate();
	dwight.highFivesGuys();
	dwight.whoAmI();

	/* DiamondTrap a("a"); */
	/* a = dwight; */
	/* a.whoAmI(); */
	/* DiamondTrap b(dwight); */
	/* b.whoAmI(); */
	return 0;
}
