// Copyright 2025 UNN-CS

#include <gtest/gtest.h>

#include <cstdint>

#include "alg.h"

TEST(st1, checkPrime1) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
}

TEST(st1, checkPrime3) {
  EXPECT_TRUE(checkPrime(17));
  EXPECT_FALSE(checkPrime(21));
}

TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
}

TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(5), 11);
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(0), 2);
  EXPECT_EQ(nextPrime(4), 5);
}

TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(11), 13);
  EXPECT_EQ(nextPrime(20), 23);
}

TEST(st1, sumPrime1) {
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(st1, sumPrime2) {
  EXPECT_EQ(sumPrime(20), 77);
  EXPECT_EQ(sumPrime(30), 129);
}

TEST(st1, combined) {
  EXPECT_TRUE(checkPrime(97));
  EXPECT_EQ(nextPrime(97), 101);
}
