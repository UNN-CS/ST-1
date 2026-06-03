// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, sumPrime2000000) {
  EXPECT_EQ(sumPrime(2000000), 142913828922);
}
TEST(st1, sumPrime10) {
  EXPECT_EQ(sumPrime(10), 17);
}
TEST(st1, sumPrime0) {
  EXPECT_EQ(sumPrime(0), 0);
}
TEST(st1, sumPrime1) {
  EXPECT_EQ(sumPrime(1), 0);
}
TEST(st1, sumPrime19) {
  EXPECT_EQ(sumPrime(19), 58);
}
TEST(st1, sumPrime18) {
  EXPECT_EQ(sumPrime(18), 58);
}
TEST(st1, sumPrime20) {
  EXPECT_EQ(sumPrime(20), 77);
}

TEST(st1, checkPrime0) {
  EXPECT_FALSE(checkPrime(0));
}
TEST(st1, checkPrime1) {
  EXPECT_FALSE(checkPrime(1));
}
TEST(st1, checkPrime3) {
  EXPECT_TRUE(checkPrime(3));
}
TEST(st1, checkPrime7) {
  EXPECT_TRUE(checkPrime(7));
}
TEST(st1, checkPrime17) {
  EXPECT_TRUE(checkPrime(17));
}
TEST(st1, checkPrime101) {
  EXPECT_TRUE(checkPrime(101));
}
TEST(st1, checkPrime1009) {
  EXPECT_TRUE(checkPrime(1009));
}
TEST(st1, checkPrime555) {
  EXPECT_FALSE(checkPrime(555));
}
TEST(st1, checkPrime2000) {
  EXPECT_FALSE(checkPrime(2000));
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(5);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime5) {
  uint64_t res = sumPrime(7);
  uint64_t expected = 10;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime6) {
  uint64_t res = sumPrime(30);
  uint64_t expected = 129;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime7) {
  uint64_t res = sumPrime(50);
  uint64_t expected = 328;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime8) {
  uint64_t res = sumPrime(105);
  uint64_t expected = 1264;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime1) {
  bool res = checkPrime(2);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime2) {
  bool res = checkPrime(4);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime3) {
  bool res = checkPrime(13);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime4) {
  bool res = checkPrime(49);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime5) {
  bool res = checkPrime(97);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime6) {
  bool res = checkPrime(121);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime7) {
  bool res = checkPrime(997);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime8) {
  bool res = checkPrime(1001);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime9) {
  bool res = checkPrime(0);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime10) {
  bool res = checkPrime(1);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime1) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime2) {
  uint64_t res = nPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime3) {
  uint64_t res = nPrime(10);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime4) {
  uint64_t res = nPrime(20);
  uint64_t expected = 71;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime5) {
  uint64_t res = nPrime(50);
  uint64_t expected = 229;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(10);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(23);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(30);
  uint64_t expected = 31;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime5) {
  uint64_t res = nextPrime(99);
  uint64_t expected = 101;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime6) {
  uint64_t res = nextPrime(100);
  uint64_t expected = 101;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime7) {
  uint64_t res = nextPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime8) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}