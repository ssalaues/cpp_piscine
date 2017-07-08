/*=============================================================================
 * Project: Serena, my love!
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Salim Salaues
 * ==========================================================================*/

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class ScavTrap {
	public:
		int rangedAttack(std::string const & target);
		int meleeAttack(std::string const & target);
		int paperRockScissorsChallenge(std::string const & target);
		int chubbyBunnyChallenge(std::string const & target);
		int breakDanceChallenge(std::string const & target);

		bool takeDamage(unsigned int amount);
		bool beRepaired(unsigned int amount);
		bool beEnergized(unsigned int amount);
		void levelUp(void);

		int challengeNewcomer(std::string const & target);


		ScavTrap & operator=(ScavTrap const & rhs); //canonical

		ScavTrap(std::string name); //Canonical
		ScavTrap(ScavTrap const & src); //canonical
		ScavTrap(void); //Canonical
		~ScavTrap(void); //Canonical
	private:
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _paperRockScissorsDamage;
		unsigned int _chubbyBunnyDamage;
		unsigned int _breakDanceDamage;
		unsigned int _armorDamageReduction;
		std::string _name;
};

#endif