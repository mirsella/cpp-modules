/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:00:04 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/10 13:33:35 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main ()
{
	Data data1 = {"bob", 42};
	Serializer s;

	std::cout << "Data1: " + data1.name + ", " << data1.age << std::endl;
	std::cout << "data1 address: " << &data1 << std::endl;

	Data* data2 = s.deserialize(s.serialize(&data1));
	std::cout << "Data2: " + data2->name + ", " << data2->age << std::endl;
	std::cout << "data2 address: " << data2 << std::endl;
	if (data1.name == data2->name && data1.age == data2->age)
		std::cout << "✔️ Data's addresses are the same" << std::endl;
	else
		std::cout << "❌ Data's addresses are not the same" << std::endl;
}
