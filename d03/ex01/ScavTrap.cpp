/*=============================================================================
 * Project: Serena, my love!
 *
 * Program: Creates a SC4V-TP assault robot class for game
 *
 * Author: Salim Salaues
 * ==========================================================================*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"

int ScavTrap::rangedAttack(std::string const & target)
{
	this->_hitPoints -= this->_rangedAttackDamage;
	std::cout << "SC4V-TP " << this->_name << " snipes " << target
		<< ", causing " << this->_rangedAttackDamage << " hit point damage!"
		<< std::endl;
	return (this->_rangedAttackDamage);
}

int  ScavTrap::meleeAttack(std::string const & target)
{
	this->_hitPoints -= this->_meleeAttackDamage;
	std::cout << "SC4V-TP " << this->_name << " close range smacks " << target
		<< ", causing " << this->_meleeAttackDamage << " hit point damage!"
		<< std::endl;
	return (this->_meleeAttackDamage);
}

int ScavTrap::paperRockScissorsChallenge(std::string const & target)
{
	this->_hitPoints -= this->_paperRockScissorsDamage;
	std::cout << "SC4V-TP " << this->_name << " challenges " << target
		<< ", to rock paper scissors and dominates by choosing paper causing "
		<< this->_paperRockScissorsDamage << " hit point damage!"
		<< std::endl;
	return (this->_paperRockScissorsDamage);
}

int ScavTrap::chubbyBunnyChallenge(std::string const & target)
{
	this->_hitPoints -= this->_chubbyBunnyDamage;
	std::cout << "SC4V-TP " << this->_name << " challenges " << target
		<< ", to the chubby bunny. Unable to speak winning by 42 marshmallows causes "
		<< this->_chubbyBunnyDamage << " hit point damage!"
		<< std::endl;
	return (this->_chubbyBunnyDamage);
}

int ScavTrap::breakDanceChallenge(std::string const & target)
{
	this->_hitPoints -= this->_breakDanceDamage;
	std::cout << "SC4V-TP " << this->_name << " challenges " << target
		<< ", to a break dancing battle. All the head spinning caused "
		<< this->_breakDanceDamage << " hit point damage!"
		<< std::endl;
	return (this->_breakDanceDamage);
}

bool ScavTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount + this->_armorDamageReduction;
	std::cout << "SC4V-TP " << this->_name << " loses " << amount
		<< " hit points!" << std::endl;
	return (this->_hitPoints > 0) ? (true) : (false);
}

bool ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints + amount <= this->_maxHitPoints)
	{
		std::cout << "SC4V-TP " << this->_name << " has been healed " << amount
			<< " hit points!" << std::endl;
		return (true);
	}
	return (false);
}

bool ScavTrap::beEnergized(unsigned int amount)
{
	if (this->_energyPoints + amount <= this->_maxEnergyPoints)
	{
		this->_energyPoints += amount;
		return (true);
	}
	return (false);
}

void ScavTrap::levelUp(void)
{
	this->_level += 1;
}

int ScavTrap::challengeNewcomer(std::string const & target)
{
	int (ScavTrap::*ScavChallengeFn[3])(std::string const & target) =
		{ &ScavTrap::paperRockScissorsChallenge, &ScavTrap::chubbyBunnyChallenge,
			&ScavTrap::breakDanceChallenge};

	if (this->_energyPoints >= 15)
	{
		int rand = std::rand() % 3;
		this->_energyPoints -= 15;
		return ((this->*ScavChallengeFn[rand])(target));
	}
	else
		std::cout << this->_name << " is low on energy!" << std::endl;
	return (0);
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	srand(time(NULL));
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_paperRockScissorsDamage = rhs._paperRockScissorsDamage;
	this->_chubbyBunnyDamage = rhs._chubbyBunnyDamage;
	this->_breakDanceDamage = rhs._breakDanceDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	this->_name = rhs._name;
	std::cout << "ScavTrap " << rhs._name << " is analyzing..."
		<< " -- has been booted up." << std::endl;
	return *this;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	srand(time(NULL));
	*this = src;
	std::cout << "ScavTrap " << this->_name
		<< " -- has been booted up." << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
	_energyPoints(50), _maxEnergyPoints(50), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _paperRockScissorsDamage(5),
	_chubbyBunnyDamage(20), _breakDanceDamage(30), _armorDamageReduction(3),
	_name(name)
{
	srand(time(NULL));
	std::cout << "ScavTrap " << this->_name
		<< " -- has been booted up." << std::endl;
	return;
}

ScavTrap::ScavTrap(void) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
	_maxEnergyPoints(50), _level(1), _meleeAttackDamage(20),
	_rangedAttackDamage(15), _paperRockScissorsDamage(5), _chubbyBunnyDamage(20), 
	_breakDanceDamage(30), _armorDamageReduction(3), _name("ScavTrap")
{
	srand(time(NULL));
	std::cout << "ScavTrap -- has been booted up." << std::endl;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Oh darn, oh boy, oh crap, oh boy, oh darn. " << this->_name
		<< " has been overloaded..." << std::endl; 
	return;
}