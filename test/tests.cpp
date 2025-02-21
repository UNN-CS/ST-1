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
TEST(st1, TestPrimeNumbers) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_TRUE(checkPrime(11));
  EXPECT_TRUE(checkPrime(13));
  EXPECT_TRUE(checkPrime(17));
  EXPECT_TRUE(checkPrime(19));
  EXPECT_TRUE(checkPrime(9973));
}

TEST(st1, TestCompositeNumbers) {
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(8));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(10));
  EXPECT_FALSE(checkPrime(100));
  EXPECT_FALSE(checkPrime(1000));
}

TEST(st1, TestNPrime) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(10), 29);
  EXPECT_EQ(nPrime(15), 47);
}

TEST(st1, TestNextPrime) {
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(10), 11);
  EXPECT_EQ(nextPrime(12), 13);
  EXPECT_EQ(nextPrime(20), 23);
  EXPECT_EQ(nextPrime(9972), 9973); 
}

TEST(st1, TestSumPrime) {
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(20), 77);
  EXPECT_EQ(sumPrime(100), 1060);
  EXPECT_EQ(sumPrime(1000), 76127);
}

TEST(st1, TestSumPrimeEdgeCases) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 0);
  EXPECT_EQ(sumPrime(4), 2);
}

TEST(st1, TestNPrimeEdgeCases) {
  EXPECT_EQ(nPrime(0), 0);
}

TEST(st1, TestNextPrimeEdgeCases) {
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(st1, TestZeroAndOne) {
EXPECT_FALSE(checkPrime(0));
EXPECT_FALSE(checkPrime(1));
}

TEST(st1, TestLargePrime) {
  EXPECT_TRUE(checkPrime(104729));
}
