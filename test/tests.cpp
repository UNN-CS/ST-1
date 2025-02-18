// Copyright 2025 UNN-CS
#include <gtest/gtest.h>

#include <cstdint>

#include "alg.h"

TEST(CheckPrimeTest, CheckPrime1) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, CheckPrime2) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(CheckPrimeTest, CheckPrime3) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(CheckPrimeTest, CheckPrime4) {
  EXPECT_TRUE(checkPrime(13));
}

TEST(CheckPrimeTest, CheckPrime5) {
  EXPECT_FALSE(checkPrime(15));
}

TEST(NPrimeTest, NPrime1) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, NPrime2) {
  EXPECT_EQ(nPrime(2), 3);
}

TEST(NPrimeTest, NPrime3) {
  EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, NPrime4) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(NPrimeTest, NPrime5) {
  EXPECT_EQ(nPrime(20), 71);
}

// Тесты для функции nextPrime
TEST(NextPrimeTest, NextPrime1) {
  EXPECT_EQ(nextPrime(4), 5);
}

TEST(NextPrimeTest, NextPrime2) {
  EXPECT_EQ(nextPrime(11), 13);
}

TEST(NextPrimeTest, NextPrime3) {
  EXPECT_EQ(nextPrime(20), 23);
}

TEST(NextPrimeTest, NextPrime4) {
  EXPECT_EQ(nextPrime(100), 101);
}

TEST(NextPrimeTest, NextPrime5) {
  EXPECT_EQ(nextPrime(1000), 1009);
}

TEST(SumPrimeTest, SumPrime1) {
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, SumPrime2) {
  EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, SumPrime3) {
  EXPECT_EQ(sumPrime(30), 129);
}

TEST(SumPrimeTest, SumPrime4) {
  EXPECT_EQ(sumPrime(50), 328);
}

TEST(SumPrimeTest, SumPrime5) {
  EXPECT_EQ(sumPrime(100), 1060);
}

TEST(SumPrimeTest, SumPrime6) {
  EXPECT_EQ(sumPrime(2000000), 142913828922);
}
