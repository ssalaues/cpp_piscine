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
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap Jack("Jack");
	FragTrap freddy("Handsome");
	FragTrap grewa = freddy;

	Jack.rangedAttack("Handsome");
	Jack.meleeAttack("Handsome");
	Jack.sneakAttack("Handsome");
	Jack.grenadeAttack("Handsome");
	Jack.berserkAttack("Handsome");

	Jack.takeDamage(40);
	Jack.beRepaired(35);
	Jack.beEnergized(10);

	Jack.vaulthunter_dot_exe("Handsome");

	ScavTrap Roland("Roland");
	ScavTrap Lilith("Lilith");
	ScavTrap Pire = Lilith;

	Roland.rangedAttack("Lilith");
	Roland.meleeAttack("Lilith");

	Roland.takeDamage(40);
	Roland.beRepaired(35);
	Roland.beEnergized(10);

	Roland.challengeNewcomer("Lilith");

	return (0);
}
