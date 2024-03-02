// Copyright 2024 Khodyrev Fedor
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(algtest, test_small_prime_numbers) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
}

TEST(algtest, test_big_prime_numbers) {
    EXPECT_TRUE(checkPrime(982451653));
    EXPECT_TRUE(checkPrime(982451629));
    EXPECT_TRUE(checkPrime(982451609));
    EXPECT_TRUE(checkPrime(982451567));
    EXPECT_TRUE(checkPrime(982451549));
}

TEST(algtest, test_negative_number_is_not_prime) {
    EXPECT_FALSE(checkPrime(-2));
    EXPECT_FALSE(checkPrime(-3));
    EXPECT_FALSE(checkPrime(-5));
    EXPECT_FALSE(checkPrime(-982451651));
    EXPECT_FALSE(checkPrime(-982451549));
}

TEST(algtest, test_positions_of_small_prime_number) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(algtest, test_positions_of_big_prime_number) {
    EXPECT_EQ(nPrime(1000), 7919);
    EXPECT_EQ(nPrime(10000), 104729);
    EXPECT_EQ(nPrime(100000), 1299709);
}

TEST(algtest, test_next_prime_for_small_numbers) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(11), 13);
}

TEST(algtest, test_next_prime_for_big_numbers) {
    EXPECT_EQ(nextPrime(982451549), 982451567);
    EXPECT_EQ(nextPrime(982451567), 982451579);
    EXPECT_EQ(nextPrime(982451629), 982451653);
}

TEST(algtest, test_next_prime_for_negative_numbers) {
    EXPECT_EQ(nextPrime(-3), 2);
    EXPECT_EQ(nextPrime(-5), 2);
    EXPECT_EQ(nextPrime(-7), 2);
    EXPECT_EQ(nextPrime(-11), 2);
    EXPECT_EQ(nextPrime(-13), 2);
}

TEST(algtest, test_sum_of_prime_numbers_for_small_numbers) {
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(5), 5);
    EXPECT_EQ(sumPrime(7), 10);
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(13), 28);
}

TEST(algtest, test_sum_of_prime_for_big_numbers) {
    EXPECT_EQ(sumPrime(1000), 76127);
    EXPECT_EQ(sumPrime(10000), 5736396);
    EXPECT_EQ(sumPrime(100000), 454396537);
}

TEST(algtest, second_task) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
