#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
	public:
			Pony(std::string ponyName, std::string ponyColor, bool majestic);
			std::string	getName( void );
			std::string	getColor( void );
			~Pony( void );

	private:
			std::string 	_ponyName;
			std::string 	_ponyColor;
			bool			_majestic;
};

#endif
