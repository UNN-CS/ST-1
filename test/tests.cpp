// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// checkPrime tests
TEST(st1, checkPrime_smallPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
}

TEST(st1, checkPrime_nonPrimes) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(9));
}

TEST(st1, checkPrime_largePrime) {
  EXPECT_TRUE(checkPrime(97));
}

// nPrime tests
TEST(st1, nPrime_firstFew) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
  EXPECT_EQ(nPrime(5), 11);
}

TEST(st1, nPrime_tenth) {
  EXPECT_EQ(nPrime(10), 29);
}

// nextPrime tests
TEST(st1, nextPrime_afterComposite) {
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(10), 11);
}

TEST(st1, nextPrime_afterPrime) {
  EXPECT_EQ(nextPrime(11), 13);
  EXPECT_EQ(nextPrime(2), 3);
}

// sumPrime tests
TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime_empty) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(2), 0);
}

TEST(st1, sumPrime_small) {
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(5), 2 + 3);
  EXPECT_EQ(sumPrime(8), 2 + 3 + 5 + 7);
}
