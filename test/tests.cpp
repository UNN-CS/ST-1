// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"



// Тесты для функции checkPrime
TEST(st1, CheckPrimeZero) {
	EXPECT_FALSE(checkPrime(0));
}

TEST(st1, CheckPrimeOne) {
	EXPECT_FALSE(checkPrime(1));
}

TEST(st1, CheckPrimeTwo) {
	EXPECT_TRUE(checkPrime(2));
}

TEST(st1, CheckPrimePerfectSquare) {
	EXPECT_FALSE(checkPrime(121));
}
// Тесты для функции nPrime
TEST(st1, NPrimeFirst) {
	EXPECT_EQ(nPrime(1), 2);
}

TEST(st1, NPrimeFifth) {
	EXPECT_EQ(nPrime(5), 11);
}

TEST(st1, NPrime1000) {
	EXPECT_EQ(nPrime(1000), 7919);
}

// Тесты для функции nextPrime
TEST(st1, NextPrimeFromPrime) {
	EXPECT_EQ(nextPrime(7), 11);
}

TEST(st1, NextPrimeLarge1) {
	EXPECT_EQ(nextPrime(100000), 100003);
}

TEST(st1, SumPrimeUpTo12) {
	EXPECT_EQ(sumPrime(12), 28);
}
// Тесты для функции sumPrimt
TEST(st1, sumPrime1) {
	uint64_t res = sumPrime(2000000);
	uint64_t expected = 142913828922;
	EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
	uint64_t res = sumPrime(10);
	uint64_t expected = 17;
	EXPECT_EQ(expected, res);
}
