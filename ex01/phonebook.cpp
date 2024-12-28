/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:23:31 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/28 18:16:28 by yooshima         ###   ########.fr       */
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
	for (int i = 0; i < 5;)
	{
		std::cout << prompts[i];
		if (!std::getline(std::cin, input)) {
			std::cout << "AddContact get EOF" << std::endl;
			exit(1);
		}
		if (!input.length())
			continue;
		contacts[index].addInfo(i, input);
		i++;
	}
	std::cout << "-----Success-----" << std::endl;
	size++;
};

void	PhoneBook::SearchContact() {
	std::string input;
	std::cout << "Enter index: ";
	if (!std::getline(std::cin, input)) {
		std::cout << "SearchContactt get EOF" << std::endl;
		exit(1);
	}
	
	int index = std::atoi(input.c_str());
	std::string element;
	for (int i = 0; i < 4; i++) {
		element = contacts[index].getInfo(i);
		if (element.length() > 10)
			element = element.substr(0, 9) + ".";
		std::cout << std::right << std::setw(10) << element;
		if (i < 3)
			std::cout << "|";
		
	}
	std::cout << std::endl;
};
