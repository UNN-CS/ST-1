// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTests, SmallNumbers) {
    EXPECT_TRUE(checkPrime(13));
}
TEST(CheckPrimeTests, LargeNumbers) {
    EXPECT_TRUE(checkPrime(104729));
}
TEST(NPrimeTests, SmallNPrimes) {
    EXPECT_EQ(nPrime(10), 29);
}
TEST(NPrimeTests, LargerNPrimes) {
    EXPECT_EQ(nPrime(100), 541);
}
TEST(NextPrimeTests, SmallNumbers) {
    EXPECT_EQ(nextPrime(10), 11);
}
TEST(NextPrimeTests, LargeNumbers) {
    EXPECT_EQ(nextPrime(104729), 104743);
}
TEST(SumPrimeTests, Limit) {
    EXPECT_EQ(sumPrime(100), 1060);
}
TEST(CheckPrimeTests, false_case) {
    EXPECT_FALSE(checkPrime(0));
}
TEST(NPrimeTests, simpleNPrimes) {
    EXPECT_EQ(nPrime(2), 3);
}
TEST(SumPrimeTests, LimitLarge) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
