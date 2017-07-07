#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie::Zombie(std::string zName, std::string zType) : _zName(zName), _zType(zType)
{
	std::cout << "SPAWINING NEW Z\n";
	return ;
}

void	Zombie::announce( void ) const
{
	std::cout << this->_zName << " " << this->_zType << " brraaaiiiinsssssss\n";
}

Zombie::~Zombie( void )
{
	std::cout << "DEATH TO ZOMBIES\n";
	return ;
}
