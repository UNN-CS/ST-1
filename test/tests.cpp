// Copyright 2024 Musaev Ilgar
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeTest, CheckPrimeWithPrimeNumber) {
  EXPECT_TRUE(checkPrime(13));
}


TEST(PrimeTest, CheckPrimeWithCompositeNumber) {
  EXPECT_FALSE(checkPrime(20));
}


TEST(PrimeTest, NthPrimeNumber) {
  EXPECT_EQ(13, nPrime(6));
}


TEST(PrimeTest, NextPrimeNumber) {
  EXPECT_EQ(5, nextPrime(3));
}


TEST(PrimeTest, SumOfPrimeNumbers) {
  uint64_t hBound = 19;
  uint64_t sum = 2 + 3 + 5 + 7 + 11 + 13 + 17;
  EXPECT_EQ(sum, sumPrime(hBound));
}
