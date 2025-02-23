// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeTest, CheckPrimeBasic) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(4));
}

TEST(PrimeTest, CheckPrimeLarge) {
  EXPECT_TRUE(checkPrime(997));
  EXPECT_FALSE(checkPrime(1000));
}

TEST(PrimeTest, NPrimeBasic) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
}

TEST(PrimeTest, NPrimeLarge) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(PrimeTest, NextPrimeBasic) {
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(5), 7);
  EXPECT_EQ(nextPrime(7), 11);
}

TEST(PrimeTest, NextPrimeLarge) {
  EXPECT_EQ(nextPrime(1000), 1009);
}

// Существующие тесты для sumPrime
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

TEST(PrimeTest, SumPrimeSmall) {
  EXPECT_EQ(sumPrime(5), 5);  // 2 + 3
}

TEST(PrimeTest, SumPrimeMedium) {
  EXPECT_EQ(sumPrime(20), 77);  // 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19
}
