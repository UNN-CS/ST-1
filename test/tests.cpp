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

TEST(st1, nPrime0) {
  EXPECT_EQ(nPrime(0), 0);
}
TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(1), 2);
}
TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(2), 3);
}
TEST(st1, nPrime19) {
  EXPECT_EQ(nPrime(19), 67);
}
TEST(st1, nPrime55) {
  EXPECT_EQ(nPrime(55), 257);
}

TEST(st1, nextPrime0) {
  EXPECT_EQ(nextPrime(0), 2);
}
TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(1), 2);
}
TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(2), 3);
}
TEST(st1, nextPrime17) {
  EXPECT_EQ(nextPrime(17), 19);
}
TEST(st1, nextPrime55) {
  EXPECT_EQ(nextPrime(55), 59);
}
TEST(st1, nextPrime56) {
  EXPECT_EQ(nextPrime(56), 59);
}
TEST(st1, nextPrime100) {
  EXPECT_EQ(nextPrime(100), 101);
}
TEST(st1, nextPrime101) {
  EXPECT_EQ(nextPrime(101), 103);
}
