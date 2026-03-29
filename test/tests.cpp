// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime_zero_is_false) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime_one_is_false) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime_two_is_true) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_large_prime_is_true) {
  EXPECT_TRUE(checkPrime(97));
}

TEST(st1, checkPrime_large_composite_is_false) {
  EXPECT_FALSE(checkPrime(100));
}

TEST(st1, nPrime_first_is_two) {
  EXPECT_EQ(static_cast<uint64_t>(2), nPrime(1));
}

TEST(st1, nPrime_second_is_three) {
  EXPECT_EQ(static_cast<uint64_t>(3), nPrime(2));
}

TEST(st1, nPrime_sixth_is_thirteen) {
  EXPECT_EQ(static_cast<uint64_t>(13), nPrime(6));
}

TEST(st1, nextPrime_after_zero_is_two) {
  EXPECT_EQ(static_cast<uint64_t>(2), nextPrime(0));
}

TEST(st1, nextPrime_after_one_is_two) {
  EXPECT_EQ(static_cast<uint64_t>(2), nextPrime(1));
}

TEST(st1, nextPrime_after_two_is_three) {
  EXPECT_EQ(static_cast<uint64_t>(3), nextPrime(2));
}

TEST(st1, nextPrime_after_composite_is_prime) {
  EXPECT_EQ(static_cast<uint64_t>(5), nextPrime(4));
}

TEST(st1, nextPrime_after_prime_skips_itself) {
  EXPECT_EQ(static_cast<uint64_t>(13), nextPrime(11));
}

TEST(st1, sumPrime_below_two_is_zero) {
  EXPECT_EQ(static_cast<uint64_t>(0), sumPrime(2));
}

TEST(st1, sumPrime_below_ten_is_seventeen) {
  EXPECT_EQ(static_cast<uint64_t>(17), sumPrime(10));
}

TEST(st1, sumPrime_below_twenty_is_seventy_seven) {
  EXPECT_EQ(static_cast<uint64_t>(77), sumPrime(20));
}

TEST(st1, sumPrime_two_million) {
  const uint64_t res = sumPrime(2000000);
  const uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
