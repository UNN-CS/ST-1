// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include <stdexcept>

#include "alg.h"

//
// checkPrime tests
//
TEST(st1, checkPrime_One) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime_Two) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_Three) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrime_Four) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(st1, checkPrime_LargePrime) {
  EXPECT_TRUE(checkPrime(104729));
}

TEST(st1, checkPrime_LargeComposite) {
  EXPECT_FALSE(checkPrime(104730));
}

//
// nPrime tests
//
TEST(st1, nPrime_First) {
  uint64_t res = nPrime(1);
  EXPECT_EQ(2, res);
}

TEST(st1, nPrime_Second) {
  uint64_t res = nPrime(2);
  EXPECT_EQ(3, res);
}

TEST(st1, nPrime_Tenth) {
  uint64_t res = nPrime(10);
  EXPECT_EQ(29, res);
}

TEST(st1, nPrime_Hundredth) {
  uint64_t res = nPrime(100);
  EXPECT_EQ(541, res);
}

TEST(st1, nPrime_ZeroThrows) {
  EXPECT_THROW(nPrime(0), std::invalid_argument);
}

//
// nextPrime tests
//
TEST(st1, nextPrime_FromZero) {
  uint64_t res = nextPrime(0);
  EXPECT_EQ(2, res);
}

TEST(st1, nextPrime_FromOne) {
  uint64_t res = nextPrime(1);
  EXPECT_EQ(2, res);
}

TEST(st1, nextPrime_FromPrime) {
  uint64_t res = nextPrime(13);
  EXPECT_EQ(17, res);
}

TEST(st1, nextPrime_FromComposite) {
  uint64_t res = nextPrime(14);
  EXPECT_EQ(17, res);
}

TEST(st1, nextPrime_MaxValueThrows) {
  EXPECT_THROW(nextPrime(UINT64_MAX), std::overflow_error);
}

//
// sumPrime tests
//
TEST(st1, sumPrime_Zero) {
  uint64_t res = sumPrime(0);
  EXPECT_EQ(0, res);
}

TEST(st1, sumPrime_One) {
  uint64_t res = sumPrime(1);
  EXPECT_EQ(0, res);
}

TEST(st1, sumPrime_Two) {
  uint64_t res = sumPrime(2);
  EXPECT_EQ(0, res);
}

TEST(st1, sumPrime_Ten) {
  uint64_t res = sumPrime(10);
  EXPECT_EQ(17, res);
}

TEST(st1, sumPrime_Twenty) {
  uint64_t res = sumPrime(20);
  EXPECT_EQ(77, res);
}

TEST(st1, sumPrime_Large) {
  uint64_t res = sumPrime(2000000);
  EXPECT_EQ(142913828922ULL, res);
}
