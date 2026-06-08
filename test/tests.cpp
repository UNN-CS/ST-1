// Copyright 2025 UNN-CS

#include "alg.h"
#include <gtest/gtest.h>

TEST(SumPrimeTest, Basic) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(5), 5);
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, Larger) {
  EXPECT_EQ(sumPrime(50), 328);
  EXPECT_EQ(sumPrime(100), 1060);
}

TEST(SumPrimeTest, MoreBoundaries) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(1), 0);
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(30), 129);
}

TEST(SumPrimeTest, HigherValues) {
  EXPECT_EQ(sumPrime(200), 4227);
  EXPECT_EQ(sumPrime(500), 21536);
  EXPECT_EQ(sumPrime(1000), 76127);
}

TEST(CheckPrimeTest, SmallNumbers) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_FALSE(checkPrime(8));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(10));
  EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrimeTest, MediumNumbers) {
  EXPECT_FALSE(checkPrime(25));
  EXPECT_TRUE(checkPrime(29));
  EXPECT_FALSE(checkPrime(49));
  EXPECT_TRUE(checkPrime(53));
  EXPECT_FALSE(checkPrime(121));
  EXPECT_TRUE(checkPrime(127));
}

TEST(CheckPrimeTest, MorePrimes) {
  EXPECT_TRUE(checkPrime(13));
  EXPECT_TRUE(checkPrime(17));
  EXPECT_TRUE(checkPrime(19));
  EXPECT_TRUE(checkPrime(23));
  EXPECT_TRUE(checkPrime(31));
  EXPECT_TRUE(checkPrime(37));
  EXPECT_TRUE(checkPrime(41));
  EXPECT_TRUE(checkPrime(43));
  EXPECT_TRUE(checkPrime(47));
  EXPECT_TRUE(checkPrime(53));
  EXPECT_TRUE(checkPrime(59));
  EXPECT_TRUE(checkPrime(61));
  EXPECT_TRUE(checkPrime(67));
  EXPECT_TRUE(checkPrime(71));
  EXPECT_TRUE(checkPrime(73));
  EXPECT_TRUE(checkPrime(79));
  EXPECT_TRUE(checkPrime(83));
  EXPECT_TRUE(checkPrime(89));
  EXPECT_TRUE(checkPrime(97));
}

TEST(CheckPrimeTest, MoreComposites) {
  EXPECT_FALSE(checkPrime(12));
  EXPECT_FALSE(checkPrime(14));
  EXPECT_FALSE(checkPrime(15));
  EXPECT_FALSE(checkPrime(16));
  EXPECT_FALSE(checkPrime(18));
  EXPECT_FALSE(checkPrime(20));
  EXPECT_FALSE(checkPrime(21));
  EXPECT_FALSE(checkPrime(22));
  EXPECT_FALSE(checkPrime(24));
  EXPECT_FALSE(checkPrime(26));
  EXPECT_FALSE(checkPrime(27));
  EXPECT_FALSE(checkPrime(28));
  EXPECT_FALSE(checkPrime(30));
  EXPECT_FALSE(checkPrime(32));
  EXPECT_FALSE(checkPrime(33));
  EXPECT_FALSE(checkPrime(34));
  EXPECT_FALSE(checkPrime(35));
  EXPECT_FALSE(checkPrime(36));
  EXPECT_FALSE(checkPrime(38));
  EXPECT_FALSE(checkPrime(39));
  EXPECT_FALSE(checkPrime(40));
}

TEST(CheckPrimeTest, SquaresAndProducts) {
  EXPECT_FALSE(checkPrime(64));
  EXPECT_FALSE(checkPrime(81));
  EXPECT_FALSE(checkPrime(100));
  EXPECT_FALSE(checkPrime(143));
  EXPECT_FALSE(checkPrime(289));
  EXPECT_FALSE(checkPrime(391));
}

TEST(NPrimeTest, FirstFew) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
  EXPECT_EQ(nPrime(5), 11);
  EXPECT_EQ(nPrime(6), 13);
  EXPECT_EQ(nPrime(7), 17);
  EXPECT_EQ(nPrime(8), 19);
  EXPECT_EQ(nPrime(9), 23);
  EXPECT_EQ(nPrime(10), 29);
}

TEST(NPrimeTest, Later) {
  EXPECT_EQ(nPrime(20), 71);
  EXPECT_EQ(nPrime(30), 113);
  EXPECT_EQ(nPrime(50), 229);
}

TEST(NPrimeTest, MoreIndexes) {
  EXPECT_EQ(nPrime(15), 47);
  EXPECT_EQ(nPrime(25), 97);
  EXPECT_EQ(nPrime(40), 173);
  EXPECT_EQ(nPrime(60), 281);
  EXPECT_EQ(nPrime(75), 379);
  EXPECT_EQ(nPrime(100), 541);
}

TEST(NextPrimeTest, ZeroAndOne) {
  EXPECT_EQ(nextPrime(0), 2);
  EXPECT_EQ(nextPrime(1), 2);
}

TEST(NextPrimeTest, SmallValues) {
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(3), 5);
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(5), 7);
  EXPECT_EQ(nextPrime(6), 7);
  EXPECT_EQ(nextPrime(7), 11);
  EXPECT_EQ(nextPrime(8), 11);
  EXPECT_EQ(nextPrime(9), 11);
  EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, AroundHundred) {
  EXPECT_EQ(nextPrime(99), 101);
  EXPECT_EQ(nextPrime(100), 101);
  EXPECT_EQ(nextPrime(101), 103);
  EXPECT_EQ(nextPrime(110), 113);
}

TEST(NextPrimeTest, BetweenElevenAndTwenty) {
  EXPECT_EQ(nextPrime(12), 13);
  EXPECT_EQ(nextPrime(13), 17);
  EXPECT_EQ(nextPrime(14), 17);
  EXPECT_EQ(nextPrime(15), 17);
  EXPECT_EQ(nextPrime(16), 17);
  EXPECT_EQ(nextPrime(17), 19);
  EXPECT_EQ(nextPrime(18), 19);
  EXPECT_EQ(nextPrime(19), 23);
  EXPECT_EQ(nextPrime(20), 23);
}

TEST(NextPrimeTest, AroundThirtyToFifty) {
  EXPECT_EQ(nextPrime(21), 23);
  EXPECT_EQ(nextPrime(22), 23);
  EXPECT_EQ(nextPrime(23), 29);
  EXPECT_EQ(nextPrime(24), 29);
  EXPECT_EQ(nextPrime(25), 29);
  EXPECT_EQ(nextPrime(26), 29);
  EXPECT_EQ(nextPrime(27), 29);
  EXPECT_EQ(nextPrime(28), 29);
  EXPECT_EQ(nextPrime(29), 31);
  EXPECT_EQ(nextPrime(30), 31);
  EXPECT_EQ(nextPrime(31), 37);
  EXPECT_EQ(nextPrime(32), 37);
  EXPECT_EQ(nextPrime(35), 37);
  EXPECT_EQ(nextPrime(36), 37);
  EXPECT_EQ(nextPrime(37), 41);
  EXPECT_EQ(nextPrime(40), 41);
  EXPECT_EQ(nextPrime(41), 43);
  EXPECT_EQ(nextPrime(43), 47);
  EXPECT_EQ(nextPrime(45), 47);
  EXPECT_EQ(nextPrime(47), 53);
  EXPECT_EQ(nextPrime(49), 53);
  EXPECT_EQ(nextPrime(50), 53);
}

TEST(NextPrimeTest, LargerNumbers) {
  EXPECT_EQ(nextPrime(200), 211);
  EXPECT_EQ(nextPrime(500), 503);
  EXPECT_EQ(nextPrime(1000), 1009);
}
