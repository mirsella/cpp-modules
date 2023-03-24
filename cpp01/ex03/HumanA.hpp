/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:51:44 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 14:54:02 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack();
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif
