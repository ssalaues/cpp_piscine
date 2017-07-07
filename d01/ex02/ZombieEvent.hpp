#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <string>
#include <iostream>

class ZombieEvent
{
	public:
			ZombieEvent( void );
			ZombieEvent(std::string zType);
			void	setZombieType(std::string zType);
			Zombie	*randomChump( void );
			Zombie	*newZombie(std::string name);
			~ZombieEvent( void );

	private:
			std::string	_ww[7];
			std::string	_zType;

			void	zNames( void );
};
#endif
