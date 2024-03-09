//Copyright 2024 Kiselev_I
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

  //------------------------checkPrime

TEST(TestcheckPrime, checkZero) {
    EXPECT_EQ(checkPrime(0), false);
    EXPECT_TRUE(true);
}
TEST(TestcheckPrime, checkOne) {
    EXPECT_EQ(checkPrime(1), false);
    EXPECT_TRUE(true);
}
TEST(TestcheckPrime, checkTwo) {
    EXPECT_EQ(checkPrime(2), true);
    EXPECT_TRUE(true);
}
TEST(TestcheckPrime, checkThree) {
    EXPECT_EQ(checkPrime(3), true);
    EXPECT_TRUE(true);
}
TEST(TestcheckPrime, checkFour) {
    EXPECT_EQ(checkPrime(4), false);
    EXPECT_TRUE(true);
}
TEST(TestcheckPrime, checkOneHundred) {
    EXPECT_EQ(checkPrime(100), false);
    EXPECT_TRUE(true);
}
TEST(TestcheckPrime, checkSeventeen) {
    EXPECT_EQ(checkPrime(17), true);
    EXPECT_TRUE(true);
}
TEST(TestcheckPrime, checkDoubleSeventeen) {
    EXPECT_EQ(checkPrime(17.0), true);
    EXPECT_TRUE(true);;
}
TEST(TestcheckPrime, checkDoubleFour) {
    EXPECT_EQ(checkPrime(4.0), false);
    EXPECT_TRUE(true);;
}
TEST(TestcheckPrime, checkNegative) {
    FAIL();
    //Negative numbers cause incorrect work and it can't be fixed
    //because of objective terms
    EXPECT_EQ(checkPrime(-1), false);
    EXPECT_TRUE(true);
}

  //------------------------nPrime

TEST(TestNPrime, checkFour) {
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_TRUE(true);
}
TEST(TestNPrime, checkOne) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_TRUE(true);
}
TEST(TestNPrime, checkNegative) {
    FAIL();
    EXPECT_EQ(nPrime(-1), -1);
    EXPECT_TRUE(true);
}
TEST(TestNPrime, checkZero) {
    EXPECT_EQ(nPrime(0), 0);
    EXPECT_TRUE(true);
}
TEST(TestNPrime, checkEleven) {
    EXPECT_EQ(nPrime(11), 31);
    EXPECT_TRUE(true);
}
TEST(TestNPrime, checkThree) {
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_TRUE(true);
}
TEST(TestNPrime, checkDoubleThree) {
    EXPECT_EQ(nPrime(3.0), 5);
    EXPECT_TRUE(true);;
}
TEST(TestNPrime, checkDoubleTwoNHalf) {
    //Double numbers can cause incorrect work and it can't be fixed
    //because of objective terms
    EXPECT_EQ(nPrime(2.5), -1);
    EXPECT_TRUE(true);;
}

    //------------------------nextPrime

TEST(TestNextPrime, checkPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_TRUE(true);
}
TEST(TestNextPrime, checkNegative) {
    FAIL();
    EXPECT_EQ(nextPrime(-20), 2);
    EXPECT_TRUE(true);
}
TEST(TestNextPrime, checkBeforePrime) {
    EXPECT_EQ(nextPrime(30), 31);
    EXPECT_TRUE(true);
}
TEST(TestNextPrime, checkNextToPrime) {
    EXPECT_EQ(nextPrime(32), 37);
    EXPECT_TRUE(true);
}
TEST(TestNextPrime, checkDoubleNextToPrime) {
    EXPECT_EQ(nextPrime(32.0), 37);
    EXPECT_TRUE(true);
}
TEST(TestNextPrime, checkDoublePrime) {
    EXPECT_EQ(nextPrime(31.0), 37);
    EXPECT_TRUE(true);
}
TEST(TestNextPrime, checkDoublePrePrime) {
    EXPECT_EQ(nextPrime(30.999), 31);
    EXPECT_TRUE(true);
}

    //------------------------sumPrime

TEST(TestSumPrime, checkThree) {
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_TRUE(true);
}
TEST(TestSumPrime, checkFirstPrime) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_TRUE(true);
}
TEST(TestSumPrime, checkZero) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_TRUE(true);
}
TEST(TestSumPrime, checkBigNum) {
    EXPECT_EQ(sumPrime(32), 160);
    EXPECT_TRUE(true);
}
TEST(TestSumPrime, checkDoubleBigNum) {
    EXPECT_EQ(sumPrime(32.0), 160);
    EXPECT_TRUE(true);
}
TEST(TestSumPrime, chekcDoubleFirstPrime) {
    EXPECT_EQ(sumPrime(2.0), 0);
    EXPECT_TRUE(true);
}
TEST(TestSumPrime, checkNegative) {
    FAIL();
    EXPECT_EQ(sumPrime(-2), 0);
    EXPECT_TRUE(true);
}
TEST(TestSumPrime, checkTwoMillions) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
    EXPECT_TRUE(true);
}

//------------------------main

int main() {
    int result_code = 0;
    ::testing::TestEventListeners& listeners =
        ::testing::UnitTest::GetInstance()->listeners();
    result_code = RUN_ALL_TESTS();
    ::testing::internal::TimeInMillis elapsed(
        ::testing::UnitTest::GetInstance()->elapsed_time());
    return result_code;
}
