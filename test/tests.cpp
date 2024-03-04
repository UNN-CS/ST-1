// Copyright 2024 Kutarin Alexandr
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, SmallValues) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_TRUE(checkPrime(5));
}

TEST(NPrimeTest, SmallValues) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
}

TEST(NextPrimeTest, SmallValues) {
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(3), 5);
  EXPECT_EQ(nextPrime(5), 7);
  EXPECT_EQ(nextPrime(7), 11);
}

TEST(SumPrimeTest, SmallValues) {
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(20), 77);
}
