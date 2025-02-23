// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime1) {
  EXPECT_TRUE(checkPrime(1));
}
TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(41));
}
TEST(st1, checkPrime3) {
  EXPECT_TRUE(checkPrime(857));
}
TEST(st1, checkPrime4) {
  EXPECT_FALSE(checkPrime(770));
}
TEST(st1, checkPrime5) {
  EXPECT_FALSE(checkPrime(308));
}
TEST(st1, checkPrime6) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(1), 2);
}
TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(3), 5);
}
TEST(st1, nPrime3) {
  EXPECT_EQ(nPrime(43), 191);
}
TEST(st1, nPrime4) {
  EXPECT_EQ(nPrime(168), 997);
}
TEST(st1, nPrime5) {
  EXPECT_EQ(nPrime(144), 827);
}
TEST(st1, nPrime5) {
  EXPECT_EQ(nPrime(144), 827);
}

TEST(st1, sumPrime1) {
  EXPECT_EQ(sumPrime(7), 10);
}
TEST(st1, sumPrime2) {
  EXPECT_EQ(sumPrime(19), 58);
}
TEST(st1, sumPrime3) {
  EXPECT_EQ(sumPrime(10000), 5736396);
}
TEST(st1, sumPrime4) {
  EXPECT_EQ(sumPrime(1000), 76127);
}
TEST(st1, sumPrime5) {
  EXPECT_EQ(sumPrime(61), 411);
}
TEST(st1, sumPrime6) {
  EXPECT_EQ(sumPrime(139), 1959);
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(557), 563);
}
TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(5), 7);
}
TEST(st1, nextPrime3) {
  EXPECT_EQ(nextPrime(971), 977);
}
TEST(st1, nextPrime4) {
  EXPECT_EQ(nextPrime(174469), 175081);
}
TEST(st1, nextPrime5) {
  EXPECT_EQ(nextPrime(1117), 1223);
}
TEST(st1, nextPrime6) {
  EXPECT_EQ(nextPrime(89), 97);
}
