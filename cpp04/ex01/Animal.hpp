/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/05 10:25:01 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string);
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal();

		std::string getType() const;
		void 		setType(std::string);
		virtual void		makeSound() const;
	
	protected:
		std::string	_type;
};

#endif
