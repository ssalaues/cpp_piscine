/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <ssalaues@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:25:15 by ssalaues          #+#    #+#             */
/*   Updated: 2017/07/04 12:45:02 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main()
{
	char cmd[256];
	while (1)
	{
		std::cout << "Whatcha wanna do?\n";
		std:cin.getline (cmd, 256);
		if (cmd.compare("EXIT"))
			exit(0);
		else if (cmd.compare("ADD"))
			Book.add;
		else if (cmd.compare("SEARCH"))
			Book.search;
	}
	return 0;
}
