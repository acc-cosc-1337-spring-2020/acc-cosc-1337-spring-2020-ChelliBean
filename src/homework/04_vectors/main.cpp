#include "vectors.h"
#include<iostream>
#include<vector>

using std::cout; using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main()
{
	std::vector<int>numbers{ 8, 4, 20, 88, 66, 99 };
	int starter;
	int num;

	cout << "Enter 1 for get max or enter 2 for get primes ";
	cin >> starter;

	if (starter == 1)
	{
		get_max_from_vector(numbers);
		cout << get_max_from_vector(numbers);
	}
	else if (starter == 2)
	{
		cout << "Enter a positive number ";
		cin >> num;
		vector_of_primes(num);
	}

	return 0;
}