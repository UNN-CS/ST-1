// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime1) {
    EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime2) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime3) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime4) {
    EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrime5) {
    EXPECT_FALSE(checkPrime(4));
}

TEST(st1, checkPrime6) {
    EXPECT_TRUE(checkPrime(5));
}

TEST(st1, checkPrime7) {
    EXPECT_TRUE(checkPrime(7));
}

TEST(st1, checkPrime8) {
    EXPECT_FALSE(checkPrime(9));
}

TEST(st1, checkPrime9) {
    EXPECT_FALSE(checkPrime(15));
}

TEST(st1, checkPrime10) {
    EXPECT_TRUE(checkPrime(17));
}

TEST(st1, nPrime1) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(st1, nPrime2) {
    EXPECT_EQ(nPrime(2), 3);
}

TEST(st1, nPrime3) {
    EXPECT_EQ(nPrime(3), 5);
}

TEST(st1, nPrime4) {
    EXPECT_EQ(nPrime(4), 7);
}

TEST(st1, nPrime5) {
    EXPECT_EQ(nPrime(5), 11);
}

TEST(st1, nPrime6) {
    EXPECT_EQ(nPrime(6), 13);
}

TEST(st1, nPrime7) {
    EXPECT_EQ(nPrime(7), 17);
}

TEST(st1, nPrime8) {
    EXPECT_EQ(nPrime(8), 19);
}

TEST(st1, nPrime9) {
    EXPECT_EQ(nPrime(9), 23);
}

TEST(st1, nPrime10) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(st1, nextPrime1) {
    EXPECT_EQ(nextPrime(0), 2);
}

TEST(st1, nextPrime2) {
    EXPECT_EQ(nextPrime(1), 2);
}

TEST(st1, nextPrime3) {
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(st1, nextPrime4) {
    EXPECT_EQ(nextPrime(3), 5);
}

TEST(st1, nextPrime5) {
    EXPECT_EQ(nextPrime(4), 5);
}

TEST(st1, nextPrime6) {
    EXPECT_EQ(nextPrime(5), 7);
}

TEST(st1, nextPrime7) {
    EXPECT_EQ(nextPrime(6), 7);
}

TEST(st1, nextPrime8) {
    EXPECT_EQ(nextPrime(7), 11);
}

TEST(st1, nextPrime9) {
    EXPECT_EQ(nextPrime(8), 11);
}

TEST(st1, nextPrime10) {
    EXPECT_EQ(nextPrime(9), 11);
}

TEST(st1, sumPrime1) {
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(st1, sumPrime2) {
    EXPECT_EQ(sumPrime(3), 2);
}

TEST(st1, sumPrime3) {
    EXPECT_EQ(sumPrime(4), 5);
}

TEST(st1, sumPrime4) {
    EXPECT_EQ(sumPrime(5), 5);
}

TEST(st1, sumPrime5) {
    EXPECT_EQ(sumPrime(6), 10);
}

TEST(st1, sumPrime6) {
    EXPECT_EQ(sumPrime(7), 10);
}

TEST(st1, sumPrime7) {
    EXPECT_EQ(sumPrime(8), 17);
}

TEST(st1, sumPrime8) {
    EXPECT_EQ(sumPrime(9), 17);
}

TEST(st1, sumPrime9) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(st1, sumPrime10) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
