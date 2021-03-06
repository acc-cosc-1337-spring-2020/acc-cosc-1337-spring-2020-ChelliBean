#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"


using std::unique_ptr; using std::make_unique;



TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount constructor")
{
	BankAccount account(500);

	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test Bank account deposit")
{
	BankAccount account(500);

	REQUIRE(account.get_balance() == 500);

	account.deposit(50);
	REQUIRE(account.get_balance() == 550);

	REQUIRE_THROWS_AS(account.deposit(-50), Invalid);
	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("Test BankAccount withdraw")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 450);

	REQUIRE_THROWS_AS(account.withdraw(-1), Invalid);
	REQUIRE(account.get_balance() == 450);

	REQUIRE_THROWS_AS(account.withdraw(451), Invalid);
	REQUIRE(account.get_balance() == 450);
}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE 
}


TEST_CASE("Test CheckingAcount constructor")
{
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 512);

}

TEST_CASE("Test CheckingAccount get balance")
{
	CheckingAccount account(150);
	REQUIRE(account.get_balance() == 153);

}