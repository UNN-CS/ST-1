<<<<<<< HEAD
// Copyright 2026 Klimovich V.O.
#include <gtest/gtest.h>
#include <cstdint>

bool checkPrime(uint64_t value);
uint64_t nPrime(uint64_t n);
uint64_t nextPrime(uint64_t value);
uint64_t sumPrime(uint64_t hbound);

TEST(CheckPrimeTest, ZeroAndOne) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, PrimeTwo) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, SmallPrimes) {
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrimeTest, EvenComposites) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(100));
}

TEST(CheckPrimeTest, OddComposites) {
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(15));
    EXPECT_FALSE(checkPrime(21));
    EXPECT_FALSE(checkPrime(49));
}

TEST(NPrimeTest, ZeroInput) {
    EXPECT_EQ(nPrime(0), 0);
}

TEST(NPrimeTest, FirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, FirstFew) {
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, TenthPrime) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(NextPrimeTest, FromComposite) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(6), 7);
    EXPECT_EQ(nextPrime(8), 11);
}

TEST(NextPrimeTest, FromPrime) {
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(17), 19);
}

TEST(NextPrimeTest, SmallValues) {
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(SumPrimeTest, EmptyRange) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(SumPrimeTest, UpToTen) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, UpToTwenty) {
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, UpToOneHundred) {
    EXPECT_EQ(sumPrime(100), 1060);
}
=======
// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, sumPrime1) {
  EXPECT_EQ(142913828922ULL, sumPrime(2000000));
}
TEST(st1, sumPrime2) {
  EXPECT_EQ(17ULL, sumPrime(10));
}

TEST(checkPrime, zero) {
  EXPECT_FALSE(checkPrime(0));
}
TEST(checkPrime, one) {
  EXPECT_FALSE(checkPrime(1));
}
TEST(checkPrime, two) {
  EXPECT_TRUE(checkPrime(2));
}
TEST(checkPrime, four) {
  EXPECT_FALSE(checkPrime(4));
}
TEST(checkPrime, prime97) {
  EXPECT_TRUE(checkPrime(97));
}
TEST(checkPrime, composite21) {
  EXPECT_FALSE(checkPrime(21));
}
TEST(checkPrime, prime7919) {
  EXPECT_TRUE(checkPrime(7919));
}
TEST(checkPrime, million) {
  EXPECT_FALSE(checkPrime(1000000));
}

TEST(nPrime, zero) {
  EXPECT_EQ(0ULL, nPrime(0));
}
TEST(nPrime, first) {
  EXPECT_EQ(2ULL, nPrime(1));
}
TEST(nPrime, second) {
  EXPECT_EQ(3ULL, nPrime(2));
}
TEST(nPrime, fifth) {
  EXPECT_EQ(11ULL, nPrime(5));
}
TEST(nPrime, tenth) {
  EXPECT_EQ(29ULL, nPrime(10));
}
TEST(nPrime, hundredth) {
  EXPECT_EQ(541ULL, nPrime(100));
}

TEST(nextPrime, afterTwo) {
  EXPECT_EQ(3ULL, nextPrime(2));
}
TEST(nextPrime, afterComposite) {
  EXPECT_EQ(5ULL, nextPrime(4));
}
TEST(nextPrime, afterPrime) {
  EXPECT_EQ(13ULL, nextPrime(11));
}
TEST(nextPrime, afterTen) {
  EXPECT_EQ(11ULL, nextPrime(10));
}
TEST(nextPrime, afterHundred) {
  EXPECT_EQ(101ULL, nextPrime(100));
}

TEST(sumPrime, beforeTwo) {
  EXPECT_EQ(0ULL, sumPrime(2));
}
TEST(sumPrime, beforeThree) {
  EXPECT_EQ(2ULL, sumPrime(3));
}
TEST(sumPrime, beforeTen) {
  EXPECT_EQ(17ULL, sumPrime(10));
}
TEST(sumPrime, beforeThirty) {
  EXPECT_EQ(129ULL, sumPrime(30));
}
TEST(sumPrime, beforeHundred) {
  EXPECT_EQ(1060ULL, sumPrime(100));
}
>>>>>>> 566a3a353ca7379720bbabadbce79d98c2d8a92b
