/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:07:17 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/03 18:03:08 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	ScavTrap dwight("dwight");
	dwight.attack("Jim");
	dwight.takeDamage(5);
	dwight.beRepaired(5);
	std::cout << "dwight hit points: " << dwight.getHitPoints() << std::endl;
	dwight.guardGate();

	/* ScavTrap a("a"); */
	/* a = dwight; */
	/* ScavTrap a(dwight); */
	/* a.attack("self"); */
	return 0;
}
