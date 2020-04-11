//atm.cpp
#include "atm.h"

std::ostream & operator<<(std::ostream & out, const ATM & a)
{
	a.customer.display_accounts();

	return out;
}