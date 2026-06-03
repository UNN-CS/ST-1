// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, sumPrime1) {
  EXPECT_EQ(142913828922ULL, sumPrime(2000000));
}
TEST(st1, sumPrime2) {
  EXPECT_EQ(17ULL, sumPrime(10));
}

TEST(checkPrime, smallValues) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_FALSE(checkPrime(4));
}

TEST(checkPrime, prime97) {
  EXPECT_TRUE(checkPrime(97));
}

TEST(checkPrime, composite21) {
  EXPECT_FALSE(checkPrime(21));
}

TEST(nPrime, basicCases) {
  EXPECT_EQ(0ULL, nPrime(0));
  EXPECT_EQ(2ULL, nPrime(1));
  EXPECT_EQ(11ULL, nPrime(5));
  EXPECT_EQ(29ULL, nPrime(10));
}

TEST(nPrime, hundredth) {
  EXPECT_EQ(541ULL, nPrime(100));
}

TEST(nextPrime, afterNonPrime) {
  EXPECT_EQ(5ULL, nextPrime(4));
  EXPECT_EQ(11ULL, nextPrime(10));
}

TEST(nextPrime, afterPrime) {
  EXPECT_EQ(3ULL, nextPrime(2));
  EXPECT_EQ(13ULL, nextPrime(11));
}

TEST(sumPrime, edgeCases) {
  EXPECT_EQ(0ULL, sumPrime(2));
  EXPECT_EQ(2ULL, sumPrime(3));
}

TEST(sumPrime, larger) {
  EXPECT_EQ(129ULL, sumPrime(30));
  EXPECT_EQ(1060ULL, sumPrime(100));
}
