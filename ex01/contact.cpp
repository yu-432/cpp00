/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:22:35 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/30 15:40:32 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {
	for (int i = 0; i < 5; i++)
		info[i] = "";
}

Contact::~Contact() {
}

std::string	Contact::getInfo(int index) const {
	if (index >= 0 && index < 5)
		return info[index];
	return NULL;
}

void	Contact::addInfo(int index, std::string input) {
	if (index >= 0 && index < 5)
		info[index] = input;
}
