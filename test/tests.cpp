// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(SumPrimeTest, LargeSum) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(SumPrimeTest, SmallSum) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(CheckPrimeTest, TrueForPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
}

TEST(CheckPrimeTest, FalseForComposites) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(15));
}

TEST(CheckPrimeTest, BoundaryCases) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, LargePrime) {
  EXPECT_TRUE(checkPrime(9973));
}

TEST(CheckPrimeTest, LargeComposite) {
  EXPECT_FALSE(checkPrime(10000));
}

TEST(NPrimeTest, FirstFewPrimes) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, HundredthPrime) {
  EXPECT_EQ(nPrime(100), 541);
}

TEST(NextPrimeTest, BasicCases) {
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, AfterLargeNumber) {
  EXPECT_EQ(nextPrime(10000), 10007);
}

TEST(SumPrimeTest, EdgeCases) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(7), 10);
}
