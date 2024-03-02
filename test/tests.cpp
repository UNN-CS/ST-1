// Copyright 2024 Kashin Stepan
#include <gtest/gtest.h>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include "alg.h"

TEST(checkPrime, testConstatValue) {
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_FALSE(checkPrime(128));
    EXPECT_FALSE(checkPrime(1024));
}


TEST(checkPrime, testBigConstantValue) {
    EXPECT_TRUE(checkPrime(1e9 + 7));
    EXPECT_TRUE(checkPrime(1e9 + 9));
    EXPECT_TRUE(checkPrime(998'244'353));
}

TEST(checkPrime, testRandomFalse) {
    uint32_t seed = time(0);
    int n = 10;
    for (int i = 0; i < n; i++) {
        uint64_t value = rand_r(&seed) % 1'000'000'000;
        EXPECT_FALSE(checkPrime(value * value));
    }
}

TEST(checkPrime, testErrorValues) {
    // EXPECT_FALSE(checkPrime(-999999)); uint64_t => Max uint64_t -999999
    // EXPECT_FALSE(checkPrime(-1)); uint64_t -1 => Max uint64_t
    EXPECT_FALSE(checkPrime(0));
}

TEST(nPrime, testConstValueN) {
    EXPECT_EQ(2, nPrime(1));
    EXPECT_EQ(3, nPrime(2));
    EXPECT_EQ(5, nPrime(3));
}

TEST(nPrime, testBigConstValueN) {
    EXPECT_EQ(1299709, nPrime(100000));
    EXPECT_EQ(1299721, nPrime(100000));
}

TEST(nextPrime, testConstValueNext) {
    EXPECT_EQ(2, nextPrime(0));
    EXPECT_EQ(2, nextPrime(1));
    EXPECT_EQ(11, nextPrime(7));
}

TEST(nextPrime, testBigConstValueNext) {
    EXPECT_EQ(1e9 + 7, nextPrime(1e9));
    EXPECT_EQ(1e9 + 9, nextPrime(1e9 + 7));
}

TEST(sumPrime, testConstValueSum) {
    EXPECT_EQ(0, sumPrime(1));
    EXPECT_EQ(17, sumPrime(10));
    EXPECT_EQ(1060, sumPrime(100));
}

TEST(sumPrime, testBiGConstValueSum) {
    EXPECT_EQ(37550402023, sumPrime(1e6));
}
