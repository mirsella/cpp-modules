/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:06:18 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/29 11:47:36 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& cpy) {
	*this = cpy;
}

RPN& RPN::operator=(const RPN&) {
	return *this;
}

RPN::~RPN() {}

double RPN::calculate(std::string input) {
    std::stack<double> stack;
    std::stringstream ss(input);
    std::string token;

    while (ss >> token) {
		if (token.length() > 1)
			throw std::runtime_error("token too long: " + token);
        if (isdigit(token[0])) {
            stack.push(token[0] - '0');
        } else {
			if (stack.size() < 2)
				throw std::runtime_error("not enough number to apply operator: " + token);
            double b = stack.top(); stack.pop();
            double a = stack.top(); stack.pop();
            switch (token[0]) {
                case '+':
                    stack.push(a + b);
                    break;
                case '-':
                    stack.push(a - b);
                    break;
                case '*':
                    stack.push(a * b);
                    break;
                case '/':
					if (b == 0)
						throw std::runtime_error("division by zero");
                    stack.push(a / b);
                    break;
                default:
					throw std::runtime_error("Invalid operator: " + token);
            }
        }
    }
	return stack.top();
}
