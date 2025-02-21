// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

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

TEST(checkPrimeTestJV, 0isFalse) { EXPECT_FALSE(checkPrime(0)); }

TEST(checkPrimeTestJV, 1isFalse) { EXPECT_FALSE(checkPrime(1)); }

TEST(checkPrimeTestJV, 2isTrue) { EXPECT_TRUE(checkPrime(2)); }

TEST(checkPrimeTestJV, primeIsTrue) {
  EXPECT_TRUE(checkPrime(17));
  EXPECT_TRUE(checkPrime(47));
  EXPECT_TRUE(checkPrime(19));
  EXPECT_TRUE(checkPrime(43));
  EXPECT_TRUE(checkPrime(13));
}

TEST(checkPrimeTestJV, notPrimeIsFalse1) {
  EXPECT_FALSE(checkPrime(45));
  EXPECT_FALSE(checkPrime(49));
  EXPECT_FALSE(checkPrime(21));
  EXPECT_FALSE(checkPrime(63));
  EXPECT_FALSE(checkPrime(55));
}

TEST(checkPrimeTestJV, notPrimeIsFalse2) {
  EXPECT_FALSE(checkPrime(90));
  EXPECT_FALSE(checkPrime(12));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(98));
}

TEST(checkPrimeTestJV, BigPrimeIsTrue) { EXPECT_TRUE(checkPrime(11117)); }

TEST(nPrimeTestJV, ZeroThrow) { EXPECT_ANY_THROW(nPrime(0)); }

TEST(nPrimeTestJV, CorrectAnsTest) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(9), 23);
  EXPECT_EQ(nPrime(15), 47);
  EXPECT_EQ(nPrime(39), 167);
}

TEST(nextPrimeTestJV, zeroTest) { EXPECT_EQ(nextPrime(0), 2); }

TEST(nextPrimeTestJV, firstNumTest) { EXPECT_EQ(nextPrime(1), 2); }

TEST(nextPrimeTestJV, exactHitNumTest) { EXPECT_EQ(nextPrime(7), 11); }

TEST(nextPrimeTestJV, correctAnsTest) {
  EXPECT_EQ(nextPrime(97), 101);
  EXPECT_EQ(nextPrime(397), 401);
  EXPECT_EQ(nextPrime(599), 601);
  EXPECT_EQ(nextPrime(577), 587);
  EXPECT_EQ(nextPrime(103), 107);
}

TEST(sumPrimeTestJV, zeroTest) { EXPECT_EQ(sumPrime(0), 0); }

TEST(sumPrimeTestJV, firstNumTest) { EXPECT_EQ(sumPrime(1), 0); }

TEST(sumPrimeTestJV, exactHitNumTest) { EXPECT_EQ(sumPrime(5), 5); }

TEST(sumPrimeTestJV, oneNumTest) { EXPECT_EQ(sumPrime(3), 2); }

TEST(sumPrimeTestJV, bigSumTest) { EXPECT_NO_THROW(sumPrime(9999)); }

TEST(sumPrimeTestJV, correctAnsTest) {
  EXPECT_EQ(sumPrime(123), 1593);
  EXPECT_EQ(sumPrime(200), 4227);
  EXPECT_EQ(sumPrime(555), 24680);
  EXPECT_EQ(sumPrime(111), 1480);
  EXPECT_EQ(sumPrime(78), 712);
}
