/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:51:44 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 15:31:14 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif
