#include "Account.h"

#include <iostream>

int main()
{
	Account account1{ "John Green" };
	Account account2{ "John Blue", 50 };
	Account account3{ "John Red", -7 };

	std::cout << "Initial account name is: " << account1.getName();

	std::cout << "\nPlease enter the account name: ";
	std::string theName;
	std::getline(std::cin, theName);
	account1.setName(theName);

	std::cout << "Name in object account1 is: " << account1.getName() << std::endl;

	std::cout << "\n\nEnter deposit amount for account1: ";
	int depositAmount;
	std::cin >> depositAmount;
	std::cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount);

	std::cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	std::cout << "\n\naccount2: " << account2.getName() << " balance is $"
		<< account2.getBalance();
	std::cout << "\n\naccount3: " << account3.getName() << " balance is $"
		<< account3.getBalance();

	std::cout << "\n\nEnter deposit amount for account2: ";
	std::cin >> depositAmount;
	std::cout << "adding " << depositAmount << " to account2 balance";
	account2.deposit(depositAmount);
	

	return 0;
}