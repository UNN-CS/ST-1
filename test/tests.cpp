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
  uint64_t res = sumPrime(5);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(1);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime5) {
  uint64_t res = sumPrime(3);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime1) {
  uint64_t res = nPrime(5);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime2) {
  uint64_t res = nPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime3) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(0);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(5);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(1000);
  uint64_t expected = 1009;
  EXPECT_EQ(expected, res);
}
