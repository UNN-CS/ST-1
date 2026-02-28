// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrime, ZeroAndOneAreNotPrime) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(checkPrime, TwoAndThreeArePrime) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
}

TEST(checkPrime, EvenNumbersAreNotPrime) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(100));
  EXPECT_FALSE(checkPrime(1000000));
}

TEST(checkPrime, KnownPrimes) {
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_TRUE(checkPrime(13));
  EXPECT_TRUE(checkPrime(97));
  EXPECT_TRUE(checkPrime(7919));
}

TEST(checkPrime, KnownComposites) {
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(25));
  EXPECT_FALSE(checkPrime(49));
  EXPECT_FALSE(checkPrime(121));
}

TEST(nPrime, FirstPrime) {
  EXPECT_EQ(2u, nPrime(1));
}

TEST(nPrime, SmallPrimes) {
  EXPECT_EQ(3u, nPrime(2));
  EXPECT_EQ(5u, nPrime(3));
  EXPECT_EQ(7u, nPrime(4));
  EXPECT_EQ(11u, nPrime(5));
  EXPECT_EQ(29u, nPrime(10));
}

TEST(nextPrime, NextAfterComposite) {
  EXPECT_EQ(5u, nextPrime(4));
  EXPECT_EQ(11u, nextPrime(8));
}

TEST(nextPrime, NextAfterPrime) {
  EXPECT_EQ(13u, nextPrime(11));
  EXPECT_EQ(3u, nextPrime(2));
  EXPECT_EQ(29u, nextPrime(23));
}

TEST(sumPrime, SmallBounds) {
  EXPECT_EQ(0u, sumPrime(2));
  EXPECT_EQ(2u, sumPrime(3));
  EXPECT_EQ(5u, sumPrime(5));
  EXPECT_EQ(17u, sumPrime(10));
}

TEST(sumPrime, LargeBound) {
  EXPECT_EQ(142913828922u, sumPrime(2000000));
}
