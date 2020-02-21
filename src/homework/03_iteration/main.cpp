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
	string dna1;

	cout << "Enter a DNA sequence: ";
	cin >> dna1;

	get_gc_content(dna1);

	return 0;
}