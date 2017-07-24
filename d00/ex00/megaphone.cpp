/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <ssalaues@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:37:12 by ssalaues          #+#    #+#             */
/*   Updated: 2017/07/19 18:20:42 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		while(*av)
		{
			for(int i = 0; (*av)[i]; i++)
			{
				std::cout << (char)toupper((*av)[i]);
			}
			av++;
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return 0;
}
