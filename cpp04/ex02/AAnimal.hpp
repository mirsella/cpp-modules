/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/05 13:11:39 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class AAnimal
{
	public:
		AAnimal &operator=(const AAnimal &);
		virtual ~AAnimal();

		std::string 	getType() const;
		void 			setType(std::string);
		virtual void	makeSound() const = 0;
	
	protected:
		AAnimal();
		AAnimal(std::string);
		AAnimal(const AAnimal &);

		std::string	_type;
};

#endif
