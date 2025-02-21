// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(CheckPrimeTest, PrimeNumbers) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrimeTest, NonPrimeNumbers) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(9));
}

TEST(NthPrimeTest, FirstPrime) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(NthPrimeTest, SecondPrime) {
  EXPECT_EQ(nPrime(2), 3);
}

TEST(NthPrimeTest, TenthPrime) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(NextPrimeTest, After2) {
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(NextPrimeTest, After14) {
  EXPECT_EQ(nextPrime(14), 17);
}

TEST(NextPrimeTest, After17) {
  EXPECT_EQ(nextPrime(17), 19);
}

TEST(SumPrimeTest, SumBelow10) {
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, SumBelow20) {
  EXPECT_EQ(sumPrime(20), 77);
}

