#include "bank_account.h"
#include "checking_account.h"
#include"savings_account.h"
#include<iostream>
#include<vector>
#include<string>
#include<memory>

using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;

int main()
{
	/*
	//c++ 98
	SavingsAccount*s = new SavingsAccount(500);
	//more lot of code
	delete s;
	s = nullptr;*/

	//c++ 11
	
	unique_ptr<BankAccount> s = make_unique<SavingsAccount> ( 90 );
	unique_ptr<BankAccount> c = make_unique<CheckingAccount> ( 100 );
	
	
	std::vector<unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(s));
	accounst.push_back(std::move(c));

	for (auto &act : accounts)
	{
		cout << act->get_balance() << "\n";
	}

	BankAccount a(100);
	BankAccount account(500);
	
	cin >> account;
	cout << account;
	display_balance(account);

	/*std::vector<BankAccount> accounts{ BankAccount(100), BankAccount(200) };

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}
	*/

	auto balance = account.get_balance();
	cout << "Balance is: " << balance << "\n";

	auto amount{ 0 };
	cout << "Enter deposit amount: \n";
	cin >> amount;

	try
	{
		account.deposit(amount);
		cout << "Balance is: \n" << account.get_balance;
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}

	return 0;
}