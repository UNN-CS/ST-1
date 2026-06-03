// Copyright 2024 Nazyrov A.A.

#include <gtest/gtest.h>
#include "alg.h"

// Тесты для isPrimeNumber
TEST(PrimeCheckTest, ZeroIsNotPrime) {
    EXPECT_FALSE(isPrimeNumber(0));
}

TEST(PrimeCheckTest, OneIsNotPrime) {
    EXPECT_FALSE(isPrimeNumber(1));
}

TEST(PrimeCheckTest, TwoIsPrime) {
    EXPECT_TRUE(isPrimeNumber(2));
}

TEST(PrimeCheckTest, ThreeIsPrime) {
    EXPECT_TRUE(isPrimeNumber(3));
}

TEST(PrimeCheckTest, FourIsNotPrime) {
    EXPECT_FALSE(isPrimeNumber(4));
}

TEST(PrimeCheckTest, SeventeenIsPrime) {
    EXPECT_TRUE(isPrimeNumber(17));
}

TEST(PrimeCheckTest, HundredIsNotPrime) {
    EXPECT_FALSE(isPrimeNumber(100));
}

TEST(PrimeCheckTest, LargePrime) {
    EXPECT_TRUE(isPrimeNumber(7919));
}

// Тесты для getNthPrime
TEST(NthPrimeTest, FirstPrime) {
    EXPECT_EQ(getNthPrime(1), 2);
}

TEST(NthPrimeTest, SecondPrime) {
    EXPECT_EQ(getNthPrime(2), 3);
}

TEST(NthPrimeTest, ThirdPrime) {
    EXPECT_EQ(getNthPrime(3), 5);
}

TEST(NthPrimeTest, TenthPrime) {
    EXPECT_EQ(getNthPrime(10), 29);
}

// Тесты для findNextPrime
TEST(NextPrimeTest, AfterFour) {
    EXPECT_EQ(findNextPrime(4), 5);
}

TEST(NextPrimeTest, AfterEleven) {
    EXPECT_EQ(findNextPrime(11), 13);
}

TEST(NextPrimeTest, AfterSeventeen) {
    EXPECT_EQ(findNextPrime(17), 19);
}

TEST(NextPrimeTest, AfterTwenty) {
    EXPECT_EQ(findNextPrime(20), 23);
}

// Тесты для sumPrimesUpTo
TEST(SumPrimeTest, UpToTen) {
    EXPECT_EQ(sumPrimesUpTo(10), 17);  // 2+3+5+7 = 17
}

TEST(SumPrimeTest, UpToTwenty) {
    EXPECT_EQ(sumPrimesUpTo(20), 77);  // 2+3+5+7+11+13+17+19 = 77
}

TEST(SumPrimeTest, UpToTwo) {
    EXPECT_EQ(sumPrimesUpTo(2), 0);
}

TEST(SumPrimeTest, UpToOne) {
    EXPECT_EQ(sumPrimesUpTo(1), 0);
}
