/*=============================================================================
 * Project: Aaaaaaand ... OPEN!
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Salim Salaues
 * ==========================================================================*/

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : _name("FR4G-TP"),
										_hp(100),
										_maxHP(100),
										_maxEnergy(100),
										_lvl(1);
										_meleeDmg(30),
										_rangeDmg(20),
										_armorRed(5)
{
	std::srand(std::time(NULL));
	std::cout << "In enters " << this->name << "...\n";
	this->_spawnNote();
	return ;	
}

FragTrap::FragTrap(std::string name) : _name(name),
										_hp(100),
										_maxHP(100),
										_energy(100),
										_maxEnergy(100),
										_lvl(1);
										_meleeDmg(30),
										_rangeDmg(20),
										_armorRed(5)
{
	std::srand(std::time(NULL));
	std::cout << "In enters " << name << "...\n";
	this->_spawnNote();
	return ;
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


int FragTrap::rangedAttack(std::string const & target)
{
	this->_hitPoints -= this->_rangedAttackDamage;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedAttackDamage << " points of damage!"
		<< std::endl;
	return (this->_rangedAttackDamage);
}

int	meleeAttack(std::string const & target)
{
	std::cout << "Take that! " << target << "\n";
	this->_hitPoints -= this->_meleeAttackDamage;
	std::cout << "FR4G-TP " << this->_name << " melee attacks " << target
		<< ", causing " << this->_meleeAttackDamage << " points of damage!"
		<< std::endl;
	return (this->_meleeAttackDamage);
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

void	FragTrap::_dialogue( void )
{
		this->_death[0] = "For you...I commit...seddoku...";
		this->_death[1] = "The robot is dead, long live the robot!";
		this->_death[2] = "Go on without me!";
		this->_death[3] = "Don't forget me!";
		this->_death[4] = "I'll die the way I lived: annoying!";
		this->_death[5] = "This could've gone better!";
		this->_death[6] = "I'm leaking!";
		this->_death[7] = "I'm too pretty to die!";
		this->_death[8] = "I have many regrets!";
		this->_death[9] = "I bet your mom could do better!";

		this->_spawn[0] = "Can I just say... yeehaw.";
		this->_spawn[1] = "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!";
		this->_spawn[2] = "You're the wub to my dub!";
		this->_spawn[3] = "So... does this make me your favorite?";
		this->_spawn[4] = "You can thank me later!";
		this->_spawn[5] = "You, me... keeping on... together?";
		this->_spawn[6] = "Boiyoiyoiyoiyoing!";
		this->_spawn[7] = "Some days, you just can't get rid of an obscure pop-culture reference.";
		this->_spawn[8] = "Nobody hurts my friends!";
		this->_spawn[9] = "Wubwubwub. Dubstep dubstep. Wubwubwubwub DROP! Dubstep!";
/*
		this->_melee[0] = "Hyah!";
		this->_melee[1] = "Heyyah!";
		this->_melee[2] = "Take that!";
		this->_melee[3] = "Bop!";
		this->_melee[4] = "Stop me before I kill again, except don't!";
		this->_melee[5] = "Hehehehe, mwaa ha ha ha, MWAA HA HA HA!";
		this->_melee[6] = "Can't touch this!";
		this->_melee[7] = "There is no way this ends badly!";
		this->_melee[8] = "This is why I was built!";
		this->_melee[9] = "You call yourself a badass?";
*/
}

void	FragTrap::_deathNote( void )
{
	int	note = rand() % 10;

	std::cout << this->_death[note]; << endl;
}

void	FragTrap::_spawnNote( void )
{
	int	note = rand() % 10;

	std::cout << this->_spawn[note] << "\n";
}

FragTrap::~FragTrap( void )
{
	this->_deathNote();
	return ;
}
