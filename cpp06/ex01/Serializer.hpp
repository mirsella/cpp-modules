/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:02:17 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/10 13:28:59 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"
#include <stdint.h>
#include <string>

class Serializer
{
	public:
		Serializer();
		Serializer(Serializer const &);
		Serializer &operator=(Serializer const &);
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
