// Copyright 2025 UNN-CS
#include <gtest/gtest.h>

#include <cstdint>
#include "alg.h"

TEST(sumPrimeTests, SmallRange) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(sumPrimeTests, MediumRange) {
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(sumPrimeTests, EmptyRange) {
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(sumPrimeTests, LargeRange) {
    EXPECT_EQ(sumPrime(2000000), 142913828922ULL);
}

TEST(checkPrimeTests, PrimeNumbers) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_TRUE(checkPrime(7919));
}

TEST(checkPrimeTests, NonPrimeNumbers) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(100));
}

TEST(nPrimeTests, FirstPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(10), 29);
}

TEST(nextPrimeTests, AfterSmallNumbers) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(14), 17);
}

TEST(nextPrimeTests, ConsecutivePrimes) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(5), 7);
}

TEST(nPrimeTests, LargeN) {
    EXPECT_EQ(nPrime(1000), 7919);
}
