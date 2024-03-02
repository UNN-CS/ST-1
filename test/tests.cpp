// Copyright 2024 Sokolova Daria
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(CheckPrimeTest, TestPrimeNumber) {
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(13));
}
TEST(CheckPrimeTest, TestCompositeNumber) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(10));
    EXPECT_FALSE(checkPrime(12));
}
TEST(CheckPrimeTest, TestOne) {
    EXPECT_FALSE(checkPrime(1));
}
TEST(NPrimeTest, TestSmallPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}
TEST(NPrimeTest, TestBigPrime) {
    EXPECT_EQ(nPrime(200000), 2750159);
    EXPECT_EQ(nPrime(500000), 7368787);
    EXPECT_EQ(nPrime(700000), 10570841);
}
TEST(NextPrimeTest, TestNextPrimeAfterNum) {
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(97), 101);
    EXPECT_EQ(nextPrime(500), 503);
    EXPECT_EQ(nextPrime(1000), 1009);
}

TEST(NextPrimeTest, TestNextPrimeAfterBigNum) {
    EXPECT_EQ(nextPrime(1000000007), 1000000009);
    EXPECT_EQ(nextPrime(1000000008), 1000000009);
    EXPECT_EQ(nextPrime(1000000018), 1000000021);
    EXPECT_EQ(nextPrime(1000000022), 1000000033);
}
TEST(SumPrime, TestSumSmallNum) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(11), 17);
    EXPECT_EQ(sumPrime(15), 41);
    EXPECT_EQ(sumPrime(20), 77);
}
TEST(SumPrime, TestSumBigNum) {
    EXPECT_EQ(sumPrime(30000), 45675864);
    EXPECT_EQ(sumPrime(40000), 79170666);
    EXPECT_EQ(sumPrime(50000), 121013308);
}
TEST(SumPrimeTest, TestDiffSumPrime) {
    uint64_t sum1 = sumPrime(20);
    uint64_t sum2 = sumPrime(30);
    EXPECT_EQ(sum2 - sum1, 52);
}
TEST(SumPrime, TestSumBeforeTwoMillion) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
