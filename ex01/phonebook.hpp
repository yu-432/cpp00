/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:23:34 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/28 15:33:52 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <cstdlib>

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact();
		void	SearchContact();
		size_t	size;
	private:
		Contact	contacts[8];
};

#endif