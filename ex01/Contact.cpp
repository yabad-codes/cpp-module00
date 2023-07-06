/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:20:42 by yabad             #+#    #+#             */
/*   Updated: 2023/07/06 17:04:58 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::setFirstName(void) {
	std::cout << "Enter First Name : ";
	std::cin >> firstName;
}

void	Contact::setLastName(void) {
	std::cout << "Enter Last Name : ";
	std::cin >> lastName;
}

void	Contact::setNickName(void) {
	std::cout << "Enter Nick Name : ";
	std::cin >> nickName;
}

void	Contact::setPhoneNumber(void) {
	std::cout << "Enter Phone Number : ";
	std::cin >> phoneNumber;
}

void	Contact::setSecret(void) {
	std::cout << "Enter your darkest secret : ";
	std::cin >> secret;
}

std::string	Contact::getFirstName(void) {
	return (firstName);
}

std::string	Contact::getLastName(void) {
	return (lastName);
}

std::string	Contact::getNickName(void) {
	return (nickName);
}

std::string	Contact::getPhoneNumber(void) {
	return (phoneNumber);
}

std::string	Contact::getSecret(void) {
	return (secret);
}
