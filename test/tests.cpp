// Copyright 2024 Kirillov Maxim
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(TestCheckPrime, TestCheckPrimeNumbers) {
    EXPECT_TRUE(checkPrime(31));
    EXPECT_TRUE(checkPrime(131));
}

TEST(TestCheckPrime, TestCheckPrimeNumbersLarge) {
    EXPECT_TRUE(checkPrime(59753));
    EXPECT_TRUE(checkPrime(107441));
    EXPECT_FALSE(checkPrime(107442));
}

TEST(TestCheckPrime, TestCheckNotPrimeNumbers) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(TestCheckPrime, TestCheckNPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(100), 541);
}

TEST(TestCheckPrime, TestCheckNPrimeLarge) {
    EXPECT_EQ(nPrime(1697), 14479);
    EXPECT_EQ(nPrime(10000), 104729);
}

TEST(TestCheckPrime, TestCheckNextPrime) {
    EXPECT_EQ(nextPrime(17), 19);
    EXPECT_EQ(nextPrime(32), 37);
}

TEST(TestCheckPrime, TestCheckNextPrimeLarge) {
    EXPECT_EQ(nextPrime(10000), 10007);
    EXPECT_EQ(nextPrime(50000), 50021);
}

TEST(TestCheckPrime, TestSumPrime) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(50), 328);
    EXPECT_EQ(sumPrime(200), 4227);
}

TEST(TestCheckPrime, TestSumPrimeLarge) {
    EXPECT_EQ(sumPrime(2000), 277050);
    EXPECT_EQ(sumPrime(7000), 2935471);
    EXPECT_EQ(sumPrime(10000), 5736396);
}


TEST(TestCheckPrime, TestSumLowerThan2M) {
    EXPECT_EQ(sumPrime(2e6), 142913828922);
}
