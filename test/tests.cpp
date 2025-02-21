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
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(13));
}

TEST(st1, checkPrime3) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime4) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(5), 11);
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(7), 11);
}

TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(14), 17);
}

TEST(st1, sumPrime3) {
  EXPECT_EQ(sumPrime(30), 129);
}

TEST(st1, sumPrime4) {
  EXPECT_EQ(sumPrime(100), 1060);
}
