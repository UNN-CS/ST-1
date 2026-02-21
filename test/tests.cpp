// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime1) {
  uint64_t result = checkPrime(0);
  bool expected = false;
  
  EXPECT_EQ(expected, result);
}

TEST(st1, checkPrime2) {
  uint64_t result = checkPrime(1);
  bool expected = false;
  
  EXPECT_EQ(expected, result);
}

TEST(st1, checkPrime3) {
  uint64_t result = checkPrime(7);
  bool expected = true;
  
  EXPECT_EQ(expected, result);
}

TEST(st1, nPrime1) {
  uint64_t result = nPrime(4);
  uint64_t expected = 7;

  EXPECT_EQ(expected, result);
}

TEST(st1, nPrime2) {
  uint64_t result = nPrime(7);
  uint64_t expected = 17;

  EXPECT_EQ(expected, result);
}

TEST(st1, nPrime3) {
  uint64_t result = nPrime(8);
  uint64_t expected = 19;

  EXPECT_EQ(expected, result);
}

TEST(st1, nextPrime1) {
  uint64_t result = nextPrime(3);
  uint64_t expected = 5;

  EXPECT_EQ(expected, result);
}

TEST(st1, nextPrime2) {
  uint64_t result = nextPrime(5);
  uint64_t expected = 7;

  EXPECT_EQ(expected, result);
}

TEST(st1, nextPrime3) {
  uint64_t result = nextPrime(7);
  uint64_t expected = 11;

  EXPECT_EQ(expected, result);
}

TEST(st1, sumPrime1) {
  uint64_t result = sumPrime(5);
  uint64_t expected = 5;

  EXPECT_EQ(expected, result);
}

TEST(st1, sumPrime2) {
  uint64_t result = sumPrime(7);
  uint64_t expected = 10;

  EXPECT_EQ(expected, result);
}

TEST(st1, sumPrime3) {
  uint64_t result = sumPrime(11);
  uint64_t expected = 17;

  EXPECT_EQ(expected, result);
}