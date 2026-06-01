// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeLib, CheckPrime_SmallTrue) {
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(11));
  EXPECT_TRUE(checkPrime(29));
}

TEST(PrimeLib, CheckPrime_SmallFalse) {
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(15));
  EXPECT_FALSE(checkPrime(25));
}

TEST(PrimeLib, CheckPrime_LargePrime) {
  EXPECT_TRUE(checkPrime(1009));
}

TEST(PrimeLib, CheckPrime_LargeComposite) {
  EXPECT_FALSE(checkPrime(1001));
}

TEST(PrimeLib, NPrime_Zero) {
  EXPECT_EQ(0u, nPrime(0));
}

TEST(PrimeLib, NPrime_First) {
  EXPECT_EQ(2u, nPrime(1));
}

TEST(PrimeLib, NPrime_Middle) {
  EXPECT_EQ(11u, nPrime(5));
  EXPECT_EQ(29u, nPrime(10));
}

TEST(PrimeLib, NPrime_Large) {
  EXPECT_EQ(229u, nPrime(50));
}

TEST(PrimeLib, NextPrime_FromZeroOne) {
  EXPECT_EQ(2u, nextPrime(0));
  EXPECT_EQ(2u, nextPrime(1));
}

TEST(PrimeLib, NextPrime_FromPrime) {
  EXPECT_EQ(11u, nextPrime(7));
}

TEST(PrimeLib, NextPrime_FromComposite) {
  EXPECT_EQ(17u, nextPrime(14));
  EXPECT_EQ(97u, nextPrime(89));
}

TEST(PrimeLib, SumPrime_Boundaries) {
  EXPECT_EQ(0u, sumPrime(0));
  EXPECT_EQ(0u, sumPrime(2));
  EXPECT_EQ(2u, sumPrime(3));
}

TEST(PrimeLib, SumPrime_Twenty) {
  EXPECT_EQ(77u, sumPrime(20));
}

TEST(PrimeLib, SumPrime_Fifty) {
  EXPECT_EQ(328u, sumPrime(50));
}

TEST(PrimeLib, SumPrime_FiveHundred) {
  EXPECT_EQ(21536u, sumPrime(500));
}
