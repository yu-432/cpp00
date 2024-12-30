/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:23:34 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/30 15:45:38 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <cstdlib> //atoi
#include <iomanip> //setw, right

#define	CONTACT_MAX 8
#define	PROMPT_WIDTH 16

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		std::string	PROMPTS[5];
		void	AddContact();
		void	SearchContact() const;
		void	ShowContactList() const;
		void	DisplayContact(int index) const;
	private:
		size_t	size;
		Contact	contacts[8];
};

#endif
