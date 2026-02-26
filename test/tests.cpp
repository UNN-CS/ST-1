// Copyright 2025 UNN-CS
#include <cstdint>
#include <gtest/gtest.h>

#include "alg.h"

TEST(st1, checkPrimeEdge) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_TRUE(checkPrime(7));
}

TEST(st1, checkPrimeSmallPrimes) {
  EXPECT_TRUE(checkPrime(11));
  EXPECT_TRUE(checkPrime(13));
  EXPECT_TRUE(checkPrime(17));
  EXPECT_TRUE(checkPrime(19));
  EXPECT_TRUE(checkPrime(23));
}

TEST(st1, checkPrimeSmallComposites) {
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(15));
  EXPECT_FALSE(checkPrime(21));
  EXPECT_FALSE(checkPrime(25));
  EXPECT_FALSE(checkPrime(27));
}

TEST(st1, nPrimeBasic) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
  EXPECT_EQ(nPrime(5), 11);
}

TEST(st1, nPrimeLarger) {
  EXPECT_EQ(nPrime(10), 29);
  EXPECT_EQ(nPrime(20), 71);
  EXPECT_EQ(nPrime(25), 97);
}

TEST(st1, nextPrimeBasic) {
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(3), 5);
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(5), 7);
}

TEST(st1, nextPrimeNearPrimes) {
  EXPECT_EQ(nextPrime(8), 11);
  EXPECT_EQ(nextPrime(10), 11);
  EXPECT_EQ(nextPrime(12), 13);
  EXPECT_EQ(nextPrime(14), 17);
}

TEST(st1, sumPrimeBigger) {
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(11), 17);
}

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

TEST(st1, allFunctionsSmoke) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(sumPrime(3), 2);
}