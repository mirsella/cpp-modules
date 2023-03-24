/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:10:30 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 17:19:43 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public:
		std::string get_firstName();
		std::string get_lastName();
		std::string get_nickName();
		std::string get_phoneNumber();
		std::string get_darkestSecret();
		int		fillContact();
		void	print();
};

#endif
