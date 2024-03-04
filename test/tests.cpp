// Copyright 2024 Novostroev Ivan
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(TestTest, CheckPrimeWithTestTestNumber) {
  uint64_t primeNumber = 17;
  EXPECT_TRUE(checkPrime(primeNumber));
}


TEST(TestTest, CheckTestTestWithCompositeNumber) {
  uint64_t compositeNumber = 15;
  EXPECT_FALSE(checkPrime(compositeNumber));
}


TEST(TestTest, NthTestTestNumber) {
  uint64_t n = 6;
  uint64_t expected = 13;
  EXPECT_EQ(expected, nPrime(n));
}


TEST(TestTest, NextTestTestNumber) {
  uint64_t value = 20;
  uint64_t expected = 23;
  EXPECT_EQ(expected, nextPrime(value));
}


TEST(TestTest, SumOfTestTestNumbers) {
  uint64_t hbound = 20;
  uint64_t expectedSum = 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19;
  EXPECT_EQ(expectedSum, sumPrime(hbound));
}
