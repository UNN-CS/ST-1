// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include <limits>
#include <stdexcept>

#include "alg.h"

TEST(st1, CheckPrimeCoreCases) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(25));
  EXPECT_TRUE(checkPrime(97));
  EXPECT_FALSE(checkPrime(221));
}

TEST(st1, CheckPrimeLargeAndAdjacent) {
  EXPECT_TRUE(checkPrime(104729));
  EXPECT_FALSE(checkPrime(104730));
}

TEST(st1, CheckPrimeInvalidRange) {
  const uint64_t too_large =
      static_cast<uint64_t>(std::numeric_limits<int64_t>::max()) + 1;
  EXPECT_THROW(checkPrime(too_large), std::invalid_argument);
}

TEST(st1, NPrimeKnownValues) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(6), 13);
  EXPECT_EQ(nPrime(10), 29);
  EXPECT_EQ(nPrime(100), 541);
}

TEST(st1, NPrimeInvalidInput) {
  const uint64_t too_large =
      static_cast<uint64_t>(std::numeric_limits<int64_t>::max()) + 1;
  const uint64_t negative_as_uint64 = static_cast<uint64_t>(-1);

  EXPECT_THROW(nPrime(0), std::invalid_argument);
  EXPECT_THROW(nPrime(too_large), std::invalid_argument);
  EXPECT_THROW(nPrime(negative_as_uint64), std::invalid_argument);
}

TEST(st1, NextPrimeFromDifferentStarts) {
  EXPECT_EQ(nextPrime(0), 2);
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(14), 17);
  EXPECT_EQ(nextPrime(17), 19);
  EXPECT_EQ(nextPrime(100), 101);
}

TEST(st1, NextPrimeInvalidInput) {
  const uint64_t max_value = std::numeric_limits<uint64_t>::max();
  const uint64_t int64_max =
      static_cast<uint64_t>(std::numeric_limits<int64_t>::max());
  const uint64_t negative_as_uint64 = static_cast<uint64_t>(-1);

  EXPECT_THROW(nextPrime(max_value), std::invalid_argument);
  EXPECT_THROW(nextPrime(int64_max), std::invalid_argument);
  EXPECT_THROW(nextPrime(negative_as_uint64), std::invalid_argument);
}

TEST(st1, SumPrimeKnownValues) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(30), 129);
  EXPECT_EQ(sumPrime(100), 1060);
}

TEST(st1, SumPrimeLargeReferenceValue) {
  EXPECT_EQ(sumPrime(2000000), 142913828922);
}

TEST(st1, SumPrimeInvalidInput) {
  const uint64_t too_large =
      static_cast<uint64_t>(std::numeric_limits<int64_t>::max()) + 1;
  const uint64_t negative_as_uint64 = static_cast<uint64_t>(-1);

  EXPECT_THROW(sumPrime(too_large), std::invalid_argument);
  EXPECT_THROW(sumPrime(negative_as_uint64), std::invalid_argument);
}

TEST(st1, CrossFunctionConsistency) {
  EXPECT_TRUE(checkPrime(nPrime(25)));
  EXPECT_EQ(nextPrime(nPrime(10)), nPrime(11));
}
