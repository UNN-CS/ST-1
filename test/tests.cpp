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

TEST(st1, sumPrime_below2_returns0) {
  EXPECT_EQ(0u, sumPrime(2));
  EXPECT_EQ(0u, sumPrime(0));
  EXPECT_EQ(0u, sumPrime(1));
}

TEST(st1, checkPrime_2_isTrue) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_oddPrimes_areTrue) {
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_TRUE(checkPrime(11));
  EXPECT_TRUE(checkPrime(97));
}

TEST(st1, checkPrime_composites_areFalse) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(15));
  EXPECT_FALSE(checkPrime(100));
}

TEST(st1, checkPrime_zeroAndOne_areFalse) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, nPrime_firstIs2) {
  EXPECT_EQ(2u, nPrime(1));
}

TEST(st1, nPrime_secondIs3) {
  EXPECT_EQ(3u, nPrime(2));
}

TEST(st1, nPrime_fifthIs11) {
  EXPECT_EQ(11u, nPrime(5));
}

TEST(st1, nextPrime_afterComposite) {
  EXPECT_EQ(5u, nextPrime(4));
}

TEST(st1, nextPrime_afterPrime_skipsItself) {
  EXPECT_EQ(13u, nextPrime(11));
}

TEST(st1, nextPrime_after1_is2) {
  EXPECT_EQ(2u, nextPrime(1));
}
