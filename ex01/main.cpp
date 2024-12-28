/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:58:03 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/28 17:36:33 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main() {
	Contact c;
	PhoneBook p;
	std::string command;
	while (1) {
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, command)) {
			std::cout << "EOF" << std::endl;
			break;
		}
		if (command == "ADD")
			p.AddContact();
		else if (command == "SEARCH")
			p.SearchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Type \"ADD\" \"SEARCH\" \"EXIT\"" << std::endl;
	}
	return 0;
}