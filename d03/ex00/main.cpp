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

	return (0);
}