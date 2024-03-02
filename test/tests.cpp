// Copyright 2022 NNTU-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrime, check_big_value) {
    EXPECT_TRUE(checkPrime(93083));
    EXPECT_FALSE(checkPrime(100000));
}
TEST(checkPrime, check_wrong_value) {
    EXPECT_FALSE(checkPrime(1));
}
TEST(checkPrime, check_works) {
    EXPECT_TRUE(checkPrime(3));
}
TEST(nPrime, check_works) {
    EXPECT_EQ(2, nPrime(1));
    EXPECT_EQ(3, nPrime(2));
    EXPECT_EQ(5, nPrime(3));
}
TEST(nPrime, check_wrong_value) {
    EXPECT_EQ(0, nPrime(0));
}
TEST(nPrime, check_large_value) {
    EXPECT_EQ(3571, nPrime(500));
}
TEST(nextPrime, check_works) {
    EXPECT_EQ(7, nextPrime(5));
}
TEST(nextPrime, check_large_value) {
    EXPECT_EQ(9973, nextPrime(9967));
}
TEST(sumPrime, check_works) {
    EXPECT_EQ(197, sumPrime(40));
}
TEST(sumPrime, check_large_value) {
    EXPECT_EQ(454396537, sumPrime(100000));
}
