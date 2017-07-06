#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
			Zombie( void );
			void	announce();
			~Zombie( void );

	private:
			std::string	_zName;
			std::string	_zType;
}

class ZombieEvent
{
	public:
			ZombieEvent( void );
			void	setZombieType();
			Zombie	*newZombie(std::string name);
			~ZombieEvent( void );
};
#endif
