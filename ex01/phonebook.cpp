/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:23:31 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/30 15:46:05 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : size(0) {
	PROMPTS[0] = "First name: ";
	PROMPTS[1] = "Last name: ";
	PROMPTS[2] = "Nickname: ";
	PROMPTS[3] = "Phone number: ";
	PROMPTS[4] = "Darkest secret: ";
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::AddContact() {
	Contact temp;
	std::string line;

	for (int i = 0; i < 5;)
	{
		std::cout << std::right << std::setw(PROMPT_WIDTH) << PROMPTS[i];
		if (!std::getline(std::cin, line)) {
			std::cout << "Error: Get EOF" << std::endl;
			exit(1);
		}
		if (!line.length())
			continue;
		temp.addInfo(i, line);
		i++;
	}
	contacts[size % 8] = temp;
	std::cout << "<-----Success----->" << std::endl;
	size++;
}

void	PhoneBook::SearchContact() const {
	ShowContactList();

	std::string line;
	std::cout << "Enter index: ";
	if (!std::getline(std::cin, line)) {
		std::cout << "Error: Get EOF" << std::endl;
		exit(1);
	}
	
	int index = std::atoi(line.c_str());
	if (index < 0 || CONTACT_MAX <= index){
		std::cout << "Error: Index out of range 0-7" << std::endl;
		return ;
	}

	DisplayContact(index);
}

void	PhoneBook::ShowContactList() const {
	std::string contact;

	std::cout << "     Index|First Name| Last Name|  Nickname" <<std::endl;
	for (int i = 0; i < CONTACT_MAX; i++) {
		if (i >= (int)size)
			return ;
		std::cout << std::right << std::setw(10) << i << "|";
		for (int j = 0; j < 3; j++) {
			contact = contacts[i].getInfo(j);
			if (contact.length() > 10)
				contact = contact.substr(0, 9) + ".";
			std::cout << std::right << std:: setw(10) << contact;
			if (j < 2)
				std::cout << "|";
		}
		std::cout << std::endl;
	}
}

void	PhoneBook::DisplayContact(int index) const {
	if (index >= (int)size) {
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	for (int i = 0; i < 5; i++) {
		std::cout << std::right << std::setw(PROMPT_WIDTH) << PROMPTS[i];
		std::cout << contacts[index].getInfo(i) << std::endl;
	}
}