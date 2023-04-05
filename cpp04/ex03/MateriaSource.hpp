/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:37:39 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/05 15:55:45 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class	MateriaSource: public IMateriaSource
{
	public:

		MateriaSource();
		MateriaSource(const MateriaSource& materiaSource);
		MateriaSource & operator=(const MateriaSource& materiaSource);
		~MateriaSource();

		void learnMateria(AMateria* materia);
		AMateria *createMateria(const std::string& type);

	private:
		AMateria	*_materia[4];
};
