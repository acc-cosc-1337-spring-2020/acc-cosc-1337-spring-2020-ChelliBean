//customer.h
#ifndef CUSTOMER_H //header guards
#define CUSTOMER_H //use bc errors will occur if you try to use customer more than once
#include<vector>
#include"bank_account.h"

class Customer
{
public:
	void add_account(BankAccount& act);
	void display_accounts()const;

private:
	std::vector<BankAccount> accounts;
};

#endif // !CUSTOMER_H