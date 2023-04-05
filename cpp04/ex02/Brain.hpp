/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:00:18 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 11:12:18 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain &);
		Brain &operator=(const Brain &);
		~Brain();

		std::string	getIdea(int i) const;
		void		setIdea(int i, std::string idea);
	protected:
		std::string	_ideas[100];
};

#endif
