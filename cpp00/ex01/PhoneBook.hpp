/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:12:56 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/23 22:29:07 by mirsella         ###   ########.fr       */
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
		int		 _nbContacts;
	public:
		PhoneBook();
		int		getNbContacts();
		void	printPhoneBook();
		int		newContact();
		Contact	getContact(int index);
};

#endif
