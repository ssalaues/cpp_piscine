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

#include "Book.class.hpp"

static int	id = 0;
static	Book phone[8];

void	doStuff(int flag, int i)
{
	if (!flag)
		id++;
	if (id < 8)
	{
		phone[i].fName(flag);
		phone[i].lName(flag);
		phone[i].nName(flag);
		phone[i].Login(flag);
		phone[i].pAddr(flag);
		phone[i].Email(flag);
		phone[i].pNumb(flag);
		phone[i].bDay(flag);
		phone[i].fMeal(flag);
		phone[i].uColor(flag);
		phone[i].dSecret(flag);
	}
}

void	search()
{
	std::string index;

	for (int i = 0; i < id; i++)
	{
		std::cout << "|" << i << "|";
		doStuff(2, i);
	}
	std::cout << "Choose your index: \n";
	std::getline(std::cin, index);
	if (index == "0" || index == "1" || index == "2" || index == "3" || \
		index == "4" || index == "5" || index == "6" || index == "7")
		doStuff(1, atoi(index.c_str()));
	else
		std::cout << "Bad index\n"
}

int	main()
{
	std::string cmd;

	while (1)
	{
		std::cout << "Whatcha wanna do?\nCommands: ADD SEARCH EXIT\n";
		std::getline(std::cin, cmd);
		std::cout << "WE GON " << cmd << "!\n";
		if (cmd == "EXIT")
			exit(0);
		else if (cmd == "ADD" && id < 8)
			doStuff(0, id);
		else if (cmd == "SEARCH")
			search();
		else
			std::cout << "Wait... we don't know what \"" << cmd << "\" is..\n";
	}
	return 0;
}
