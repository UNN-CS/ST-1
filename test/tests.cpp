// Copyright 2024 Saratova Marina
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeFunctionsTest, CheckPrime) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_TRUE(checkPrime(11));
}

TEST(PrimeFunctionsTest, NthPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(20), 71);
}

TEST(PrimeFunctionsTest, NextPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(23), 29);
    EXPECT_EQ(nextPrime(50), 53);
}

TEST(PrimeFunctionsTest, SumPrime) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
    EXPECT_EQ(sumPrime(100), 1060);
    EXPECT_EQ(sumPrime(200), 4227);
    EXPECT_EQ(sumPrime(500), 21536);
}

TEST(PrimeFunctionsTest, PrimeSumBelowTen) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(PrimeFunctionsTest, PrimeSumBelowHundred) {
    EXPECT_EQ(sumPrime(100), 1060);
}

TEST(PrimeFunctionsTest, PrimeSumBelowThousand) {
    EXPECT_EQ(sumPrime(1000), 76127);
}

TEST(PrimeFunctionsTest, PrimeSumBelowTenThousand) {
    EXPECT_EQ(sumPrime(10000), 5736396);
}

TEST(PrimeFunctionsTest, PrimeSumBelowHundredThousand) {
    EXPECT_EQ(sumPrime(100000), 454396537);
}
