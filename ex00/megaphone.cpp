/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 21:54:30 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/27 22:08:26 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for (int i = 1; i < argc; i++) {
		std::string temp = argv[i];
		for (size_t j = 0; j < temp.length(); j++)
			std::cout << (char)toupper(temp[j]);
	}
	std::cout << std::endl;
	return 0;
}