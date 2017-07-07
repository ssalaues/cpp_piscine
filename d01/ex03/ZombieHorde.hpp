#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHoarde
{
		public:
				ZombieHoarde(int n);
				void	announceHoarde( void );
				~ZombieHoarde( void );

				void	announceHoarde();

		private:
				Zombie *_zHoarde;
				std::string *_ww[10];
				int	_n;

				void	_startHoarde(int n);
				void	_zNames( void );
				void	_randomChump(Zombie *z);
};

#endif
