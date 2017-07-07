#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n)
{
	std::srand(std::time(NULL));
	ZombieHorde::_zNames();
	ZombieHorde::_startHorde(n);
	std::cout << "\nLet the games begin (NEW HORDE)\n";
	return ;
}

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

void	ZombieHorde::_startHorde(int n)
{
	_zHorde = new Zombie[n];

	for (int i = 0; i < n; i++)
		ZombieHorde::_randomChump(&(_ww[i]));
}

void	ZombieHorde::announceHorde( void )
{
	for (int i = 0; i < _n; i++)
		_zHorde[i].announce();
}

void	ZombieHorde::_randomChump(Zombie *z)
{
	int	chump = rand() % 10;
	z->newZ(_ww[chump], "Horde");
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] _zHorde;
	std::cout << "\nHorde DEFEATED\n";
}
