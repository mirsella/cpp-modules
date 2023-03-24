/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:15:32 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 13:10:57 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie
{
	public:
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);

	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
