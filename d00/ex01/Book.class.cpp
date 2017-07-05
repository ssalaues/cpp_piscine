/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <ssalaues@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:05:46 by ssalaues          #+#    #+#             */
/*   Updated: 2017/07/04 12:07:45 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.class.hpp"

static char	str[256];

Book::Book( void ) 
{
	return ;
}

void Book::fName( int flag )
{
	if (flag == 2)
	{
		if (this->_firstname.length() > 9)
			std::cout << std::setw(10) << std::setprecision(9) << this->_firstname.append(".");
		std::cout << std::setw(10);
	}
	else if (flag == 1)
		std::cout << this->_firstname;
	else
	{
		std::cout << "First Name: \n";
		std::cin.getline(str, 256);
		this->_firstname.assign(str);
	}
}

void Book::lName( int flag )
{
	else if (flag == 1)
		std::cout << this->_lastname;
	else
	{
		std::cout << "Last Name: \n";
		std::cin.getline(str, 256);
		this->_lastname.assign(str);
	}
}

void Book::nName( int flag )
{
	else if (flag == 1)
		std::cout << this->_nickname;
	else
	{
		std::cout << "Nick Name: \n";
		std::cin.getline(str, 256);
		this->_nickname.assign(str);
	}
}

void Book::Login( int flag )
{
	else if (flag == 1)
		std::cout << this->_login;
	else
	{
		std::cout << "Login: \n";
		std::cin.getline(str, 256);
		this->_login.assign(str);
	}
}

void Book::pAddr( int flag )
{
	else if (flag == 1)
		std::cout << this->_postal;
	else
	{
		std::cout << "Address: \n";
		std::cin.getline(str, 256);
		this->_postal.assign(str);
	}
}

void Book::Email( int flag )
{
	else if (flag == 1)
		std::cout << this->_email;
	else
	{
		std::cout << "Email: \n";
		std::cin.getline(str, 256);
		this->_email.assign(str);
	}
}


void Book::pNumb( int flag )
{
	else if (flag == 1)
		std::cout << this->_phone;
	else
	{
		std::cout << "Phone: \n";
		std::cin.getline(str, 256);
		this->_phone.assign(str);
	}
}

void Book::bDay( int flag )
{
	else if (flag == 1)
		std::cout << this->_birthday;
	else
	{
		std::cout << "Birthday: \n";
		std::cin.getline(str, 256);
		this->_birthday.assign(str);
	}
}

void Book::fMeal( int flag )
{
	else if (flag == 1)
		std::cout << this->_favorite;
	else
	{
		std::cout << "Favorite Meal: \n";
		std::cin.getline(str, 256);
		this->_favorite.assign(str);
	}
}

void Book::uColor( int flag )
{
	else if (flag == 1)
		std::cout << this->_underwear;
	else
	{
		std::cout << "Underwear Color: \n";
		std::cin.getline(str, 256);
		this->_underwear.assign(str);
	}
}

void Book::dSecret( int flag )
{
	else if (flag == 1)
		std::cout << this->_darkest;
	else
	{
		std::cout << "Darkest Secret: \n";
		std::cin.getline(str, 256);
		this->_darkest.assign(str);
	}
}

Book::~Book( void )
{
	std::cout << "Didnt need em anyway" << std::endl;
	return ;
}
