#include "dna.h"
#include<iostream>
using std::string;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string & dna1)
{
	double count1 = 0;
	double count2 = 0;
	for (int i = 0; i <= dna1.length(); ++i)
	{
		if (dna1[i] == 'C' || dna1[i] == 'G')
		{
			count1 = count1 + 1;
		}
		else if (dna1[i] == 'A' || dna1[i] == 'T')
		{
			count2 = count2 + 1;
		}
	}
	int total = count1 + count2;
	double gc = count1 / total;

	return gc;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(std::string dna2)
{
	string flipdna;

	flipdna = "";
	
	for(auto i=dna2.length(); i!=0; i--)
	{
		flipdna.push_back(dna2[i-1]);
	}
	return flipdna;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(std::string dna2)
{
	string complement;
	complement = get_reverse_string(dna2);

	for (auto i = 0; i < complement.length(); ++i)
	{
		if(complement[i]=='A')
		{
			complement[i] = 'T';
		}
		else if(complement[i] == 'C')
		{
			complement[i] = 'G';
		}
		else if(complement[i] == 'G')
		{
			complement[i] = 'C';
		}
		else if(complement[i] == 'T')
		{
			complement[i] = 'A';
		}
		else
		{
			return 0;
		}
	}
	

	return complement;
}





