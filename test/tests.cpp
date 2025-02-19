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

TEST(st1, checkPrime1) {
  ASSERT_TRUE(checkPrime(5));
}

TEST(st1, checkNonPrime1) {
  ASSERT_FALSE(checkPrime(4));
}

TEST(st1, nPrime5) {
  uint64_t res = nPrime(5);
  uint64_t expected = 11;
  EXPECT_EQ(res, expected);
}

TEST(st1, nPrime8) {
  uint64_t res = nPrime(8);
  uint64_t expected = 19;
  EXPECT_EQ(res, expected);
}

TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(4);
  uint64_t expected = 5;
  EXPECT_EQ(res, expected);
}

TEST(st1, nextPrime11) {
  uint64_t res = nextPrime(11);
  uint64_t expected = 13;
  EXPECT_EQ(res, expected);
}

TEST(st1, sumPrime7) {
  uint64_t res = sumPrime(7);
  uint64_t expected = 10;
  EXPECT_EQ(res, expected);
}

TEST(st1, nextPrime52) {
  uint64_t res = nextPrime(52);
  uint64_t expected = 53;
  EXPECT_EQ(res, expected);
}

TEST(st1, nextPrime13) {
  uint64_t res = nextPrime(13);
  uint64_t expected = 17;
  EXPECT_EQ(res, expected);
}
