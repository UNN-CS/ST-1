// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeTest, CheckPrime2) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(PrimeTest, CheckPrime3) {
    EXPECT_TRUE(checkPrime(3));
}

TEST(PrimeTest, CheckPrime5) {
    EXPECT_TRUE(checkPrime(5));
}

TEST(PrimeTest, NPrime1) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(PrimeTest, NPrime2) {
    EXPECT_EQ(nPrime(2), 3);
}

TEST(PrimeTest, NPrime3) {
    EXPECT_EQ(nPrime(3), 5);
}

TEST(PrimeTest, NextPrimeFrom1) {
    EXPECT_EQ(nextPrime(1), 2);
}

TEST(PrimeTest, NextPrimeFrom2) {
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(PrimeTest, NextPrimeFrom3) {
    EXPECT_EQ(nextPrime(3), 5);
}

TEST(PrimeTest, SumPrimeTo2) {
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(PrimeTest, SumPrimeTo3) {
    EXPECT_EQ(sumPrime(3), 2);
}

TEST(PrimeTest, SumPrimeTo4) {
    EXPECT_EQ(sumPrime(4), 5);
}
