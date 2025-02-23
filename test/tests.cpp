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

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(50);
  uint64_t expected = 328;
  EXPECT_EQ(expected, res);
}

TEST(st2, checkPrime1) {
  bool res = checkPrime(13);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st2, checkPrime2) {
  bool res = checkPrime(15);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st2, checkPrime3) {
  bool res = checkPrime(97);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st3, nPrime1) {
  uint64_t res = nPrime(5);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st3, nPrime2) {
  uint64_t res = nPrime(10);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}

TEST(st3, nPrime3) {
  uint64_t res = nPrime(20);
  uint64_t expected = 71;
  EXPECT_EQ(expected, res);
}

TEST(st4, nextPrime1) {
  uint64_t res = nextPrime(31);
  uint64_t expected = 37;
  EXPECT_EQ(expected, res);
}

TEST(st4, nextPrime2) {
  uint64_t res = nextPrime(50);
  uint64_t expected = 53;
  EXPECT_EQ(expected, res);
}

TEST(st4, nextPrime3) {
  uint64_t res = nextPrime(99);
  uint64_t expected = 101;
  EXPECT_EQ(expected, res);
}
