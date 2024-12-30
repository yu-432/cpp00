/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:58:03 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/30 15:41:14 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main() {
	PhoneBook phonebook;
	std::string command;

	while (true) {
		std::cout << "PhoneBook> ";
		if (!std::getline(std::cin, command)) {
			std::cout << "Error: Get EOF" << std::endl;
			exit(1);
		}
		if (command == "ADD")
			phonebook.AddContact();
		else if (command == "SEARCH")
			phonebook.SearchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Use ADD, SEARCH or EXIT" << std::endl;
	}
	return 0;
}