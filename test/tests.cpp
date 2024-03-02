// Copyright 2024 Morgachev Stepan
#include <gtest/gtest.h>
#include "alg.h"

TEST(CheckPrime, ZeroAndOne) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrime, SmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
}

TEST(CheckPrime, BigPrimes) {
    EXPECT_TRUE(checkPrime(1995011));
    EXPECT_TRUE(checkPrime(1995013));
    EXPECT_TRUE(checkPrime(1995023));
    EXPECT_TRUE(checkPrime(1995031));
}

TEST(NPrime, SmallPrimes) {
    EXPECT_EQ(2, nPrime(1));
    EXPECT_EQ(3, nPrime(2));
    EXPECT_EQ(5, nPrime(3));
    EXPECT_EQ(7, nPrime(4));
}

TEST(NPrime, BigPrimes) {
    EXPECT_EQ(104729, nPrime(10000));
    EXPECT_EQ(104743, nPrime(10001));
    EXPECT_EQ(104759, nPrime(10002));
}

TEST(NextPrime, SmallData) {
    EXPECT_EQ(2, nextPrime(1));
    EXPECT_EQ(3, nextPrime(2));
    EXPECT_EQ(5, nextPrime(3));
    EXPECT_EQ(5, nextPrime(4));
}

TEST(NextPrime, BigData) {
    EXPECT_EQ(1e6 + 3, nextPrime(1e6));
    EXPECT_EQ(1e6 + 33, nextPrime(1e6 + 3));
}

TEST(SumPrime, SmallData) {
    EXPECT_EQ(17, sumPrime(10));
    EXPECT_EQ(5, sumPrime(5));
    EXPECT_EQ(0, sumPrime(1));
}

TEST(SumPrime, BigData) {
    EXPECT_EQ(454396537, sumPrime(1e5));
}

TEST(SumPrime, TwoSum) {
    EXPECT_EQ(22, sumPrime(10) + sumPrime(5));
}

TEST(SecondTask, Test) {
    EXPECT_EQ(142913828922, sumPrime(2e6));
}
