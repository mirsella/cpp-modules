/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:07:17 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/03 18:14:39 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
	FragTrap dwight("dwight");
	dwight.attack("Jim");
	dwight.takeDamage(5);
	dwight.beRepaired(5);
	std::cout << "dwight hit points: " << dwight.getHitPoints() << std::endl;
	dwight.highFivesGuys();

	/* FragTrap a("a"); */
	/* a = dwight; */
	/* FragTrap a(dwight); */
	/* a.attack("self"); */
	return 0;
}
