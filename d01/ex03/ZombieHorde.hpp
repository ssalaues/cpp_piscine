#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde
{
		public:
				ZombieHorde(int n);
				void	announceHorde( void );
				~ZombieHorde( void );

		private:
				Zombie *_zHorde;
				std::string _ww[10];
				int	_n;

				void	_startHorde(int n);
				void	_zNames( void );
				void	_randomChump(Zombie *z);
};

#endif
