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

class Book
{
	public:

		Book( void );
		std::string		fName( bool b );
		std::string		lName( bool b );
		std::string		nName( bool b );
		std::string		Login( bool b );
		std::string		pAddr( bool b );
		std::string		Email( bool b ):
		std::string		pNumb( bool b );
		std::string		bDay( bool b );
		std::string		fMeal( bool b );
		std::string		uColor( bool b );
		std::string		dSecret( bool b );
		~Book( void );

	private:
		
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickName;
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
