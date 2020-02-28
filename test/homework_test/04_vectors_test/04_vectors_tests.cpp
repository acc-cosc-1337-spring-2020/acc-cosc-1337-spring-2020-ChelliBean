#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify max")
{
	std::vector<int>numbers{ 8, 4, 20, 88, 66, 99 };
	get_max_from_vector(numbers);
	REQUIRE(get_max_from_vector(numbers) == 88);
}

TEST_CASE("Verify primes")
{
	std::vector<int>primes1{2, 3};
	std::vector<int>primes2{2, 3, 5, 7 };
	std::vector<int>primes3{2, 3, 5, 7, 11, 13 };

	REQUIRE(vector_of_primes(5) == primes1);
	REQUIRE(vector_of_primes(9) == primes2);
	REQUIRE(vector_of_primes(14) == primes3);
}

TEST_CASE("Verify is prime")
{
	REQUIRE(is_prime(7) == true);
	REQUIRE(is_prime(10) == false);
	REQUIRE(is_prime(-7) == false);
}