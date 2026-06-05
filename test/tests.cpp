// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeCheck, ZeroIsNotPrime) {
    EXPECT_FALSE(checkPrime(0));
}

TEST(PrimeCheck, OneIsNotPrime) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(PrimeCheck, TwoIsPrime) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(PrimeCheck, ThreeIsPrime) {
    EXPECT_TRUE(checkPrime(3));
}

TEST(PrimeCheck, EvenNumberNotPrime) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(100));
}

TEST(PrimeCheck, LargePrimeNumber) {
    EXPECT_TRUE(checkPrime(97));
}

TEST(NPrime, FirstInSequence) {
    EXPECT_EQ(2ULL, nPrime(1));
}

TEST(NPrime, FifthInSequence) {
    EXPECT_EQ(11ULL, nPrime(5));
}

TEST(NPrime, TenthInSequence) {
    EXPECT_EQ(29ULL, nPrime(10));
}

TEST(NextPrime, AfterOne) {
    EXPECT_EQ(2ULL, nextPrime(1));
}

TEST(NextPrime, AfterComposite) {
    EXPECT_EQ(5ULL, nextPrime(4));
}

TEST(NextPrime, AfterPrime) {
    EXPECT_EQ(13ULL, nextPrime(11));
}

TEST(SumPrime, SmallBound) {
    EXPECT_EQ(17ULL, sumPrime(10));
}

TEST(SumPrime, BoundOfTwo) {
    EXPECT_EQ(0ULL, sumPrime(2));
}

TEST(SumPrime, LargeBound) {
    EXPECT_EQ(142913828922ULL, sumPrime(2000000));
}
