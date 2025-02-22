// Copyright 2025 UNN-CS
// Copyright 2025 Zinoviev Alexander

#include <gtest/gtest.h>
#include <cstdint>


TEST(SumPrimeTests, SumPrime1) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTests, SumPrime2) {
    EXPECT_EQ(sumPrime(20), 77);
    EXPECT_EQ(sumPrime(50), 328);
    EXPECT_EQ(sumPrime(100), 1060);
}

TEST(SumPrimeTests, SumPrime3) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}

TEST(CheckPrimeTests, CheckPrime1) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
}

TEST(CheckPrimeTests, CheckPrime2) {
    EXPECT_TRUE(checkPrime(29));
    EXPECT_TRUE(checkPrime(997));
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTests, CheckPrime3) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_FALSE(checkPrime(1000));
}

TEST(NPrimeTests, NPrime1) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
}

TEST(NPrimeTests, NPrime2) {
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(20), 71);
    EXPECT_EQ(nPrime(50), 229);
}

TEST(NPrimeTests, NPrime3) {
    EXPECT_EQ(nPrime(100), 541);
}

TEST(NextPrimeTests, NextPrime1) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(29), 31);
}

TEST(NextPrimeTests, NextPrime2) {
    EXPECT_EQ(nextPrime(100), 101);
    EXPECT_EQ(nextPrime(500), 503);
    EXPECT_EQ(nextPrime(1000), 1009);
}
