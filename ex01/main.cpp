/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:06:34 by yabad             #+#    #+#             */
/*   Updated: 2023/07/06 17:10:49 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	book;
	std::string	cmd;

	while (true) {
		std::cout << "Enter command : ";
		std::cin >> cmd;
		if (cmd == "ADD")
			book.addContact();
		else if (cmd == "SEARCH")
			book.listContacts();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
