// Copyright 2025 shvedovav

#include <gtest/gtest.h>
#include <cstdint>
#include <vector>
#include "alg.h"

TEST(SumPrime, SmallRange) {
  EXPECT_EQ(17, sumPrime(10));
}

TEST(SumPrime, MediumRange) {
  EXPECT_EQ(77, sumPrime(20));
}

TEST(SumPrime, LargeRange) {
  EXPECT_EQ(142913828922, sumPrime(2000000));
}

TEST(CheckPrime, Zero) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(CheckPrime, One) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrime, SmallPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
}

TEST(CheckPrime, LargerNumbers) {
  EXPECT_TRUE(checkPrime(17));
  EXPECT_FALSE(checkPrime(18));
  EXPECT_TRUE(checkPrime(7919));
  EXPECT_FALSE(checkPrime(7920));
}

TEST(nPrime, FirstPrime) {
  EXPECT_EQ(2, nPrime(1));
}

TEST(nPrime, SecondPrime) {
  EXPECT_EQ(3, nPrime(2));
}

TEST(nPrime, ThirdPrime) {
  EXPECT_EQ(5, nPrime(3));
}

TEST(nPrime, TenthPrime) {
  EXPECT_EQ(29, nPrime(10));
}

TEST(nPrime, TwentiethPrime) {
  EXPECT_EQ(71, nPrime(20));
}

TEST(nPrime, ThirtiethPrime) {
  EXPECT_EQ(113, nPrime(30));
}

TEST(NextPrime, BelowTwo) {
  EXPECT_EQ(2, nextPrime(0));
}

TEST(NextPrime, One) {
  EXPECT_EQ(2, nextPrime(1));
}

TEST(NextPrime, Two) {
  EXPECT_EQ(3, nextPrime(2));
}

TEST(NextPrime, Fourteen) {
  EXPECT_EQ(17, nextPrime(14));
}

TEST(NextPrime, Seventeen) {
  EXPECT_EQ(19, nextPrime(17));
}

TEST(NextPrime, Hundred) {
  EXPECT_EQ(101, nextPrime(100));
}

TEST(NextPrime, LargeNumber) {
  EXPECT_EQ(1000003, nextPrime(1000000));
}
