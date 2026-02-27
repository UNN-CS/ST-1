// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(CheckPrime, ZeroAndOneAreNotPrime) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrime, TwoIsPrime) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrime, SmallPrimesArePrime) {
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrime, SmallCompositesAreNotPrime) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(8));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(12));
}

TEST(CheckPrime, PerfectSquareIsNotPrime) {
  EXPECT_FALSE(checkPrime(49));
  EXPECT_FALSE(checkPrime(121));
}

TEST(CheckPrime, LargerPrimeAndComposite) {
  EXPECT_TRUE(checkPrime(97));
  EXPECT_FALSE(checkPrime(100));
}

TEST(NPrime, FirstPrimeIsTwo) {
  EXPECT_EQ(nPrime(1), 2ULL);
}

TEST(NPrime, FirstFivePrimes) {
  EXPECT_EQ(nPrime(1), 2ULL);
  EXPECT_EQ(nPrime(2), 3ULL);
  EXPECT_EQ(nPrime(3), 5ULL);
  EXPECT_EQ(nPrime(4), 7ULL);
  EXPECT_EQ(nPrime(5), 11ULL);
}

TEST(NPrime, TenthPrimeIs29) {
  EXPECT_EQ(nPrime(10), 29ULL);
}

TEST(NextPrime, NextPrimeAfterZeroAndOneIsTwo) {
  EXPECT_EQ(nextPrime(0), 2ULL);
  EXPECT_EQ(nextPrime(1), 2ULL);
}

TEST(NextPrime, NextPrimeDoesNotReturnSamePrime) {
  EXPECT_EQ(nextPrime(2), 3ULL);
  EXPECT_EQ(nextPrime(11), 13ULL);
}

TEST(NextPrime, NextPrimeAfterComposite) {
  EXPECT_EQ(nextPrime(4), 5ULL);
  EXPECT_EQ(nextPrime(14), 17ULL);
}

TEST(SumPrime, BoundsLessThanTwoGiveZero) {
  EXPECT_EQ(sumPrime(0), 0ULL);
  EXPECT_EQ(sumPrime(1), 0ULL);
  EXPECT_EQ(sumPrime(2), 0ULL);
}

TEST(SumPrime, UpTo10Is17) {
  EXPECT_EQ(sumPrime(10), 17ULL);
}

TEST(SumPrime, UpTo20Is77) {
  EXPECT_EQ(sumPrime(20), 77ULL);
}

TEST(SumPrime, ProjectEulerCaseUpTo2M) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922ULL;
  EXPECT_EQ(expected, res);
}
