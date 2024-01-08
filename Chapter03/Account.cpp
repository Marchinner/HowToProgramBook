#include "Account.h"

Account::Account() :
	m_name{ },
	m_balance{ 0 }
{
}

Account::Account(const std::string& accountName) :
	m_name{ },
	m_balance{ 0 }
{
}

Account::Account(const std::string& accountName, int balance) :
	m_name{ accountName },
	m_balance{ 0 }
{
	if (balance > 0)
		m_balance = balance;
}

void Account::setName(const std::string& accountName)
{
	m_name = accountName;
}

std::string Account::getName() const
{
	return m_name;
}

void Account::deposit(int depositAmount)
{
	if (depositAmount > 0)
		m_balance += depositAmount;
}

int Account::getBalance() const
{
	return m_balance;
}