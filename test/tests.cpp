// Copyright 2024 Vinichuk Timofey
#include <gtest/gtest.h>
#include "alg.h"

TEST(CheckPrime, TestValueZero) {
    EXPECT_FALSE(checkPrime(0));
}

TEST(CheckPrime, TestSmallValues) {
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(53));
    EXPECT_FALSE(checkPrime(8));
}

TEST(CheckPrime, TestBigValues) {
    EXPECT_TRUE(checkPrime(9973));
    EXPECT_TRUE(checkPrime(1995031));
    EXPECT_TRUE(checkPrime(2002337));
    EXPECT_TRUE(checkPrime(20999999));
    EXPECT_FALSE(checkPrime(21000000));
}

TEST(NPrime, TestValueZero) {
    EXPECT_EQ(0, nPrime(0));
}

TEST(NPrime, TestSmallValues) {
    EXPECT_EQ(2, nPrime(1));
    EXPECT_EQ(5, nPrime(3));
    EXPECT_EQ(11, nPrime(5));
    EXPECT_EQ(19, nPrime(8));
}

TEST(NPrime, TestBigValues) {
    EXPECT_EQ(7919, nPrime(1000));
    EXPECT_EQ(104729, nPrime(10000));
    EXPECT_EQ(1299709, nPrime(100000));
}

TEST(NextPrime, TestSmallValues) {
    EXPECT_EQ(13, nextPrime(12));
    EXPECT_EQ(5, nextPrime(4));
    EXPECT_EQ(19, nextPrime(18));
}

TEST(NextPrime, TestBigValues) {
    EXPECT_EQ(20999261, nextPrime(20999250));
    EXPECT_EQ(20058641, nextPrime(20058639));
    EXPECT_EQ(17182961, nextPrime(17182950));
}

TEST(SumPrime, TestSumForFirstValue) {
    EXPECT_EQ(2, sumPrime(3));
    EXPECT_EQ(10, sumPrime(6));
}

TEST(SumPrime, TestNull) {
    EXPECT_EQ(0, sumPrime(0));
}

TEST(SumPrime, TestSecondTask) {
    EXPECT_EQ(142913828922, sumPrime(2000000));
}
