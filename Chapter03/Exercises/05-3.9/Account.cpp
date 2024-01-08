#include "Account.h"

Account::Account() :
	m_name{ },
	m_balance{ 0 }
{
}

Account::Account(const std::string& accountName) :
	m_name{ accountName },
	m_balance{ 0 }
{
}

Account::Account(const std::string& accountName, int initialBalance) :
	m_name{ accountName },
	m_balance{ 0 }
{
	if (initialBalance > 0)
		m_balance = initialBalance;
}

void Account::deposit(int ammount)
{
	if (ammount > 0)
		m_balance += ammount;
}

void Account::withdraw(int ammount)
{
	if (ammount < m_balance)
	{
		m_balance -= ammount;
	}
	else
	{
		std::cout << "Withdraw amount exceeded account balance." << std::endl;
	}
}

int Account::getBalance() const
{
	return m_balance;
}
