// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include "alg.h"

// Тесты для checkPrime
TEST(PrimeTest, CheckPrimeBasic) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_TRUE(checkPrime(7));
}

TEST(PrimeTest, CheckPrimeLarge) {
    EXPECT_TRUE(checkPrime(97));
    EXPECT_TRUE(checkPrime(101));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_TRUE(checkPrime(997));
}

TEST(PrimeTest, CheckPrimeEven) {
    EXPECT_FALSE(checkPrime(10));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_FALSE(checkPrime(1000));
}

// Тесты для nPrime
TEST(NPrimeTest, FirstFivePrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, TenthPrime) {
    EXPECT_EQ(nPrime(10), 29);  // 2,3,5,7,11,13,17,19,23,29
}

TEST(NPrimeTest, ZeroCase) {
    EXPECT_EQ(nPrime(0), 0);
}

// Тесты для nextPrime
TEST(NextPrimeTest, BasicCases) {
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, PrimeInput) {
    EXPECT_EQ(nextPrime(13), 17);
    EXPECT_EQ(nextPrime(31), 37);
}

// Тесты для sumPrime
TEST(SumPrimeTest, SmallBounds) {
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);   // 2
    EXPECT_EQ(sumPrime(4), 2);   // 2
    EXPECT_EQ(sumPrime(5), 5);   // 2+3
    EXPECT_EQ(sumPrime(10), 17); // 2+3+5+7
}

TEST(SumPrimeTest, SumUpTo20) {
    EXPECT_EQ(sumPrime(20), 77); // 2+3+5+7+11+13+17+19 = 77
}

// Дополнительные тесты
TEST(PrimeTest, BoundaryCases) {
    EXPECT_FALSE(checkPrime(4294967296)); // большое чётное
    EXPECT_TRUE(checkPrime(2147483647));  // простое число Мерсенна
}

TEST(NextPrimeTest, LargeValue) {
    EXPECT_EQ(nextPrime(100), 101);
    EXPECT_EQ(nextPrime(120), 127);
}

TEST(SumPrimeTest, LargeBound) {
    EXPECT_EQ(sumPrime(100), 1060);
}