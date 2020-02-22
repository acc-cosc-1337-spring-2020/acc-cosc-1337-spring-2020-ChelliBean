//write include statements
#include<iostream>
#include "dna.h"
#include <string>
//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int starter;
	
	int choice;

	do
	{
		cout << "Enter 1 for GC content or 2 for DNA complement: ";
		cin >> starter;

		if (starter == 1)
		{
			string dna1;

			cout << "Enter a DNA sequence: ";
			cin >> dna1;

			get_gc_content(dna1);

			double gcContent = get_gc_content(dna1);

			cout << "Content of G's and C's is:  " << gcContent;
		}
		else if (starter == 2)
		{
			string dna2;

			cout << "Enter a DNA sequence: ";
			cin >> dna2;

			get_dna_complement(dna2);

			string dnaComp = get_dna_complement(dna2);

			cout << "DNA complement is:  " << dnaComp;
		}
		else
		{
			cout << "Invalid entry";
		}

		cout << "Type 1 to continue...";
		cin >> choice;

	} while (choice == 1);

	return 0;
}