/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:07:17 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 19:49:12 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog* dog = new Dog();
	if (!dog)
		return (std::cout << "failed to allocate dog" << std::endl, 1);
	Dog* dog2;

	dog->getBrain()->setIdea(0, "I'm a dog");

	std::cout << "idea n0 of dog: " + dog->getBrain()->getIdea(0) << std::endl;
	dog2 = new Dog(*dog);
	if (!dog2)
		return (std::cout << "failed to allocate dog" << std::endl, 1);

	std::cout << "idea n0 of dog2: " + dog2->getBrain()->getIdea(0) << std::endl;

	dog->getBrain()->setIdea(1, "I'm a hot-dog");
	*dog2 = *dog;
	std::cout << "idea n1 of dog2: " + dog2->getBrain()->getIdea(1) << std::endl;

	delete dog;
	delete dog2;

	Animal* animals[10];
	for (size_t i = 0; i < 10; i++) {
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (size_t i = 0; i < 10; i++) {
		if (!animals[i])
			return (std::cout << "failed to allocate animal" << std::endl, 1);
		else
			animals[i]->makeSound();
	}
	for (size_t i = 0; i < 10; i++) {
		delete animals[i];
	}
	return 0;
}
