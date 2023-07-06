/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:44:14 by yabad             #+#    #+#             */
/*   Updated: 2023/07/06 17:50:01 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
void	getLine(char sep, char content);
void	fillLine(char sep, std::string r1, std::string r2, std::string r3, std::string r4);

PhoneBook::PhoneBook() : index(0) {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact(void) {
	if (index == 8)
		index = 0;
	contacts[index].setFirstName();
	contacts[index].setLastName();
	contacts[index].setNickName();
	contacts[index].setPhoneNumber();
	contacts[index].setSecret();
	std::cout << "Contact Added!" << std::endl;
	index++;
}

void	PhoneBook::listContacts(void) {
	int i;
	if (index == 0 && contacts[index].getFirstName() == "\0")
	{
		std::cout << "The phonebook is empty\n";
		return ;
	}
	std::cout << "******* list of contacts *******" << std::endl;
	getLine('*', '-');
	fillLine('|', "index", "first name", "last name", "nickname");
	getLine('*', '-');
	for (int i = 0; i < 8; i++) {
		if (contacts[i].getFirstName() == "\0")
			break ;
		else
			fillLine('|', std::to_string(i + 1), contacts[i].getFirstName(), contacts[i].getLastName(), contacts[i].getNickName());
	}
	getLine('*', '-');
	std::cout << "\n\033[1;31mEnter index : \033[0;37m";
	std::cin >> i;
	i--;
	getContact(i);
}

void	PhoneBook::getContact(int index) {
	if (index > 7 || index < 0)
	{
		std::cout << "Out of range (0 <= index <= 7)\n";
		return ;
	}
	if (contacts[index].getFirstName() == "\0")
	{
		std::cout << "Contact not found\n";
		return ;
	}
	std::cout << "First Name : " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name : " << contacts[index].getLastName() << std::endl;
	std::cout << "Nick Name : " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number : " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Secret : " << contacts[index].getSecret() << std::endl;
}

void	getLine(char sep, char content) {
	std::string space(10, content);

	for (int i = 0; i < 4; i++)
		std::cout << sep << space;
	std::cout << "*" << std::endl;
}

int		getLeftPadding(std::string row) {
	return ((10 - row.length()) + 1);
}

void	fillRow(char sep, std::string row) {
	std::cout << std::left << std::setw(getLeftPadding(row)) << sep;
	if (row.length() <= 10)
		std::cout << row;
	else
		std::cout << row.substr(0, 9) << ".";
}

void	fillLine(char sep, std::string r1, std::string r2, std::string r3, std::string r4) {
	fillRow(sep, r1);
	fillRow(sep, r2);
	fillRow(sep, r3);
	fillRow(sep, r4);
	std::cout << sep << std::endl;
}
