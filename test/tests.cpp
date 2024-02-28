// Copyright 2024 Khramov Ivan
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(CheckPrime, TestSimple) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
}

TEST(CheckPrime, TestBigNum) {
    EXPECT_FALSE(checkPrime(1e9 + 2));
    EXPECT_TRUE(checkPrime(8'112'484'187));
}

TEST(CheckPrime, TestMersenne) {
    int N = 10;
    for (int n = 0; n < N; n++) {
        if (!checkPrime(n)) {
            continue;
        }
        if (!checkPrime((1 << n) - 1)) {
            FAIL();
        }
    }
    SUCCEED();
}

TEST(NPrime, TestSimple) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
}

TEST(NPrime, TestBigNum) {
    EXPECT_EQ(nPrime(30000), 350377);
    EXPECT_EQ(nPrime(60000), 746773);
}

TEST(NextPrime, TestSimple) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
}

TEST(NextPrime, TestBigNum) {
    EXPECT_EQ(nextPrime(1e9), 1e9 + 7);
}

TEST(SumPrime, TestSimple) {
    EXPECT_EQ(sumPrime(5), 5);
    EXPECT_EQ(sumPrime(7), 10);
    EXPECT_EQ(sumPrime(1), 0);
}

TEST(SumPrime, TestBigNum) {
    EXPECT_EQ(sumPrime(30000), 45'675'864);
    EXPECT_EQ(sumPrime(60000), 171'848'738);
    EXPECT_EQ(sumPrime(90000), 370'927'314);
}

TEST(SumPrime, TestDiffPrime) {
    uint64_t sum1 = sumPrime(1e6 + 3);
    uint64_t sum2 = sumPrime(1e7 + 9);
    EXPECT_EQ(sum2 - sum1, 3'165'774'592'333);
}

TEST(SumPrime, TestSumBefore2million) {
    EXPECT_EQ(sumPrime(2 * 1e6), 142913828922);
}
