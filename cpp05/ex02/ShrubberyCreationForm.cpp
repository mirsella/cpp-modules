/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:44:26 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/07 15:33:19 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src)
{
	*this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	if (this == &src)
		return *this;
	this->_target = src._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void	ShrubberyCreationForm::_execution() const
{
	std::fstream file((_target + "_shrubbery").c_str(), std::fstream::out | std::fstream::trunc);
	if (!file.is_open())
	{
		std::perror("Error opening file");
		return;
	}
	// from https://ascii.co.uk/art/tree
	file << std::endl;
	file << "               ,@@@@@@@,                  " << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
	file << "    ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o     " << std::endl;
	file << "   ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88'    " << std::endl;
	file << "   %&&%&%&/%&&%@@|@@/ /@@@88888|88888'    " << std::endl;
	file << "   %&&%/ %&&%&&@@| V /@@' `88|8 `/88'     " << std::endl;
	file << "   `&%| ` /%&'    |.|        | '|8'       " << std::endl;
	file << "       |o|        | |         | |         " << std::endl;
	file << "       |.|        | |         | |         " << std::endl;
	file << "    ||/ ._|//_/__/  ,|_//__||/.  |_//__/_ " << std::endl;
	file.close();
}
