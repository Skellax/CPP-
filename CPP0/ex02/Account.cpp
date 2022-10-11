/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:21:11 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/16 07:30:48 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;




/* ----Constructor---- */

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    static int i(0);
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = i;

    _displayTimestamp();
    std::cout << "index:" << i++ << " ammount:" << initial_deposit << " created !" << std::endl;
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    
}

/* ----Destructor---- */

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << "ammount:" << _amount << "  closed !"<< std::endl;
    _nbAccounts -= 1;
}

/* ----Fonctions---- */

 int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

 int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

 int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

 int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::checkAmount(void) const 
{
    return (Account::_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount \
     << ";deposits:" <<  _nbDeposits \
    << ";withdrawls:" << _nbWithdrawals << std::endl;
    
}

 void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" \
     << _totalNbDeposits \
    << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    int res = _amount;
    res += deposit;
    _totalAmount += deposit;
    _nbDeposits = 1;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" \
     << _amount << ";deposit:" << deposit \
    << ";amount:" << res << ";nb_deposits:" << _nbDeposits << std::endl;

    _amount = res;
}

bool Account::makeWithdrawal(int withdrawal)
{
    int res = _amount;

    if (_amount < withdrawal)
    {
        _nbWithdrawals = 0;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_anount:" << _amount << ";withdrawal:refused" \
         << std::endl;
        return false;
    }
    else 
    {
        res -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals = 1;
        _totalNbWithdrawals++;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_account:" << _amount << ";witdhrawal:" << withdrawal \
        << ";amount:" << res << ";nb_withdrawals:" << _nbWithdrawals << std::endl;

        _amount = res;
        return true;
    }
}

/* -----Private Functions----- */

 void Account::_displayTimestamp(void)
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer, 80, "%Y%m%d_%H%M%S", timeinfo);
    std::cout << "[" << buffer << "]";
}