/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:34:53 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/31 19:00:14 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace_string(std::string s1, std::string s2, std::string buffer)
{
	size_t	pos;

	pos = buffer.find(s1, 0);
	while (pos != std::string::npos)
	{
		buffer.erase(pos, s1.length());
		buffer.insert(pos, s2);
		pos = buffer.find(s1, pos + s2.length());
	}
	return buffer;
}

void	replace_files(std::fstream &in, std::fstream &out, std::string s1, std::string s2)
{
	std::string buffer;

	while (std::getline(in, buffer, '\n'))
	{
		out << replace_string(s1, s2, buffer) << std::endl;
		if (in.eof())
			break;
	}
}

int main (int argc, char *argv[])
{
	std::fstream in;
	std::fstream out;

	if (argc != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return 1;
	}

	in.open(argv[1], std::fstream::in);
	if (!in.is_open())
	{
		std::perror(argv[1]);
		return 1;
	}
	out.open((std::string(argv[1]) + ".replace").c_str(), std::fstream::out | std::fstream::trunc);
	if (!out.is_open())
	{
		in.close();
		std::perror((std::string(argv[1]) + ".replace").c_str());
		return 1;
	}
	replace_files(in, out, std::string(argv[2]), std::string(argv[3]));
	in.close();
	out.close();
	return 0;
}
