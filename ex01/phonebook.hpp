/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:23:34 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/30 14:51:02 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <cstdlib> //atoi
#include <iomanip> //setw, right

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		std::string	PROMPTS[5];
		void	AddContact();
		void	SearchContact();
		void	ShowContactList();
		void	DisplayContact(int index);
	private:
		size_t	size;
		Contact	contacts[8];
};

#endif
