// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  EXPECT_EQ(142913828922, sumPrime(2000000));
}
TEST(st1, sumPrime2) {
  EXPECT_EQ(17, sumPrime(10));
}
TEST(st1, sumPrime3) {
  EXPECT_EQ(sumPrime(1000), 76127);
}
TEST(st1, sumPrime4) {
  EXPECT_EQ(sumPrime(1500), 165040);
}
TEST(st1, sumPrime5) {
  EXPECT_EQ(sumPrime(10000), 5736396);
}

TEST(st1, checkPrime1) {
  EXPECT_TRUE(checkPrime(2));
}
TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(5));
}
TEST(st1, checkPrime3) {
  EXPECT_TRUE(checkPrime(997));
}
TEST(st1, checkPrime4) {
  EXPECT_FALSE(checkPrime(999));
}
TEST(st1, checkPrime5) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, NPrime1) {
  EXPECT_EQ(nPrime(1), 2);
}
TEST(st1, NPrime2) {
  EXPECT_EQ(nPrime(2), 3);
}
TEST(st1, NPrime3) {
  EXPECT_EQ(nPrime(500), 3571);
}
TEST(st1, NPrime4) {
  EXPECT_EQ(nPrime(1000), 7919);
}
TEST(st1, NPrime5) {
  EXPECT_EQ(nPrime(1500), 12553);
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(100), 101);
}
TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(150), 151);
}
TEST(st1, nextPrime3) {
  EXPECT_EQ(nextPrime(999), 1009);
}
TEST(st1, nextPrime4) {
  EXPECT_EQ(nextPrime(5000), 5003);
}
TEST(st1, nextPrime5) {
  EXPECT_EQ(nextPrime(50000), 50021);
}
