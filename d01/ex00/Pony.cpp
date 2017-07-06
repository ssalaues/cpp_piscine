#include "Pony.hpp"

Pony::Pony(std::string ponyName, std::string ponyColor, bool majestic)
{
	std::cout << ponyName << " is born\n";
	this->_ponyName = ponyName;
	this->_ponyColor = ponyColor;
	this->_majestic = majestic;
	return ;
}

std::string Pony::getName( void )
{
	return this->_ponyName;
}

std::string Pony::getColor( void )
{
	return this->_ponyColor;
}

Pony::~Pony( void )
{
	std::cout << "LONG LIVE " << this->_ponyName << std::endl;
	return ;
}
