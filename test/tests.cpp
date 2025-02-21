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
  uint64_t res = sumPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(1);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime5) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime6) {
  uint64_t res = sumPrime(3);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime7) {
  uint64_t res = sumPrime(6);
  uint64_t expected = 10;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime1) {
  uint64_t res = nPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime2) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime3) {
  uint64_t res = nPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime4) {
  uint64_t res = nPrime(5);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(0);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime5) {
  uint64_t res = nextPrime(4);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime6) {
  uint64_t res = nextPrime(99);
  uint64_t expected = 101;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime7) {
  uint64_t res = nextPrime(-1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
