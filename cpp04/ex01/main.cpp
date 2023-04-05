/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:07:17 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 12:03:46 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog* dog = new Dog();
	Dog* dog2;

	dog->getBrain()->setIdea(0, "I'm a dog");

	std::cout << "idea n0 of dog: " + dog->getBrain()->getIdea(0) << std::endl;
	dog2 = new Dog(*dog);

	std::cout << "idea n0 of dog2: " + dog2->getBrain()->getIdea(0) << std::endl;

	dog->getBrain()->setIdea(1, "I'm a hot-dog");
	*dog2 = *dog;
	std::cout << "idea n1 of dog2: " + dog2->getBrain()->getIdea(1) << std::endl;

	delete dog;
	delete dog2;
	return 0;
}