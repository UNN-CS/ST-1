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
  uint64_t res = sumPrime(4);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(7);
  uint64_t expected = 10;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime5) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime1) {
  uint64_t res = nPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime2) {
  uint64_t res = nPrime(6);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime3) {
  uint64_t res = nPrime(10);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(10);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(50);
  uint64_t expected = 53;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(89);
  uint64_t expected = 97;
  EXPECT_EQ(expected, res);
}
