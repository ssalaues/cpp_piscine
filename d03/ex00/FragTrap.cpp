#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : _pName("FR4G-TP"),
										_hp(100),
										_maxHP(100),
										_maxEnergy(100),
										_lvl(1);
										_meleeDmg(30),
										_rangeDmg(20),
										_armorRed(5)
{
	std::srand(std::time(NULL));
	std::cout << "In enters " << pName << "...\n";
	this->_spawnNote();
	return ;	
}

FragTrap::FragTrap(std::string pName) : _pName(pName),
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
	std::cout << "In enters " << pName << "...\n";
	this->_spawnNote();
	return ;
}
void	rangedAttack(std::string const & target)
{
	
}

void	meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP Take that!" << target << "\n";
}

void	takeDamage(unsigned int amount)
{
		
}

void	beRepaired(unsigned int amount)
{
	
}

void	vault_hunter_dot_exe(std::string const & target)
{
	
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
