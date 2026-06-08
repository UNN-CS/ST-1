// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, BoundaryValues_0and1and2) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, PrimeNumbers_Small_11and13and17) {
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_TRUE(checkPrime(17));
}

TEST(CheckPrimeTest, CompositeNumbers_Squares_35and49) {
    EXPECT_FALSE(checkPrime(35));
    EXPECT_FALSE(checkPrime(49));
}

TEST(CheckPrimeTest, PrimeNumbers_Large_103and107) {
    EXPECT_TRUE(checkPrime(103));
    EXPECT_TRUE(checkPrime(107));
}

TEST(CheckPrimeTest, CompositeNumbers_Large_111and121) {
    EXPECT_FALSE(checkPrime(111));
    EXPECT_FALSE(checkPrime(121));
}

TEST(NPrimeTest, ZeroIndex_Returns0) {
    EXPECT_EQ(nPrime(0), 0);
}

TEST(NPrimeTest, FirstPrime_Returns2) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, SmallIndices_4and5and7) {
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(7), 17);
}

TEST(NPrimeTest, LargerIndices_12and18) {
    EXPECT_EQ(nPrime(12), 37);
    EXPECT_EQ(nPrime(18), 61);
}

TEST(NextPrimeTest, AfterSmallComposite_4and6) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(6), 7);
}

TEST(NextPrimeTest, AfterPrime_23and29and40) {
    EXPECT_EQ(nextPrime(23), 29);
    EXPECT_EQ(nextPrime(29), 31);
    EXPECT_EQ(nextPrime(40), 41);
}

TEST(NextPrimeTest, AfterLargerComposite_48and56) {
    EXPECT_EQ(nextPrime(48), 53);
    EXPECT_EQ(nextPrime(56), 59);
}

TEST(SumPrimeTest, BoundaryValues_0and1and2) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(SumPrimeTest, SmallBounds_7and10and18) {
    EXPECT_EQ(sumPrime(7), 10);
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(18), 58);
}

TEST(SumPrimeTest, MediumBounds_25and35) {
    EXPECT_EQ(sumPrime(25), 100);
    EXPECT_EQ(sumPrime(35), 160);
}

TEST(SumPrimeTest, LargeBound_55) {
    EXPECT_EQ(sumPrime(55), 381);
}

TEST(SumPrimeTest, VeryLargeBound_100) {
    EXPECT_EQ(sumPrime(100), 1060);
}
