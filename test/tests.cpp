// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeCheck, EdgeAndCompositeCases) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(15));
    EXPECT_FALSE(checkPrime(100));
}

TEST(PrimeCheck, SmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_TRUE(checkPrime(19));
    EXPECT_TRUE(checkPrime(97));
}

TEST(PrimeCheck, LargerPrime) {
    EXPECT_TRUE(checkPrime(1000000007));
}


TEST(NthPrime, ZeroInput) {
    EXPECT_EQ(nPrime(0), 0);
}


TEST(NthPrime, FirstFewPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(5), 11);
}


TEST(NthPrime, MiddleRangePrimes) {
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(20), 71);
    EXPECT_EQ(nPrime(50), 229);
}


TEST(NextPrimeSearch, SmallInputs) {
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(NextPrimeSearch, RegularInputs) {
    EXPECT_EQ(nextPrime(14), 17);
    EXPECT_EQ(nextPrime(17), 19);
    EXPECT_EQ(nextPrime(30), 31);
}


TEST(NextPrimeSearch, BoundaryOverflow) {
    EXPECT_EQ(nextPrime(UINT64_MAX), 0);
}


TEST(PrimeSum, SmallBounds) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(6), 10);
    EXPECT_EQ(sumPrime(10), 17);
}


TEST(PrimeSum, LargerBounds) {
    EXPECT_EQ(sumPrime(20), 77);
    EXPECT_EQ(sumPrime(100), 1060);
}


TEST(PrimeSum, PerformanceAndCorrectness) {
    uint64_t expected = 142913828922;
    EXPECT_EQ(sumPrime(2000000), expected);
}