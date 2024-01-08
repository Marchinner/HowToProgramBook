#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account
{
public:
	Account();
	explicit Account(const std::string& accountName);
	Account(const std::string& accountName, int initialBalance);

	void deposit(int ammount);
	void withdraw(int ammount);
	int getBalance() const;
	
private:
	std::string m_name;
	int			m_balance;
};

#endif // !ACCOUNT_H
