// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTests, NonPositiveNumbers) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTests, CompositeNumbers) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(15));
}

TEST(CheckPrimeTests, PrimeNumbers) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(13));
}

TEST(nPrimeTests, FirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(nPrimeTests, FifthPrime) {
    EXPECT_EQ(nPrime(5), 11);
}

TEST(nPrimeTests, TenthPrime) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(NextPrimeTests, BasicNextPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
}

TEST(NextPrimeTests, AfterComposite) {
    EXPECT_EQ(nextPrime(14), 17);
    EXPECT_EQ(nextPrime(20), 23);
}

TEST(nPrimeTests, ZeroPrime) {
    EXPECT_EQ(nPrime(0), 0);
}

TEST(NextPrimeTests, NextPrimeForOne) {
    EXPECT_EQ(nextPrime(1), 2);
}
