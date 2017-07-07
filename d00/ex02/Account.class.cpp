#include <iostream>
#include <iomanip>
#include "Account.class.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawls = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccoutns;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawls = 0;

	Account::_totalAmount += this->_amount;
	Account::_nbAccounts += 1;
	Account::_displayTimestamp();
}
