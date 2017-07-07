#include "ZombieEvent.hpp"
#include <string>
#include <iostream>

ZombieEvent::ZombieEvent( void )
{
	std::srand(std::time(NULL));
	ZombieEvent::_zNames();
	std::cout << "\nLet the games begin (NEW EVENT)\n";
	return ;
}

ZombieEvent::ZombieEvent(std::string zType) : _zType(zType)
{
	std::cout << "New type " << this->_zType << "\n";
	return ;
}

void	ZombieEvent::_zNames( void )
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

void	ZombieEvent::setZombieType(std::string zType)
{
	this->_zType = zType;
}

Zombie	*ZombieEvent::randomChump( void )
{
	int	chump = rand() % 10;
	Zombie	*nZ = new Zombie(_ww[chump], this->_zType);

	return (nZ);
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *nZ = new Zombie(name, this->_zType);
	return (nZ);
}


ZombieEvent::~ZombieEvent( void )
{
	std::cout << "\nGAME OVER\n";
	return ; 
}
