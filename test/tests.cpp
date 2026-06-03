// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrimeRejectsNumbersBelowTwo) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrimeAcceptsSmallPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrimeRejectsEvenComposite) {
  EXPECT_FALSE(checkPrime(100));
}

TEST(st1, checkPrimeRejectsOddComposite) {
  EXPECT_FALSE(checkPrime(121));
}

TEST(st1, checkPrimeAcceptsTwoDigitPrime) {
  EXPECT_TRUE(checkPrime(97));
}

TEST(st1, nextPrimeWorksBeforeFirstPrime) {
  EXPECT_EQ(2, nextPrime(0));
  EXPECT_EQ(2, nextPrime(1));
}

TEST(st1, nextPrimeDoesNotReturnInputValue) {
  EXPECT_EQ(13, nextPrime(11));
}

TEST(st1, nextPrimeSkipsSeveralCompositeNumbers) {
  EXPECT_EQ(101, nextPrime(98));
}

TEST(st1, nPrimeReturnsZeroForInvalidIndex) {
  EXPECT_EQ(0, nPrime(0));
}

TEST(st1, nPrimeFindsFirstPrime) {
  EXPECT_EQ(2, nPrime(1));
}

TEST(st1, nPrimeFindsPrimeFromMiddleOfSequence) {
  EXPECT_EQ(29, nPrime(10));
}

TEST(st1, nPrimeFindsLargerKnownPrime) {
  EXPECT_EQ(541, nPrime(100));
}

TEST(st1, sumPrimeIsZeroWhenNoPrimeFits) {
  EXPECT_EQ(0, sumPrime(2));
}

TEST(st1, sumPrimeDoesNotIncludeUpperBound) {
  EXPECT_EQ(17, sumPrime(10));
  EXPECT_EQ(17, sumPrime(11));
}

TEST(st1, sumPrimeKnownProjectEulerValue) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
