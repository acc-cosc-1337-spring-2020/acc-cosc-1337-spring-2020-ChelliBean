//atm.h
#ifndef ATM_H
#define ATM_H
#include "customer.h"

class ATM
{
public:
	ATM(Customer& c) : customer(std::move(c)){}
	friend std::
};