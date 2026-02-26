// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime1) {
  EXPECT_TRUE(checkPrime(17));
}

TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(97));
}

TEST(st1, checkPrime3) {
  EXPECT_FALSE(checkPrime(100));
}

TEST(st1, checkPrime4) {
  EXPECT_TRUE(checkPrime(101));
}

TEST(st1, nPrime1) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime2) {
  uint64_t res = nPrime(10);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime3) {
  uint64_t res = nPrime(100);
  uint64_t expected = 541;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime4) {
  uint64_t res = nPrime(1000);
  uint64_t expected = 7919;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(0);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(12);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(13);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(25565);
  uint64_t expected = 25577;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(3);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(35);
  uint64_t expected = 160;
  EXPECT_EQ(expected, res);
}
