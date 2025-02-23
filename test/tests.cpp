// Copyright 2025 UNN-CS

#include "alg.h"
#include <gtest/gtest.h>

TEST(CheckPrimeTest, HandlesZeroAndOne) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, HandlesSmallPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
}

TEST(CheckPrimeTest, HandlesSmallComposites) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(8));
  EXPECT_FALSE(checkPrime(9));
}

TEST(CheckPrimeTest, LargePrime) {
  EXPECT_TRUE(checkPrime(9973));
}

TEST(CheckPrimeTest, EvenNumbers) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(100));
}

TEST(NPrimeTest, FindsNthPrime) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(5), 11);
  EXPECT_EQ(nPrime(10), 29);
}

TEST(NextPrimeTest, FindsNextPrime) {
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(11), 13);
  EXPECT_EQ(nextPrime(13), 17);
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(NextPrimeTest, ValueIsComposite) {
  EXPECT_EQ(nextPrime(14), 17);
}

TEST(SumPrimeTest, SumsPrimesBelowHbound) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, HboundOne) {
  EXPECT_EQ(sumPrime(1), 0);
}