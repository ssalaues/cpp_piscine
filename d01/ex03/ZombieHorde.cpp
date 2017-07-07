#include "ZombieHorde.hpp"

ZombieHorde

void	ZombieHorde::_zNames( void )
{
	_ww[0] = "Carl";
	_ww[1] = "Weird Mike";
	_ww[2] = "Mr. Pickles";
	_ww[3] = "Skitzo";
	_ww[4] = "Galen";
	_ww[5] = "Nuka";
	_ww[6] = "Faceripper";
	_ww[7] = "IRhett";
	_ww[8] = "Mr. Poopy Butthole";
	_ww[9] = "Meseeks";
}

Zombie	*ZombieHorde::_randomChump( void )
{
	int	chump = rand() % 10;
	Zombie	*nZ = new Zombie(_ww[chump], this->_zType);

	return (nZ);
}
