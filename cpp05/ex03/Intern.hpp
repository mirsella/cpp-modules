/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:03:21 by mirsella          #+#    #+#             */
/*   Updated: 2023/04/07 16:29:46 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <string>

class	Intern
{
	public:

		Intern();
		Intern(Intern const & intern);
		~Intern();

		Intern &	operator=(Intern const & intern);

		AForm *		makeForm(std::string const & formName, std::string const & target) const;
};
