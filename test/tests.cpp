// Copyright 2024 Smirnova Darya
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrime, testLargeConstantValue) {
    EXPECT_FALSE(checkPrime(1e9 + 13));
    EXPECT_FALSE(checkPrime(1e9 + 19));
    EXPECT_FALSE(checkPrime(987'654'321));
}

TEST(checkPrime, testConstantValue) {
    EXPECT_TRUE(checkPrime(17));
    EXPECT_TRUE(checkPrime(23));
    EXPECT_FALSE(checkPrime(256));
    EXPECT_FALSE(checkPrime(1000));
}

TEST(nPrime, testConstantValueN) {
    EXPECT_EQ(7, nPrime(4));
    EXPECT_EQ(11, nPrime(5));
    EXPECT_EQ(13, nPrime(6));
}

TEST(nextPrime, testLargeConstantValueNext) {
    EXPECT_EQ(1e9 + 9, nextPrime(1e9 + 7));
    EXPECT_EQ(1e9 + 21, nextPrime(1e9 + 13));
}

TEST(PrimaryNumbers, CheckPrimeWithZero) {
    ASSERT_FALSE(checkPrime(0));
}

TEST(PrimaryNumbers, CheckPrimeWithNegative) {
    ASSERT_FALSE(checkPrime(-10));
    ASSERT_FALSE(checkPrime(-1));
}

TEST(NPrime, TestZeroN) {
    EXPECT_EQ(nPrime(0), 0);
}

TEST(PrimaryNumbers, CheckMaxUInt64) {
    ASSERT_FALSE(checkPrime(UINT64_MAX));
}

TEST(SumPrime, TestSinglePrime) {
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(SumPrime, TestBigNumbers) {
    EXPECT_EQ(sumPrime(100), 1060);
    EXPECT_EQ(sumPrime(1000), 76127);
    EXPECT_EQ(sumPrime(10000), 5736396);
}
