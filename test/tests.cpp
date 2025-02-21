// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"
#include <vector>

//Test checkPrime()//

TEST(TestCheckPrime, checkPrime0False) {
  uint64_t number = 0;
  EXPECT_FALSE(checkPrime(number));
}

TEST(TestCheckPrime, checkPrime1False) {
  uint64_t number = 1;
  EXPECT_FALSE(checkPrime(number));
}

TEST(TestCheckPrime, checkPrime2True) {
  uint64_t number = 2;
  EXPECT_TRUE(checkPrime(number));
}

TEST(TestCheckPrime, checkPrime4False) {
  uint64_t number = 4;
  EXPECT_FALSE(checkPrime(number));
}

TEST(TestCheckPrime, checkPrime1000False) {
  uint64_t number = 1000;
  EXPECT_FALSE(checkPrime(number));
}

TEST(TestCheckPrime, checkPrime1013True) {
  uint64_t number = 1013;
  EXPECT_TRUE(checkPrime(number));
}

//Test nPrime()//

TEST(TestNPrime, for0nPrime0) {
  uint64_t index = 0;
  uint64_t expected = 0;
  EXPECT_EQ(nPrime(index), expected);
}

TEST(TestNPrime, for1nPrime2) {
  uint64_t index = 1;
  uint64_t expected = 2;
  EXPECT_EQ(nPrime(index), expected);
}

TEST(TestNPrime, for10nPrime29) {
  uint64_t index = 10;
  uint64_t expected = 29;
  EXPECT_EQ(nPrime(index), expected);
}

TEST(TestNPrime, for100nPrime541) {
  uint64_t index = 100;
  uint64_t expected = 541;
  EXPECT_EQ(nPrime(index), expected);
}

//Test nextPrime()//

TEST(TestNextPrime, for0nextPrime2) {
  uint64_t number = 0;
  uint64_t expected = 2;
  EXPECT_EQ(nextPrime(number), expected);
}

TEST(TestNextPrime, for1nextPrime2) {
  uint64_t number = 1;
  uint64_t expected = 2;
  EXPECT_EQ(nextPrime(number), expected);
}

TEST(TestNextPrime, for2nextPrime3) {
  uint64_t number = 2;
  uint64_t expected = 3;
  EXPECT_EQ(nextPrime(number), expected);
}

TEST(TestNextPrime, for3nextPrime5) {
  uint64_t number = 3;
  uint64_t expected = 5;
  EXPECT_EQ(nextPrime(number), expected);
}

TEST(TestNextPrime, for4nextPrime5) {
  uint64_t number = 4;
  uint64_t expected = 5;
  EXPECT_EQ(nextPrime(number), expected);
}

TEST(TestNextPrime, for5nextPrime7) {
  uint64_t number = 5;
  uint64_t expected = 7;
  EXPECT_EQ(nextPrime(number), expected);
}

TEST(TestNextPrime, for50nextPrime53) {
  uint64_t number = 50;
  uint64_t expected = 53;
  EXPECT_EQ(nextPrime(number), expected);
}

TEST(TestNextPrime, for1000nextPrime1009) {
  uint64_t number = 1000;
  uint64_t expected = 1009;
  EXPECT_EQ(nextPrime(number), expected);
}

//Test sumPrime()//

TEST(TestSumPrime, for0sumPrime0) {
  uint64_t hbound = 0;
  uint64_t expected = 0;
  EXPECT_EQ(sumPrime(hbound), expected);
}

TEST(TestSumPrime, for1sumPrime0) {
  uint64_t hbound = 1;
  uint64_t expected = 0;
  EXPECT_EQ(sumPrime(hbound), expected);
}

TEST(TestSumPrime, for2sumPrime0) {
  uint64_t hbound = 2;
  uint64_t expected = 0;
  EXPECT_EQ(sumPrime(hbound), expected);
}

TEST(TestSumPrime, for3sumPrime2) {
  uint64_t hbound = 3;
  uint64_t expected = 2;
  EXPECT_EQ(sumPrime(hbound), expected);
}

TEST(TestSumPrime, for4sumPrime5) {
  uint64_t hbound = 4;
  uint64_t expected = 5;
  EXPECT_EQ(sumPrime(hbound), expected);
}

TEST(TestSumPrime, for10sumPrime17) {
  uint64_t hbound = 10;
  uint64_t expected = 17;
  EXPECT_EQ(sumPrime(hbound), expected);
}

TEST(TestSumPrime, for20sumPrime77) {
  uint64_t hbound = 20;
  uint64_t expected = 77;
  EXPECT_EQ(sumPrime(hbound), expected);
}

//st1//

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
