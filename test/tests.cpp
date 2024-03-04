// Copyright 2024 Nikolay Kochetov
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeTest, CheckPrimeWithPrimeNumber) {
  uint64_t primeNumber = 17;
  EXPECT_TRUE(checkPrime(primeNumber));
}


TEST(PrimeTest, CheckPrimeWithCompositeNumber) {
  uint64_t compositeNumber = 15;
  EXPECT_FALSE(checkPrime(compositeNumber));
}


TEST(PrimeTest, NthPrimeNumber) {
  uint64_t n = 6;
  uint64_t expected = 13;
  EXPECT_EQ(expected, nPrime(n));
}


TEST(PrimeTest, NextPrimeNumber) {
  uint64_t value = 20;
  uint64_t expected = 23;
  EXPECT_EQ(expected, nextPrime(value));
}


TEST(PrimeTest, SumOfPrimeNumbers) {
  uint64_t hbound = 20;
  uint64_t expectedSum = 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19;
  EXPECT_EQ(expectedSum, sumPrime(hbound));
}
