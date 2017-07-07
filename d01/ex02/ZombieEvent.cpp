#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
	std::srand(std::time(NULL));
	ZombieEvent::_zNames();
	std::cout << "Let the games begin\n";
	return ;
}

ZombieEvent::ZombieEvent(std::string zType) : _zType(ztype)
{
	std::cout << "New type " << this_zType << "\n";
	return ;
}

void	ZombieEvent::_zNames( void );
{
	_ww[0] = "Carl";
	_ww[1] = "Weird Mike";
	_ww[2] = "Mr. Pickles";
	_ww[3] = "Skitzo";
	_ww[4] = "Galen";
	_ww[5] = "Nuka";
	_ww[6] = "Faceripper";
}

void	ZombieEvent::setZombieType(std::string zType)
{
	this->_zType = zType;
}

Zombie	*ZombieEvent::randomChump( void )
{
	int	chump = rand() % 7;
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
	std::cout << "GAME OVER\n";
	return ; 
}
