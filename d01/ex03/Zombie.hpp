#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
			Zombie(std::string zName, std::string zType);
			void	announce() const;
			void	newZ(std::string name, std::string type);
			~Zombie( void );

	private:
			std::string	_zName;
			std::string	_zType;
};

#endif
