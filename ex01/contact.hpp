/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:06:14 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/28 20:13:53 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

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