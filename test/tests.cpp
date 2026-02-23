// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// sumPrime
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
TEST(st1, sumPrime_bound2_returns0) {
  EXPECT_EQ(0u, sumPrime(2));
}
TEST(st1, sumPrime_bound3_returns2) {
  EXPECT_EQ(2u, sumPrime(3));
}

// checkPrime
TEST(st1, checkPrime_0_not_prime) {
  EXPECT_FALSE(checkPrime(0));
}
TEST(st1, checkPrime_1_not_prime) {
  EXPECT_FALSE(checkPrime(1));
}
TEST(st1, checkPrime_2_is_prime) {
  EXPECT_TRUE(checkPrime(2));
}
TEST(st1, checkPrime_4_not_prime) {
  EXPECT_FALSE(checkPrime(4));
}
TEST(st1, checkPrime_7_is_prime) {
  EXPECT_TRUE(checkPrime(7));
}
TEST(st1, checkPrime_9_not_prime) {
  EXPECT_FALSE(checkPrime(9));
}

// nPrime
TEST(st1, nPrime_1_returns_2) {
  EXPECT_EQ(2u, nPrime(1));
}
TEST(st1, nPrime_2_returns_3) {
  EXPECT_EQ(3u, nPrime(2));
}
TEST(st1, nPrime_3_returns_5) {
  EXPECT_EQ(5u, nPrime(3));
}
TEST(st1, nPrime_10_returns_29) {
  EXPECT_EQ(29u, nPrime(10));
}

// nextPrime
TEST(st1, nextPrime_4_returns_5) {
  EXPECT_EQ(5u, nextPrime(4));
}
TEST(st1, nextPrime_11_returns_13) {
  EXPECT_EQ(13u, nextPrime(11));
}
TEST(st1, nextPrime_2_returns_3) {
  EXPECT_EQ(3u, nextPrime(2));
}
