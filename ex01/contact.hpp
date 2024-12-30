/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:06:14 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/30 15:38:23 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

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

#endif