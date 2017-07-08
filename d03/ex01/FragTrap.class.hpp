/*=============================================================================
 * Project: Aaaaaaand ... OPEN!
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class FragTrap {
	public:
		int rangedAttack(std::string const & target);
		int meleeAttack(std::string const & target);
		int sneakAttack(std::string const & target);
		int grenadeAttack(std::string const & target);
		int berserkAttack(std::string const & target);

		bool takeDamage(unsigned int amount);
		bool beRepaired(unsigned int amount);
		bool beEnergized(unsigned int amount);
		void levelUp(void);

		int vaulthunter_dot_exe(std::string const & target);


		FragTrap & operator=(FragTrap const & rhs); //canonical

		FragTrap(std::string name); //Canonical
		FragTrap(FragTrap const & src); //canonical
		FragTrap(void); //Canonical
		~FragTrap(void); //Canonical
	private:
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _sneakAttackDamage;
		unsigned int _grenadeAttackDamage;
		unsigned int _berserkAttackDamage;
		unsigned int _armorDamageReduction;
		std::string _name;
};

#endif