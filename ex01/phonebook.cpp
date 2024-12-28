/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:23:31 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/28 15:49:35 by yooshima         ###   ########.fr       */
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
		std::getline(std::cin, input);
		contacts[index].addInfo(i, input);
	}
	size++;
};

void	PhoneBook::SearchContact() {
	std::string input;
	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	
	int index = std::atoi(input.c_str());
	for (int i = 0; i < 4; i++)
		std::cout << contacts[index].getInfo(i) << std::endl;
};
