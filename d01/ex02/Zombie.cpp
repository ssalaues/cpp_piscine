#include "Zombie.hpp"

Zombie::Zombie(std::string zName, std::string zType) : _zName(zName), _zType(zType)
{
	std::cout << "SPAWINING NEW Z\n";
	return ;
}

void	announce( void ) const
{
	std::cout << this->_zName << " " << this_zType << " brraaaiiiinsssssss\n";
}

Zombie::~Zombie( void )
{
	std::cout << "DEATH TO ZOMBIES\n";
	return ;
}
