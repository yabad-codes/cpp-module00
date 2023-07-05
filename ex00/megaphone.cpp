/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:57:48 by yabad             #+#    #+#             */
/*   Updated: 2023/07/05 15:06:39 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_arg(char *arg)
{
	int	i = 0;

	while (arg[i])
	{
		std::cout << (char)toupper(arg[i]);
		i++;
	}
}

void	print_args(char **av)
{
	int	i = 1;

	while (av[i])
	{
		print_arg(av[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		print_args(av);
	std::cout << std::endl;
	return (0);
}
