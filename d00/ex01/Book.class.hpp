/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <ssalaues@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:02:09 by ssalaues          #+#    #+#             */
/*   Updated: 2017/07/04 16:14:01 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_CLASS_H
# define BOOK_CLASS_H

#include <string>
#include <iostream>
#include <iomanip>

class Book
{
	public:

		Book( void );
		void		fName( int flag );
		void		lName( int flag );
		void		nName( int flag );
		void		Login( int flag );
		void		pAddr( int flag );
		void		Email( int flag );
		void		pNumb( int flag );
		void		bDay( int flag );
		void		fMeal( int flag );
		void		uColor( int flag );
		void		dSecret( int flag );
		~Book( void );

	private:
		
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_login;
		std::string		_postal;
		std::string		_email;
		std::string		_phone;
		std::string		_birthday;
		std::string		_favorite;
		std::string		_underwear;
		std::string		_darkest;	

};

#endif
