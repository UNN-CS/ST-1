// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, ValueZero) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(CheckPrimeTest, ValueFive) {
  EXPECT_TRUE(checkPrime(5));
}

TEST(CheckPrimeTest, ValueTwentyOne) {
  EXPECT_FALSE(checkPrime(21));
}

TEST(CheckPrimeTest, ValueFiftyThree) {
  EXPECT_TRUE(checkPrime(53));
}

TEST(CheckPrimeTest, ValueHundred) {
  EXPECT_FALSE(checkPrime(100));
}

TEST(CheckPrimeTest, LargePrimeTest) {
  EXPECT_TRUE(checkPrime(1000000007));
}

TEST(CheckPrimeTest, LargeNonPrimeTest) {
  EXPECT_FALSE(checkPrime(1000000000));
}

TEST(NPrimeTest, ThirdPrime) {
  EXPECT_EQ(nPrime(3), 5);
}

TEST(NPrimeTest, SeventhPrime) {
  EXPECT_EQ(nPrime(7), 17);
}

TEST(NPrimeTest, FifteenthPrime) {
  EXPECT_EQ(nPrime(15), 47);
}

TEST(NPrimeTest, TwentiethPrime) {
  EXPECT_EQ(nPrime(20), 71);
}

TEST(NPrimeTest, ThirtySecondPrime) {
  EXPECT_EQ(nPrime(32), 131);
}

TEST(NextPrimeTest, AfterTwentyFive) {
  EXPECT_EQ(nextPrime(25), 29);
}

TEST(NextPrimeTest, AfterSixty) {
  EXPECT_EQ(nextPrime(60), 61);
}

TEST(NextPrimeTest, AfterNinetyEight) {
  EXPECT_EQ(nextPrime(98), 101);
}

TEST(NextPrimeTest, AfterHundredAndFiftyThree) {
  EXPECT_EQ(nextPrime(153), 157);
}

TEST(NextPrimeTest, AfterTwoHundred) {
  EXPECT_EQ(nextPrime(200), 211);
}

TEST(SumPrimeTest, SumUpToFifty) {
  EXPECT_EQ(sumPrime(50), 328);
}

TEST(SumPrimeTest, SumUpToHundred) {
  EXPECT_EQ(sumPrime(100), 1060);
}

TEST(SumPrimeTest, SumUpToThirty) {
  EXPECT_EQ(sumPrime(30), 129);
}

TEST(SumPrimeTest, SumUpToSeventyFive) {
  EXPECT_EQ(sumPrime(75), 712);
}

TEST(SumPrimeTest, SumUpToFiveHundred) {
  EXPECT_EQ(sumPrime(500), 21536);
}

TEST(SumPrimeTest, SumUpToOneMillion) {
  EXPECT_EQ(sumPrime(1000000), 37550402023);
}
