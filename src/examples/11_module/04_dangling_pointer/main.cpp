#include "dangling_pointer.h"
#include<iostream>

using std::cout;

int main() 
{
	int* ptr_num = new int(5);
	int* ptr = ptr_num;

	std::cout << *ptr << "\n";

	delete ptr_num;
	ptr_num = nullptr;

	std::cout << ptr << "\n";


	return 0;
}