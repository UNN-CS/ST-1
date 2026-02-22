// Copyright 2025 UNN-CS

#include <gtest/gtest.h>

#include <cstdint>

#include "alg.h"

TEST(CheckPrimeTest, NonPrimeNumbersLessThanTwo) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, SmallPrimeNumbers) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_TRUE(checkPrime(11));
  EXPECT_TRUE(checkPrime(13));
}

TEST(CheckPrimeTest, SmallNonPrimeNumbers) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(8));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(10));
}

TEST(CheckPrimeTest, EvenNonPrimeNumbers) {
  EXPECT_FALSE(checkPrime(100));
  EXPECT_FALSE(checkPrime(1000));
  EXPECT_FALSE(checkPrime(10000));
}

TEST(CheckPrimeTest, LargePrimeNumbers) {
  EXPECT_TRUE(checkPrime(7919));
  EXPECT_TRUE(checkPrime(104729));
}

TEST(CheckPrimeTest, PerfectSquaresNonPrimeNumbers) {
  EXPECT_FALSE(checkPrime(121));
  EXPECT_FALSE(checkPrime(169));
  EXPECT_FALSE(checkPrime(289));
}

TEST(NPrimeTest, FirstFivePrimeNumbers) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
  EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, TenthPrimeNumber) { EXPECT_EQ(nPrime(10), 29); }

TEST(NPrimeTest, HundredthPrimeNumber) { EXPECT_EQ(nPrime(100), 541); }

TEST(NPrimeTest, ThousandthPrimeNumber) { EXPECT_EQ(nPrime(1000), 7919); }

TEST(NPrimeTest, ThrowsExceptionForZeroPrimeNumber) {
  EXPECT_THROW(nPrime(0), int);
}

TEST(NextPrimeTest, NextPrimeNumberAfrerZero) { EXPECT_EQ(nextPrime(0), 2); }

TEST(NextPrimeTest, NextPrimeNumberAfrerOne) { EXPECT_EQ(nextPrime(1), 2); }

TEST(NextPrimeTest, HandlePrimeNumbers) {
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(3), 5);
  EXPECT_EQ(nextPrime(5), 7);
  EXPECT_EQ(nextPrime(7), 11);
  EXPECT_EQ(nextPrime(11), 13);
}

TEST(NextPrimeTest, HandleLargePrimeNumbers) {
  EXPECT_EQ(nextPrime(1000), 1009);
  EXPECT_EQ(nextPrime(10000), 10007);
}

TEST(SumPrimeTest, HandleSumLessThanTwo) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(1), 0);
  EXPECT_EQ(sumPrime(2), 0);
}

TEST(SumPrimeTest, HandleSmallSum) {
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(4), 5);
  EXPECT_EQ(sumPrime(5), 5);
  EXPECT_EQ(sumPrime(6), 10);
  EXPECT_EQ(sumPrime(7), 10);
  EXPECT_EQ(sumPrime(8), 17);
  EXPECT_EQ(sumPrime(9), 17);
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, HandleLargerSum) {
  EXPECT_EQ(sumPrime(20), 77);
  EXPECT_EQ(sumPrime(30), 129);
}

TEST(SumPrimeTest, HandleSameSum) {
  uint64_t sumUpTo10 = sumPrime(10);
  uint64_t sumUpTo11 = sumPrime(11);

  EXPECT_EQ(sumUpTo10, 17);
  EXPECT_EQ(sumUpTo11, 17);
}

TEST(SumPrimeTest, HandleKnownSums) {
  EXPECT_EQ(sumPrime(100), 1060);
  EXPECT_EQ(sumPrime(200), 4227);
}