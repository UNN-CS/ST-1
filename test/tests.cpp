// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// Tests for checkPrime
TEST(PrimeTest, HandlesNonPrimes) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(15));
}

TEST(PrimeTest, HandlesPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(13));
}

// Tests for nPrime
TEST(NPrimeTest, FirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, FindsCorrectPrimes) {
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(10), 29);
}

// Tests for nextPrime
TEST(NextPrimeTest, FindsNextPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(8), 11);
    EXPECT_EQ(nextPrime(13), 17);
}

TEST(NextPrimeTest, HandlesZeroAndOne) {
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
}

// Tests for sumPrime
TEST(SumPrimeTest, SumUpTo10) {
    EXPECT_EQ(sumPrime(10), 17); // 2 + 3 + 5 + 7 = 17
}

TEST(SumPrimeTest, SumUpTo20) {
    EXPECT_EQ(sumPrime(20), 77); // 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19 = 77
}

TEST(SumPrimeTest, EdgeCaseNoPrimes) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(0), 0);
}

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
