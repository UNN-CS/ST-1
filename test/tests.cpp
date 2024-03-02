// Copyright 2024 Kriseev Mikhail
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"
TEST(ST1_PRIME_NUMBERS, checkPrime_input_one) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(ST1_PRIME_NUMBERS, checkPrime_input_prime) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
}
TEST(ST1_PRIME_NUMBERS, checkPrime_input_non_prime) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(10));
}
// UB: Нулевое простое число - 0 или 1? :)
TEST(ST1_PRIME_NUMBERS, nPrime_input_zero) {
    EXPECT_EQ(nPrime(0), 1);
}
TEST(ST1_PRIME_NUMBERS, nPrime_input_one) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(ST1_PRIME_NUMBERS, nPrime_valid_input) {
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(7), 17);
}

TEST(ST1_PRIME_NUMBERS, nextPrime_input_zero) {
    EXPECT_EQ(nextPrime(0), 2);
}
TEST(ST1_PRIME_NUMBERS, nextPrime_input_one) {
    EXPECT_EQ(nextPrime(1), 2);
}
TEST(ST1_PRIME_NUMBERS, nextPrime_prime_input) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(23), 29);
}
TEST(ST1_PRIME_NUMBERS, nextPrime_non_prime_input) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(6), 7);
    EXPECT_EQ(nextPrime(14), 17);
    EXPECT_EQ(nextPrime(24), 29);
}
TEST(ST1_PRIME_NUMBERS, sumPrime_input_zero) {
    EXPECT_EQ(sumPrime(0), 0);
}
TEST(ST1_PRIME_NUMBERS, sumPrime_input_one) {
    EXPECT_EQ(sumPrime(1), 0);
}
TEST(ST1_PRIME_NUMBERS, sumPrime_input_2) {
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(ST1_PRIME_NUMBERS, sumPrime_prime_input) {
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(5), 5);
    EXPECT_EQ(sumPrime(13), 28);
}

TEST(ST1_PRIME_NUMBERS, sumPrime_non_prime_input) {
    EXPECT_EQ(sumPrime(4), 5);
    EXPECT_EQ(sumPrime(6), 10);
    EXPECT_EQ(sumPrime(14), 41);
}
TEST(ST1_PRIME_NUMBERS, sumPrime_2000000) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
