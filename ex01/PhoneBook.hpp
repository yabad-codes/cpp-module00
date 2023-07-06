/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:28:33 by yabad             #+#    #+#             */
/*   Updated: 2023/07/06 15:36:38 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		index;
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	listContacts(void);
		void	getContact(int index);
};

#endif