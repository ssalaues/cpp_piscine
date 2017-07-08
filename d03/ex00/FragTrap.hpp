#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
{
	public:
			FragTrap::FragTrap(std::string pName);
			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			void	vault_hunter_dot_exe(std::string const & target);
			FragTrap::~FragTrap( void );

	private:
			unsigned int	_hp;
			unsigned int	_maxHP;
			unsigned int	_energy;
			unsigned int	_maxEnergy;
			unsigned int	_lvl;
			unsigned int	_meleeDmg;
			unsigned int	_rangeDmg;
			unsigned int	_armorRed;
			std::string		_pName;
			std::string		_death[10];
			std::string		_spawn[10];
		/*	std::string		_melee[10];
			std::string		_tkdmg[10];
			std::string		_brepr[10];
			std::string		_vdexe[10];*/

			void	_deathNote( void );
			void	_spawnNote( void );
			void	_dialogue( void );
			
};
