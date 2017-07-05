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

static int	id = 0;
static	Book[id]phone[8];

void	doStuff(bool b, int i)
{
	if (!b)
		id++;
	if (id < 8)
	{
		Book[id].fName(b);
		Book[id].lName(b);
		Book[id].nName(b);
		Book[id].Login(b);
		Book[id].pAddr(b);
		Book[id].Email(b);
		Book[id].pNumb(b);
		Book[id].bDay(b);
		Book[id].fMeal(b);
		Book[id].uColor(b);
		Book[id].dSecret(b);
	}
}

void	search()
{
	int i = 0;

	doStuff(true, i);
}

int	main()
{
	char cmd[256];
	while (1)
	{
		std::cout << "Whatcha wanna do?\n";
		std::cin.getline (cmd, 256);
		if (cmd.compare("EXIT"))
			exit(0);
		else if (cmd.compare("ADD") && id < 8)
			doStuff(false, id++);
		else if (cmd.compare("SEARCH"))
			search();
	}
	return 0;
}
