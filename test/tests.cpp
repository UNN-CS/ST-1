// Copyright 2024 Smirnov

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(prime, smallnumbers) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
}

TEST(prime, compositeNumbers) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(9));
}

TEST(prime, largeNumber) {
    EXPECT_TRUE(1009);
}

TEST(nprime, first) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(nprime, five) {
    EXPECT_EQ(nPrime(5), 11);
}

TEST(nprime, ten) {
    EXPECT_EQ(nPrime(10), 29);
}


TEST(nextprime, nextprimeofsmallnumber) {
    EXPECT_EQ(nextPrime(10), 11);
}

TEST(nextprime, nextprimeoflargenumber) {
    EXPECT_EQ(nextPrime(997), 1009);
}

TEST(nextprime, nextprimeofprimenumber) {
    EXPECT_EQ(nextPrime(13), 17);
}

TEST(sumprime, sumbelowten) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(sumprime, sumbelow50) {
    EXPECT_EQ(sumPrime(50), 328);
}

TEST(SumPrimeTest, SumOfPrimesBelowTwoMillion) {
    uint64_t result = sumPrime(2000000);
    uint64_t expected_sum = 142913828922;
    EXPECT_EQ(result, expected_sum);
}
