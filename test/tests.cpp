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
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(1));
}

TEST(st1, nPrime1) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(10), 29);
}

TEST(st1, nextPrime1) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(17), 19);
}

TEST(st1, sumPrime3) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(5), 5);
}

TEST(st1, checkPrime2) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_TRUE(checkPrime(19));
}

TEST(st1, nPrime2) {
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(7), 17);
}

TEST(st1, nextPrime2) {
    EXPECT_EQ(nextPrime(20), 23);
    EXPECT_EQ(nextPrime(29), 31);
    EXPECT_EQ(nextPrime(37), 41);
}

TEST(st1, largePrime) {
    EXPECT_EQ(nPrime(1000), 7919);
}
