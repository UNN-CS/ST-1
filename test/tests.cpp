// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime1) {
    EXPECT_FALSE(checkPrime(5000));
}
TEST(st1, checkPrime2) {
    EXPECT_TRUE(checkPrime(157));
}

TEST(st1, checkPrime3) {
    EXPECT_FALSE(checkPrime(75));
}
TEST(st1, checkPrime4) {
    EXPECT_TRUE(checkPrime(113));
}

TEST(st1, sumPrime1) {
    uint64_t res = sumPrime(2000000);
    uint64_t expected = 142913828922;
    EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
    uint64_t res = sumPrime(10);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
    uint64_t res = sumPrime(120);
    uint64_t expected = 1593;
    EXPECT_EQ(expected, res);
}

TEST(st1, nPrime1) {
    uint64_t res = nPrime(7);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}
TEST(st1, nPrime2) {
    uint64_t res = nPrime(40);
    uint64_t expected = 173;
    EXPECT_EQ(expected, res);
}

TEST(st1, nPrime3) {
    uint64_t res = nPrime(10);
    uint64_t expected = 29;
    EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
    uint64_t res = nextPrime(107);
    uint64_t expected = 109;
    EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime2) {
    uint64_t res = nextPrime(5);
    uint64_t expected = 7;
    EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime3) {
    uint64_t res = nextPrime(80);
    uint64_t expected = 83;
    EXPECT_EQ(expected, res);
}
