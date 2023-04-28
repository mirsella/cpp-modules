/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:03:42 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/28 17:22:45 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <algorithm>
#include <fstream>

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &)
{
	return *this;
}

std::map<std::string, float>	readfile(std::ifstream &file)
{
	std::map<std::string, float>	data;

	while (file.good()) {
		std::string		line;
		std::getline(file, line);
		if (line.empty() || line == "date,exchange_rate") continue;

		size_t	pos = line.find(',');
		if (pos == std::string::npos)
			throw std::runtime_error("Invalid line: " + line);
		std::string		key = line.substr(0, pos);
		std::string		value = line.substr(pos + 1);
		if (key.empty() || value.empty())
			throw std::runtime_error("Missing a value: " + line);

		char* ptr;
		errno = 0;
		data[key] = std::strtof(value.c_str(), &ptr);
		if (*ptr != '\0'|| errno != 0 || data[key] < 0)
			throw std::runtime_error("Invalid value: " + value);
	}
	return data;
}

std::string	trimspaces(std::string str)
{
	str.erase(0, str.find_first_not_of(" \t"));
	str.erase(str.find_last_not_of(" \t") + 1);
	return str;
}

bool	isdatevalid(std::string date)
{
	size_t monthstart = date.find('-') + 1;
	size_t daystart = date.find('-', monthstart) + 1;
	char* ptr;
	if (monthstart != 5 || monthstart == std::string::npos || daystart == std::string::npos)
		return false;
	long month = std::strtol(date.c_str() + monthstart, &ptr, 10);
	if (*ptr != '-' || month < 1 || month > 12)
		return false;
	long day = std::strtol(date.c_str() + daystart, &ptr, 10);
	if (*ptr != 0 || day < 1 || day > 31)
		return false;
	return true;
}

void	print_date_value(std::map<std::string, float> data, std::string date, float value)
{
	std::string tmp = date;
	char& last = tmp[tmp.length() - 1];
	char& prev = tmp[tmp.length() - 2];
	while (data.find(tmp) == data.end())
	{
		if (last == '0')
		{
			if (prev == '0')
				return (void)(std::cout << "Error: couldn't not find date" << std::endl);
			last = '9';
			prev--;
		}
		else
			last--;
	}
	std::map<std::string, float>::iterator it = data.find(tmp);
	std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}

void	print_price_from_file(std::ifstream &file, std::map<std::string, float> data)
{
	while (file.good())
	{
		std::string		line;
		std::getline(file, line);
		if (line.empty() || line == "date | value") continue;

		size_t	pos = line.find('|');
		if (pos == std::string::npos)
		{
			std::cout << "Error: Invalid line: " + line << std::endl;
			continue;
		}
		std::string		date = trimspaces(line.substr(0, pos));
		std::string		value = trimspaces(line.substr(pos + 1));
		if (date.empty() || value.empty())
		{
			std::cout << "Error: Missing a value: " + line << std::endl;
			continue;
		}

		char* ptr;
		errno = 0;
		float price = std::strtof(value.c_str(), &ptr);
		if (*ptr != '\0'|| errno != 0 || price < 0 || price > 1000)
		{
			std::cout << "Error: Invalid value: " + value << std::endl;
			continue;
		}
		if (!isdatevalid(date))
		{
			std::cout << "Error: Invalid date: " + date << std::endl;
			continue;
		}
		print_date_value(data, date, price);
	}
}
void	BitcoinExchange::printExchange(std::string path)
{
	std::map<std::string, float>	data;
	
	std::ifstream datafile("data.csv");
	try {
		if (!datafile.is_open())
			throw std::runtime_error(std::strerror(errno));
		data = readfile(datafile);
		datafile.close();
		if (data.empty())
			throw std::runtime_error("No data");
	}
	catch (const std::exception& e) {
		std::cout << "Error: reading data.csv: " << e.what() << std::endl;
		datafile.close();
		return;
	}
	std::ifstream file(path.c_str());
	try {
		if (!file.is_open())
			throw std::runtime_error(std::strerror(errno));
		print_price_from_file(file, data);
		file.close();
	}
	catch (const std::exception& e) {
		std::cout << "Error: reading " << path << ": " << e.what() << std::endl;
		file.close();
		return;
	}
}
