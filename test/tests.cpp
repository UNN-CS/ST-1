// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeTest, CheckPrimeSmall) {
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_FALSE(checkPrime(6));
}

TEST(PrimeTest, CheckPrimeLarge) {
    EXPECT_TRUE(checkPrime(997));
    EXPECT_FALSE(checkPrime(1000));
    EXPECT_TRUE(checkPrime(1009));
}

TEST(PrimeTest, NPrimeFirst) {
    EXPECT_EQ(2, nPrime(1));
    EXPECT_EQ(3, nPrime(2));
    EXPECT_EQ(5, nPrime(3));
    EXPECT_EQ(7, nPrime(4));
    EXPECT_EQ(11, nPrime(5));
}

TEST(PrimeTest, NPrimeMore) {
    EXPECT_EQ(13, nPrime(6));
    EXPECT_EQ(17, nPrime(7));
    EXPECT_EQ(19, nPrime(8));
    EXPECT_EQ(23, nPrime(9));
    EXPECT_EQ(29, nPrime(10));
}

TEST(PrimeTest, NPrimeEdge) {
    EXPECT_EQ(0, nPrime(0));
    EXPECT_EQ(97, nPrime(25));
}

TEST(PrimeTest, NextPrimeSmall) {
    EXPECT_EQ(2, nextPrime(1));
    EXPECT_EQ(3, nextPrime(2));
    EXPECT_EQ(5, nextPrime(3));
    EXPECT_EQ(5, nextPrime(4));
    EXPECT_EQ(7, nextPrime(5));
    EXPECT_EQ(7, nextPrime(6));
}

TEST(PrimeTest, NextPrimeLarge) {
    EXPECT_EQ(11, nextPrime(10));
    EXPECT_EQ(101, nextPrime(100));
    EXPECT_EQ(107, nextPrime(105));
}

TEST(PrimeTest, SumPrimeSmall) {
    EXPECT_EQ(0, sumPrime(2));
    EXPECT_EQ(2, sumPrime(3));
    EXPECT_EQ(5, sumPrime(4));
    EXPECT_EQ(10, sumPrime(6));
    EXPECT_EQ(17, sumPrime(8));
    EXPECT_EQ(17, sumPrime(10));
}

TEST(PrimeTest, SumPrimeMedium) {
    EXPECT_EQ(17, sumPrime(11));   
    EXPECT_EQ(41, sumPrime(14));  
    EXPECT_EQ(1060, sumPrime(100));
}

TEST(PrimeTest, SumPrimeLarge) {
    uint64_t res = sumPrime(2000000);
    uint64_t expected = 142913828922;
    EXPECT_EQ(expected, res);
}
