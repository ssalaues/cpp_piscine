#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent	e1 = ZombieEvent();
	e1.setZombieType("Intergalactic");
	Zombie	*z1 = e1.newZombie("Rick");
	z1->announce();
	delete z1;

	std::cout << "\n";
	Zombie	*z3 = e1.randomChump();
	z3->announce();
	delete z3;

	ZombieEvent e2 = ZombieEvent();
	e2.setZombieType("Earth Bound");
	Zombie	*z2 = e2.newZombie("Morty");
	z2->announce();
	delete z2;
}
