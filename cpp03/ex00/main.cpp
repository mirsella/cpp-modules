/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:07:17 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/03 17:17:12 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap dwight("dwight");
	dwight.attack("Jim");
	dwight.takeDamage(5);
	dwight.beRepaired(5);
	std::cout << "dwight hit points: " << dwight.getHitPoints() << std::endl;

	/* ClapTrap a("a"); */
	/* a = dwight; */
	/* ClapTrap a(dwight); */
	/* a.attack("self"); */
	return 0;
}
