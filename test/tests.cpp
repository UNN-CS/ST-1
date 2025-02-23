// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// Тесты для checkPrime
TEST(CheckPrimeTests, SmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
}

TEST(CheckPrimeTests, SmallComposites) {
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
}

TEST(CheckPrimeTests, LargePrime) {
    EXPECT_TRUE(checkPrime(7919));
}

TEST(CheckPrimeTests, LargeComposite) {
    EXPECT_FALSE(checkPrime(7920));
}

// Тесты для nPrime
TEST(NPrimeTests, FirstFewPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
}

TEST(NPrimeTests, LargerPrimeIndex) {
    EXPECT_EQ(nPrime(10), 29);
}

// Тесты для nextPrime
TEST(NextPrimeTests, BasicCases) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(13), 17);
}

TEST(NextPrimeTests, LargeNumber) {
    EXPECT_EQ(nextPrime(100), 101);
}

// Тесты для sumPrime
TEST(SumPrimeTests, BasicCases) {
    EXPECT_EQ(sumPrime(10), 17); // 2 + 3 + 5 + 7 = 17
    EXPECT_EQ(sumPrime(20), 77); // 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19 = 77
}

TEST(SumPrimeTests, LargeLimit) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
