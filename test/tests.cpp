// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, sumPrime1) {
  EXPECT_EQ(142913828922ULL, sumPrime(2000000));
}
TEST(st1, sumPrime2) {
  EXPECT_EQ(17ULL, sumPrime(10));
}

TEST(checkPrime, zero) {
  EXPECT_FALSE(checkPrime(0));
}
TEST(checkPrime, one) {
  EXPECT_FALSE(checkPrime(1));
}
TEST(checkPrime, two) {
  EXPECT_TRUE(checkPrime(2));
}
TEST(checkPrime, four) {
  EXPECT_FALSE(checkPrime(4));
}
TEST(checkPrime, prime97) {
  EXPECT_TRUE(checkPrime(97));
}
TEST(checkPrime, composite21) {
  EXPECT_FALSE(checkPrime(21));
}
TEST(checkPrime, prime7919) {
  EXPECT_TRUE(checkPrime(7919));
}
TEST(checkPrime, million) {
  EXPECT_FALSE(checkPrime(1000000));
}

TEST(nPrime, zero) {
  EXPECT_EQ(0ULL, nPrime(0));
}
TEST(nPrime, first) {
  EXPECT_EQ(2ULL, nPrime(1));
}
TEST(nPrime, second) {
  EXPECT_EQ(3ULL, nPrime(2));
}
TEST(nPrime, fifth) {
  EXPECT_EQ(11ULL, nPrime(5));
}
TEST(nPrime, tenth) {
  EXPECT_EQ(29ULL, nPrime(10));
}
TEST(nPrime, hundredth) {
  EXPECT_EQ(541ULL, nPrime(100));
}

TEST(nextPrime, afterTwo) {
  EXPECT_EQ(3ULL, nextPrime(2));
}
TEST(nextPrime, afterComposite) {
  EXPECT_EQ(5ULL, nextPrime(4));
}
TEST(nextPrime, afterPrime) {
  EXPECT_EQ(13ULL, nextPrime(11));
}
TEST(nextPrime, afterTen) {
  EXPECT_EQ(11ULL, nextPrime(10));
}
TEST(nextPrime, afterHundred) {
  EXPECT_EQ(101ULL, nextPrime(100));
}

TEST(sumPrime, beforeTwo) {
  EXPECT_EQ(0ULL, sumPrime(2));
}
TEST(sumPrime, beforeThree) {
  EXPECT_EQ(2ULL, sumPrime(3));
}
TEST(sumPrime, beforeTen) {
  EXPECT_EQ(17ULL, sumPrime(10));
}
TEST(sumPrime, beforeThirty) {
  EXPECT_EQ(129ULL, sumPrime(30));
}
TEST(sumPrime, beforeHundred) {
  EXPECT_EQ(1060ULL, sumPrime(100));
}
