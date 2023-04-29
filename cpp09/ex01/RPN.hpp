/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:02:19 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/29 11:17:58 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>

class RPN {
	public:
		static double calculate(std::string input);

	private:
		RPN();
		RPN(const RPN&);
		RPN& operator=(const RPN&);
		~RPN();
};
