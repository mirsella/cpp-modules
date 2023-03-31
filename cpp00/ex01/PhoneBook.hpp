/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:12:56 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/31 12:00:30 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
	{
	private:
		Contact _contacts[8];
		size_t	_nbContacts;
	public:
		PhoneBook();
		size_t	getNbContacts();
		void	printPhoneBook();
		int		newContact();
		Contact	getContact(size_t index);
};

#endif
