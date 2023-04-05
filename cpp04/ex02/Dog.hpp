/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:14:54 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 11:38:51 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	public:
		Dog();
		Dog(const Dog &);
		Dog &operator=(const Dog &);
		~Dog();

		void makeSound() const;
		Brain*	getBrain() const;
	private:
		Brain* _brain;
};

#endif
