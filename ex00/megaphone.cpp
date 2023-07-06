/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:57:48 by yabad             #+#    #+#             */
/*   Updated: 2023/07/06 09:18:26 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	upperStr(std::string str) {
	int	len = str.size();
	for (int i = 0; i < len; i++) {
		std::cout << (char)toupper(str[i]);
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < ac; i++) {
			upperStr(av[i]);
		}
	}
	std::cout << std::endl;
	return (0);
}
