// Copyright 2025 UNN-CS

#include "alg.h"
#include <cstdint>
#include <gtest/gtest.h>

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

TEST(st1, CheckPrime_True) {
  EXPECT_TRUE(checkPrime(2)); // 2 - простое число
}

TEST(st1, CheckPrime_False) {
  EXPECT_FALSE(checkPrime(4)); // 4 - составное число
}

TEST(st1, CheckPrime_Zero) {
  EXPECT_FALSE(checkPrime(0)); // 0 - не простое число
}

TEST(st1, CheckPrime_One) {
  EXPECT_FALSE(checkPrime(1)); // 1 - не простое число
}

TEST(st1, CheckPrime_LargePrime) {
  EXPECT_TRUE(checkPrime(29)); // 29 - простое число
}

TEST(st1, NPrime_FirstPrime) {
  EXPECT_EQ(nPrime(1), 2); // Первое простое число - 2
}

TEST(st1, NPrime_TenthPrime) {
  EXPECT_EQ(nPrime(10), 29); // Десятое простое число - 29
}

TEST(st1, NextPrime_After2) {
  EXPECT_EQ(nextPrime(2), 3); // Следующее простое число после 2 - 3
}

TEST(st1, NextPrime_After50) {
  EXPECT_EQ(nextPrime(50), 53); // Следующее простое число после 50 - 53
}

TEST(st1, SumPrime_LowerBound) {
  EXPECT_EQ(sumPrime(10),
            17); // Сумма простых чисел меньше 10: 2 + 3 + 5 + 7 = 17
}
