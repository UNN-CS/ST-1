// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"



TEST(st1, checkPrime1) {
  EXPECT_EQ(checkPrime(2), true);
}

TEST(st1, checkPrime2) {
  EXPECT_EQ(checkPrime(4), false);
}

TEST(st1, checkPrime3) {
  EXPECT_EQ(checkPrime(5), true);
}

TEST(st1, checkPrime4) {
  EXPECT_EQ(checkPrime(9929), true);
}

TEST(st1, checkPrime5) {
  EXPECT_EQ(checkPrime(9999), false);
}

TEST(st1, nPrime1) {
  uint64_t num = 6;
  uint64_t expected = 13;
  EXPECT_EQ(expected, nPrime(num));
}

TEST(st1, nPrime2) {
  uint64_t num = 6;
  uint64_t expected = 13;
  EXPECT_EQ(expected, nPrime(num));
}

TEST(st1, nPrime3) {
  uint64_t num = 12;
  uint64_t expected = 37;
  EXPECT_EQ(expected, nPrime(num));
}

TEST(st1, nPrime4) {
  uint64_t num = 1;
  uint64_t expected = 2;
  EXPECT_EQ(expected, nPrime(num));
}

TEST(st1, nPrime5) {
  uint64_t num = 6;
  uint64_t expected = 13;
  EXPECT_EQ(expected, nPrime(num));
}

TEST(st1, nextPrime1) {
  uint64_t num = 13;
  uint64_t expected = 17;
  EXPECT_EQ(expected, nextPrime(num));
}

TEST(st1, nextPrime1) {
  uint64_t num = 5;
  uint64_t expected = 7;
  EXPECT_EQ(expected, nextPrime(num));
}

TEST(st1, nextPrime2) {
  uint64_t num = 13;
  uint64_t expected = 17;
  EXPECT_EQ(expected, nextPrime(num));
}

TEST(st1, nextPrime3) {
  uint64_t num = 12;
  uint64_t expected = 13;
  EXPECT_EQ(expected, nextPrime(num));
}

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(13);
  uint64_t expected = 28;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(39);
  uint64_t expected = 197;
  EXPECT_EQ(expected, res);
}
