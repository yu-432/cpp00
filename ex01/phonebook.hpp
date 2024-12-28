/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:23:34 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/28 13:59:09 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact();
		Contact	SearchContact();
		size_t	size;
	private:
		Contact	contacts[8];
};

#endif