/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:23:31 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/28 14:26:34 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : size(0) {
};

PhoneBook::~PhoneBook() {
}

void	PhoneBook::AddContact() {
	const std::string prompts[] = {
		"First name: ",
		"Last name: ",
		"Nickname: ",
		"Phone number: ",
		"Darkest secret: ",
	};

	std::string input;
	size_t index = size % 8;
	for (int i = 0; i < 5; i++)
	{
		std::cout << prompts[i];
		std::cin >> input;
		contacts[index].addInfo(i, input);
	}
	std::cout << "-----input check-----" << std::endl;
	for (int j = 0; j < 5; j++) {
		std::cout << contacts[index].getInfo(j) << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	size++;
};

Contact	PhoneBook::SearchContact() {
	Contact c;
	return c;
};
