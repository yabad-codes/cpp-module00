/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:11:48 by yabad             #+#    #+#             */
/*   Updated: 2023/07/06 14:20:27 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	secret;
	public:
		Contact();
		~Contact();
		void		setFirstName(void);
		void		setLastName(void);
		void		setNickName(void);
		void		setPhoneNumber(void);
		void		setSecret(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getSecret(void);
};

#endif