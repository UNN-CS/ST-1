// Copyright 2024 Yurin Andrey

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(CheckPrime, smallPositiveValues) {
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_FALSE(checkPrime(143));
}

TEST(CheckPrime, numbersLessThanTwo) {
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(0));
}

TEST(CheckPrime, extremeValues) {
    EXPECT_FALSE(checkPrime(UINT64_MAX));
    EXPECT_TRUE(checkPrime(18446744073709551557ULL));
}

TEST(NPrime, smallPositiveValues) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(3), 5);
}


TEST(NPrime, bigValues) {
    EXPECT_EQ(nPrime(283000), 3997859);
}

//TEST(NPrime, extremeValue) {
//    // Без шансов
//    EXPECT_NO_THROW(nPrime(UINT64_MAX));
//}

TEST(NextPrime, smallValues) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
}

TEST(NextPrime, anyValues) {
    EXPECT_EQ(nextPrime(142), 149);
    EXPECT_EQ(nextPrime(123456789), 123456791);
}

TEST(NextPrime, extremeValue) {
    EXPECT_EQ(nextPrime(18446744073709551550ULL), 18446744073709551557ULL);
    EXPECT_NE(nextPrime(UINT64_MAX), 2);
}

TEST(SumPrime, smallValues) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
}

TEST(SumPrime, anyValues) {
    EXPECT_EQ(sumPrime(120), 1593);
    EXPECT_EQ(sumPrime(1593), 182109);
}

TEST(SumPrime, sumOfPrimesLessThanTwoMillion) {
    EXPECT_EQ(sumPrime(2e6), 142913828922);
}
