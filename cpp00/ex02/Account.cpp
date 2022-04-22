/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:03:37 by hardella          #+#    #+#             */
/*   Updated: 2022/04/07 12:24:48 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts(void) { return _nbAccounts; }
int	Account::getTotalAmount(void) { return _totalAmount; }
int	Account::getNbDeposits(void) { return _totalAmount; }
int	Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

Account::Account(int initial_deposit)
{
	_displayTimestamp();

	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account()
{
	_displayTimestamp();
	
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << \
				";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();

	_amount += deposit;
	_nbDeposits++;

	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit \
				<< ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	
}
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;

		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return true;
}

int		Account::checkAmount(void) const
{
	_displayTimestamp();
	std::cout << "check amount" << std::endl;
	return _amount;
	
}

void Account::displayStatus() const {
	_displayTimestamp();
	
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" 
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}



void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}