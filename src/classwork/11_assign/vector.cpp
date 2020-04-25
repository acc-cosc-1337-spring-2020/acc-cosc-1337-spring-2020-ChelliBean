#include "vector.h"
/*
Initialize nums to size dynamic array.
Intialize each array element to 0.
*/
Vector::Vector(size_t sz)
	:size{sz}, nums{new int[sz]}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

/*
copy v. size to new class
create new dyanamic memory array
initialize array eleents to the v.nums array
*/
Vector::Vector(const Vector & v)
	:size{v.size}, nums{new int [v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i]; 
	}
}