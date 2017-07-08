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
#include "FragTrap.hpp"

int main()
{
	FragTrap Jack("Jack");
	FragTrap clappy("Clappy");
	FragTrap poopy = clappy;

	Jack.rangedAttack("Handsome");
	Jack.meleeAttack("Handsome");
	Jack.sneakAttack("Handsome");
	Jack.grenadeAttack("Handsome");
	Jack.berserkAttack("Handsome");

	Jack.takeDamage(40);
	Jack.beRepaired(35);
	Jack.beEnergized(10);

	Jack.vaulthunter_dot_exe("Handsome");

	return (0);
}