// Copyright 2022 Podyachikh Mikhail
#include <gtest/gtest.h>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include "alg.h"


TEST(CheckPrime, testObvious) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(12));
}

TEST(CheckPrime, BigPrimes) {
    EXPECT_TRUE(checkPrime(1e9 + 7));
    EXPECT_TRUE(checkPrime(1e9 + 9));
    EXPECT_TRUE(checkPrime(998'244'353));
}

TEST(CheckPrime, Squares) {
    uint32_t seed = time(0);
    int n = 10;
    for (int i = 0; i < n; i++) {
        uint64_t value = rand_r(&seed) % 1'000'000'000;
        EXPECT_FALSE(checkPrime(value * value));
    }
}

TEST(CheckPrime, ProductTwoBigPrimes) {
    EXPECT_FALSE(checkPrime(1'000'003LL * 1'000'003LL));
    EXPECT_FALSE(checkPrime(1'000'003LL * 1'000'033LL));
    EXPECT_FALSE(checkPrime(1'000'033LL * 1'000'033LL));
}

TEST(NPrime, testObvious) {
    EXPECT_EQ(2, nPrime(1));
    EXPECT_EQ(3, nPrime(2));
    EXPECT_EQ(5, nPrime(3));
}

TEST(NPrime, FarPrimes) {
    EXPECT_EQ(1'000'003, nPrime(78'499));
    EXPECT_EQ(1'000'033, nPrime(78'500));
}

TEST(NextPrime, testObvious) {
    EXPECT_EQ(2, nextPrime(1));
    EXPECT_EQ(3, nextPrime(2));
    EXPECT_EQ(5, nextPrime(3));
    EXPECT_EQ(5, nextPrime(4));
}

TEST(NextPrime, BigPrimes) {
    EXPECT_EQ(1e9 + 7, nextPrime(1e9));
    EXPECT_EQ(1e9 + 9, nextPrime(1e9 + 7));
}

TEST(SumPrime, testObvious) {
    EXPECT_EQ(0, sumPrime(0));
    EXPECT_EQ(0, sumPrime(1));
    EXPECT_EQ(0, sumPrime(2));
    EXPECT_EQ(2, sumPrime(3));
    EXPECT_EQ(5, sumPrime(4));
    EXPECT_EQ(5, sumPrime(5));
    EXPECT_EQ(10, sumPrime(6));
}

TEST(SumPrime, bigPrimes) {
    EXPECT_EQ(37'550'402'023, sumPrime(1e6));
}

TEST(SymPrimeByDiff, bigPrimes) {
    EXPECT_EQ(1e6 + 3, sumPrime(1e6 + 9) - sumPrime(1e6));

    // Check right bound
    EXPECT_EQ(1e6 + 3, sumPrime(1e6 + 33) - sumPrime(1e6));
    // Check left bound
    EXPECT_EQ(1e6 + 3, sumPrime(1e6 + 10) - sumPrime(1e6 + 3));
    // Check both bounds
    EXPECT_EQ(1e6 + 3, sumPrime(1e6 + 33) - sumPrime(1e6 + 3));
}

TEST(task, second) {
    EXPECT_EQ(142'913'828'922, sumPrime(2e6));
}
