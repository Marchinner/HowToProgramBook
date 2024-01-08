#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
public:
	Account();
	// constructor is 'explicit' becouse admits a single parameter
	explicit Account(const std::string& accountName);
	Account(const std::string& account, int balance);


	void setName(const std::string& accountName);
	std::string getName() const;

	void deposit(int depositAmount);
	int getBalance() const;



private:
	std::string m_name;
	int			m_balance;
};

#endif // !ACCOUNT_H
