// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeChecks, rejectsLessThanTwo) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(PrimeChecks, acceptsSmallPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(17));
}

TEST(PrimeChecks, rejectsCompositeNumbers) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(100));
  EXPECT_FALSE(checkPrime(153234));
}

TEST(PrimeChecks, acceptsLargePrime) {
  EXPECT_TRUE(checkPrime(1021));
}

TEST(OrdinalPrime, firstFewInSequence) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(4), 7);
  EXPECT_EQ(nPrime(6), 13);
}

TEST(OrdinalPrime, tenthPrime) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(OrdinalPrime, zeroReturnsZero) {
  EXPECT_EQ(nPrime(0), 0);
}

TEST(FollowingPrime, afterTwoAndEleven) {
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(11), 13);
}

TEST(FollowingPrime, fromZero) {
  EXPECT_EQ(nextPrime(0), 2);
}

TEST(FollowingPrime, fromPrimeGivesNext) {
  EXPECT_EQ(nextPrime(7), 11);
}

TEST(PrimeSum, belowThree) {
  EXPECT_EQ(sumPrime(3), 2);
}

TEST(PrimeSum, emptyRange) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(2), 0);
}

TEST(PrimeSum, belowTen) {
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(PrimeSum, upToTwoMillion) {
  EXPECT_EQ(sumPrime(2000000), 142913828922);
}
