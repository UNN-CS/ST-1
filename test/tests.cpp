// Copyright 2026 Salykina Alena

#include <gtest/gtest.h>
#include <cstdint>
#include <stdexcept>
#include "alg.h"

// ---------------- checkPrime ----------------

TEST(st1, checkPrime_One) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime_Two) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_Three) {
    EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrime_Four) {
    EXPECT_FALSE(checkPrime(4));
}

TEST(st1, checkPrime_LargePrime) {
    EXPECT_TRUE(checkPrime(104729));
}

TEST(st1, checkPrime_LargeComposite) {
    EXPECT_FALSE(checkPrime(104730));
}

// ---------------- nPrime ----------------

TEST(st1, nPrime_First) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(st1, nPrime_Second) {
    EXPECT_EQ(nPrime(2), 3);
}

TEST(st1, nPrime_Tenth) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(st1, nPrime_Hundredth) {
    EXPECT_EQ(nPrime(100), 541);
}

TEST(st1, nPrime_ZeroThrows) {
    EXPECT_THROW(nPrime(0), std::invalid_argument);
}

// ---------------- nextPrime ----------------

TEST(st1, nextPrime_FromZero) {
    EXPECT_EQ(nextPrime(0), 2);
}

TEST(st1, nextPrime_FromOne) {
    EXPECT_EQ(nextPrime(1), 2);
}

TEST(st1, nextPrime_FromPrime) {
    EXPECT_EQ(nextPrime(13), 17);
}

TEST(st1, nextPrime_FromComposite) {
    EXPECT_EQ(nextPrime(14), 17);
}

// ---------------- sumPrime ----------------

TEST(st1, sumPrime_Zero) {
    EXPECT_EQ(sumPrime(0), 0);
}

TEST(st1, sumPrime_One) {
    EXPECT_EQ(sumPrime(1), 0);
}

TEST(st1, sumPrime_Two) {
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(st1, sumPrime_Ten) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(st1, sumPrime_Twenty) {
    EXPECT_EQ(sumPrime(20), 77);
}
