/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/05 10:35:15 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string);
		WrongAnimal(const WrongAnimal &);
		WrongAnimal &operator=(const WrongAnimal &);
		virtual ~WrongAnimal();

		std::string getType() const;
		void 		setType(std::string);
		virtual void		makeSound() const;
	
	protected:
		std::string	_type;
};

#endif
