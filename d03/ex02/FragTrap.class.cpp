/*=============================================================================
 * Project: Aaaaaaand ... OPEN!
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "FragTrap.class.hpp"

int FragTrap::rangedAttack(std::string const & target)
{
	this->_hitPoints -= this->_rangedAttackDamage;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedAttackDamage << " points of damage!"
		<< std::endl;
	return (this->_rangedAttackDamage);
}

int  FragTrap::meleeAttack(std::string const & target)
{
	this->_hitPoints -= this->_meleeAttackDamage;
	std::cout << "FR4G-TP " << this->_name << " melee attacks " << target
		<< ", causing " << this->_meleeAttackDamage << " points of damage!"
		<< std::endl;
	return (this->_meleeAttackDamage);
}

int FragTrap::sneakAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " sneak attacks " << target
		<< ", causing " << this->_sneakAttackDamage << " points of damage!"
		<< std::endl;
	return (this->_sneakAttackDamage);
}

int FragTrap::grenadeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " throws a grenade at "
		<< target << ", causing " << this->_grenadeAttackDamage
		<< " points of damage!" << std::endl;
	return (this->_grenadeAttackDamage);
}

int FragTrap::berserkAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " goes berserk on " << target
		<< ", causing " << this->_berserkAttackDamage << " points of damage!"
		<< std::endl;
	return (this->_berserkAttackDamage);
}

bool FragTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount + this->_armorDamageReduction;
	std::cout << "FR4G-TP " << this->_name << " takes " << amount
		<< " points of damage!" << std::endl;
	return (this->_hitPoints > 0) ? (true) : (false);
}

bool FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints + amount <= this->_maxHitPoints)
	{
		std::cout << "FR4G-TP " << this->_name << " has been repaired " << amount
			<< " hit points!" << std::endl;
		return (true);
	}
	return (false);
}

bool FragTrap::beEnergized(unsigned int amount)
{
	if (this->_energyPoints + amount <= this->_maxEnergyPoints)
	{
		this->_energyPoints += amount;
		return (true);
	}
	return (false);
}

void FragTrap::levelUp(void)
{
	this->_level += 1;
}

int FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int (FragTrap::*FragTrapAttackFn[5])(std::string const & target) =
		{&FragTrap::rangedAttack, &FragTrap::meleeAttack,
			&FragTrap::sneakAttack, &FragTrap::grenadeAttack,
			&FragTrap::berserkAttack};

	if (this->_energyPoints >= 25)
	{
		int rand = std::rand() % 5;
		this->_energyPoints -= 25;
		return ((this->*FragTrapAttackFn[rand])(target));
	}
	else
		std::cout << this->_name << " does not have enough energy!" << std::endl;
	return (0);
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	srand(time(NULL));
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_sneakAttackDamage = rhs._sneakAttackDamage;
	this->_grenadeAttackDamage = rhs._grenadeAttackDamage;
	this->_berserkAttackDamage = rhs._berserkAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	this->_name = rhs._name;
	std::cout << "FragTrap " << rhs._name << " copying data..."
		<< " -- start bootup sequence initialized." << std::endl;
	return *this;
}

FragTrap::FragTrap(FragTrap const & src)
{
	srand(time(NULL));
	*this = src;
	std::cout << "FragTrap " << this->_name
		<< " -- start bootup sequence initialized." << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
	_energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _sneakAttackDamage(10),
	_grenadeAttackDamage(25), _berserkAttackDamage(40), _armorDamageReduction(5),
	_name(name)
{
	srand(time(NULL));
	std::cout << "FragTrap " << this->_name
		<< " -- start bootup sequence initialized." << std::endl;
	return;
}

FragTrap::FragTrap(void) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
	_maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
	_rangedAttackDamage(20), _sneakAttackDamage(10), _grenadeAttackDamage(25), 
	_berserkAttackDamage(40), _armorDamageReduction(5), _name("Claptrap")
{
	srand(time(NULL));
	std::cout << "FragTrap -- start bootup sequence." << std::endl;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Oh darn, oh boy, oh crap, oh boy, oh darn. " << this->_name
		<< " has been overloaded..." << std::endl; 
	return;
}