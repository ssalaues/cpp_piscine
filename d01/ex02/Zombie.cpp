#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

void	announce( void )
{
	std::cout << this->_zName << " " << this_zType << " brraaaiiiinsssssss";
}

Zombie::~Zombie( void )
{
	return ;
}
