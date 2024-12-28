/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:06:14 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/28 13:12:04 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

enum Firlds {
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	DARKEST_SECRET
};

class Contact{
	public:
		Contact();
		~Contact();
		std::string	getInfo(int index);
		void		addInfo(int index, std::string input);
	private:
		std::string info[5];
};

#endif