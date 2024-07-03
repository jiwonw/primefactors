#include "pch.h"
#include "../PrimeFactors/primefactors.cpp"
#include <vector>
using namespace std;


TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
TEST(PrimeFactors, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}
TEST(PrimeFactors, Of3) {
	PrimeFactor prime_factor;
	vector<int> expected = {3};
	EXPECT_EQ(expected, prime_factor.of(3));
}
TEST(PrimeFactors, Of4) {
	PrimeFactor prime_factor;
	vector<int> expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}