/*=============================================================================
 * Project: Serena, my love!
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Salim Salaues
 * ==========================================================================*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int main()
{
	FragTrap bob("Bob");
	FragTrap freddy("Freddy");
	FragTrap grewa = freddy;

	bob.rangedAttack("Freddy");
	bob.meleeAttack("Freddy");
	bob.sneakAttack("Freddy");
	bob.grenadeAttack("Freddy");
	bob.berserkAttack("Freddy");

	bob.takeDamage(40);
	bob.beRepaired(35);
	bob.beEnergized(10);

	bob.vaulthunter_dot_exe("Freddy");

	ScavTrap humi("humi");
	ScavTrap Gina("Gina");
	ScavTrap Pire = Gina;

	humi.rangedAttack("Gina");
	humi.meleeAttack("Gina");

	humi.takeDamage(40);
	humi.beRepaired(35);
	humi.beEnergized(10);

	humi.challengeNewcomer("Gina");

	return (0);
}