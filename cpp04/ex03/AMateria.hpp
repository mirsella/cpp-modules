/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:00:31 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/05 15:56:12 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(const std::string& type);
		AMateria(const AMateria&);
		AMateria &operator=(const AMateria &);
		virtual ~AMateria();

		const std::string& 	getType() const;
		virtual AMateria* 	clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string	_type;
};
