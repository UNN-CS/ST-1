// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(CheckPrimeTest, HandlesSmallNumbers) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_TRUE(checkPrime(13));
  EXPECT_TRUE(checkPrime(97));
}

TEST(CheckPrimeTest, HandlesLargePrime) {
  EXPECT_TRUE(checkPrime(7919));
}

TEST(CheckPrimeTest, HandlesLargeComposite) {
  EXPECT_FALSE(checkPrime(8000));
}

TEST(NPrimeTest, FirstTenPrimes) {
  uint64_t primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  for (uint64_t i = 0; i < 10; ++i) {
    EXPECT_EQ(nPrime(i + 1), primes[i]);
  }
}

TEST(NPrimeTest, LargerValues) {
  EXPECT_EQ(nPrime(20), 71);
  EXPECT_EQ(nPrime(100), 541);
  EXPECT_EQ(nPrime(500), 3571);
  EXPECT_EQ(nPrime(1000), 7919);
}

TEST(NextPrimeTest, SmallNumbers) {
  EXPECT_EQ(nextPrime(0), 2);
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(3), 5);
  EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, LargeNumber) {
  EXPECT_EQ(nextPrime(7919), 7927);
}

TEST(SumPrimeTest, SumMidRangeValues) {
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(20), 77);
  EXPECT_EQ(sumPrime(30), 129);
  EXPECT_EQ(sumPrime(100), 1060);
  EXPECT_EQ(sumPrime(200), 4227);
  EXPECT_EQ(sumPrime(500), 21536);
  EXPECT_EQ(sumPrime(1000), 76127);
  EXPECT_EQ(sumPrime(2000000), 142913828922);
}

TEST(EdgeCaseTest, HandlesSinglePrime) {
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(nPrime(1), 2);
}

TEST(EdgeCaseTest, HandlesLargeNextPrime) {
  EXPECT_EQ(nextPrime(10000), 10007);
  EXPECT_EQ(nextPrime(50000), 50021);
}
