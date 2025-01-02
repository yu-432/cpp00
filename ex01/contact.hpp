/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:06:14 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/02 11:01:17 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Contact{
	public:
		Contact();
		~Contact();
		std::string	getInfo(int index) const;
		void		addInfo(int index, std::string input);
	private:
		std::string info[5];
};
