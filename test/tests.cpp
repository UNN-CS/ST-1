// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


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

TEST(st1, checkPrime_returns_false_for_zero) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime_returns_false_for_one) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime_returns_true_for_two) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_returns_false_for_composite) {
  EXPECT_FALSE(checkPrime(21));
}

TEST(st1, checkPrime_returns_true_for_prime) {
  EXPECT_TRUE(checkPrime(97));
}

TEST(st1, nPrime_returns_first_prime_for_one) {
  EXPECT_EQ(2u, nPrime(1));
}

TEST(st1, nPrime_returns_tenth_prime) {
  EXPECT_EQ(29u, nPrime(10));
}

TEST(st1, nPrime_returns_zero_for_zero_index) {
  EXPECT_EQ(0u, nPrime(0));
}

TEST(st1, nextPrime_after_non_prime) {
  EXPECT_EQ(5u, nextPrime(4));
}

TEST(st1, nextPrime_after_prime) {
  EXPECT_EQ(13u, nextPrime(11));
}

TEST(st1, sumPrime_before_ten) {
  EXPECT_EQ(17u, sumPrime(10));
}

TEST(st1, sumPrime_before_two) {
  EXPECT_EQ(0u, sumPrime(2));
}

TEST(st1, sumPrime_before_thirty) {
  EXPECT_EQ(129u, sumPrime(30));
}

TEST(st1, sumPrime_before_two_million) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
