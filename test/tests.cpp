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
TEST(SumPrimeTest, SumPrime3) {
    uint64_t res = sumPrime(2);
    uint64_t expected = 0;
    EXPECT_EQ(expected, res);
}

TEST(SumPrimeTest, SumPrime4) {
    uint64_t res = sumPrime(20);
    uint64_t expected = 77;
    EXPECT_EQ(expected, res);
}

TEST(CheckPrimeTest, CheckPrime1) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, CheckPrime2) {
    EXPECT_TRUE(checkPrime(13));
}

TEST(CheckPrimeTest, CheckPrime3) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, CheckPrime4) {
    EXPECT_FALSE(checkPrime(4));
}

TEST(CheckPrimeTest, CheckPrime5) {
    EXPECT_TRUE(checkPrime(29));
}

TEST(CheckPrimeTest, CheckPrime6) {
    EXPECT_FALSE(checkPrime(1000000000000000000));
}

TEST(NPrimeTest, NPrime1) {
    uint64_t res = nPrime(1);
    uint64_t expected = 2;
    EXPECT_EQ(expected, res);
}

TEST(NPrimeTest, NPrime2) {
    uint64_t res = nPrime(5);
    uint64_t expected = 11;
    EXPECT_EQ(expected, res);
}

TEST(NPrimeTest, NPrime3) {
    uint64_t res = nPrime(10);
    uint64_t expected = 29;
    EXPECT_EQ(expected, res);
}

TEST(NPrimeTest, NPrime4) {
    uint64_t res = nPrime(0);
    uint64_t expected = 0;
    EXPECT_EQ(expected, res);
}

TEST(NextPrimeTest, NextPrime1) {
    uint64_t res = nextPrime(2);
    uint64_t expected = 3;
    EXPECT_EQ(expected, res);
}

TEST(NextPrimeTest, NextPrime2) {
    uint64_t res = nextPrime(10);
    uint64_t expected = 11;
    EXPECT_EQ(expected, res);
}

TEST(NextPrimeTest, NextPrime3) {
    uint64_t res = nextPrime(29);
    uint64_t expected = 31;
    EXPECT_EQ(expected, res);
}

TEST(NextPrimeTest, NextPrime4) {
    uint64_t res = nextPrime(1000000);
    uint64_t expected = 1000003;
    EXPECT_EQ(expected, res);
}

TEST(NextPrimeTest, NextPrime5) {
    uint64_t res = nextPrime(1);
    uint64_t expected = 2;
    EXPECT_EQ(expected, res);
}

TEST(NextPrimeTest, NextPrime6) {
    uint64_t res = nextPrime(0);
    uint64_t expected = 2;
    EXPECT_EQ(expected, res);
}
