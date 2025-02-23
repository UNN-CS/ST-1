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

TEST(SumTest, sumPrime3) {
  uint64_t res = sumPrime(3);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(SumTest, sumPrime4) {
  uint64_t res = sumPrime(19);
  uint64_t expected = 58;
  EXPECT_EQ(expected, res);
}

TEST(CheckTest, CheckPrime1) {
    EXPECT_TRUE(checkPrime(3));
}

TEST(CheckTest, CheckPrime2) {
    EXPECT_TRUE(checkPrime(17));
}

TEST(CheckTest, CheckPrime3) {
    EXPECT_FALSE(checkPrime(6));
}

TEST(CheckTest, CheckPrime4) {
    EXPECT_FALSE(checkPrime(20));
}

TEST(NTest, NPrime1) {
    uint64_t res = nPrime(1);
    uint64_t expected = 2;
    EXPECT_EQ(expected, res);
}

TEST(NTest, NPrime2) {
    uint64_t res = nPrime(7);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}

TEST(NTest, NPrime3) {
    uint64_t res = nPrime(9);
    uint64_t expected = 23;
    EXPECT_EQ(expected, res);
}

TEST(NTest, NPrime4) {
    uint64_t res = nPrime(11);
    uint64_t expected = 31;
    EXPECT_EQ(expected, res);
}

TEST(NextTest, NextPrime1) {
    uint64_t res = nextPrime(2);
    uint64_t expected = 3;
    EXPECT_EQ(expected, res);
}

TEST(NextTest, NextPrime2) {
    uint64_t res = nextPrime(4);
    uint64_t expected = 5;
    EXPECT_EQ(expected, res);
}

TEST(NextTest, NextPrime3) {
    uint64_t res = nextPrime(9);
    uint64_t expected = 11;
    EXPECT_EQ(expected, res);
}

TEST(NextTest, NextPrime4) {
    uint64_t res = nextPrime(20);
    uint64_t expected = 23;
    EXPECT_EQ(expected, res);
}
