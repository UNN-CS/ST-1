// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(100);
  uint64_t expected = 1060;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(1);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st2, checkPrime1) {
  bool res = checkPrime(1);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st2, checkPrime2) {
  bool res = checkPrime(23);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st2, checkPrime3) {
  bool res = checkPrime(30);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st3, checknPrime1) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st3, checknPrime2) {
  uint64_t res = nPrime(5);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st3, checknPrime3) {
  uint64_t res = nPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st4, checknextPrime1) {
  uint64_t res = nextPrime(0);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st4, checknextPrime2) {
  uint64_t res = nextPrime(10);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st4, checknextPrime3) {
  uint64_t res = nextPrime(14);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st4, checknextPrime4) {
  uint64_t res = nextPrime(20);
  uint64_t expected = 23;
  EXPECT_EQ(expected, res);
}
