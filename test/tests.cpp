// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime1) {
    bool res = checkPrime(0);
    EXPECT_FALSE(res);
}

TEST(st1, checkPrime2) {
    bool res = checkPrime(1);
    EXPECT_FALSE(res);
}

TEST(st1, checkPrime3) {
    bool res = checkPrime(2);
    EXPECT_TRUE(res);
}

TEST(st1, checkPrime4) {
    bool res = checkPrime(3);
    EXPECT_TRUE(res);
}

TEST(st1, checkPrime5) {
    bool res = checkPrime(4);
    EXPECT_FALSE(res);
}

TEST(st1, checkPrime6) {
    bool res = checkPrime(409);
    EXPECT_TRUE(res);
}

TEST(st1, nPrime1) {
    uint64_t res = nPrime(1);
    EXPECT_EQ(2, res);
}

TEST(st1, nPrime2) {
    uint64_t res = nPrime(2);
    EXPECT_EQ(3, res);
}

TEST(st1, nPrime3) {
    uint64_t res = nPrime(10);
    EXPECT_EQ(29, res);
}

TEST(st1, nPrime4) {
    uint64_t res = nPrime(20);
    EXPECT_EQ(71, res);
}

TEST(st1, nPrime5) {
    uint64_t res = nPrime(30);
    EXPECT_EQ(113, res);
}

TEST(st1, nextPrime1) {
    uint64_t res = nextPrime(1);
    EXPECT_EQ(2, res);
}

TEST(st1, nextPrime2) {
    uint64_t res = nextPrime(2);
    EXPECT_EQ(3, res);
}

TEST(st1, nextPrime3) {
    uint64_t res = nextPrime(10);
    EXPECT_EQ(11, res);
}

TEST(st1, nextPrime4) {
    uint64_t res = nextPrime(45);
    EXPECT_EQ(47, res);
}

TEST(st1, nextPrime5) {
    uint64_t res = nextPrime(104);
    EXPECT_EQ(107, res);
}

TEST(st1, sumPrime1) {
    uint64_t res = sumPrime(11);
    EXPECT_EQ(17, res);
}

TEST(st1, sumPrime2) {
    uint64_t res = sumPrime(24);
    EXPECT_EQ(100, res);
}

TEST(st1, sumPrime3) {
    uint64_t res = sumPrime(120);
    EXPECT_EQ(1593, res);
}
