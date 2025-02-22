// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include <vector>
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
TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(5);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime5) {
  int n = 1000;
  std::vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }

  int64_t sum = 0;
  int spr = 2;

  for (auto a : arr) {
    uint64_t res = sumPrime(a);
    EXPECT_EQ(sum, res);
    if (spr == a) {
      sum += spr;
      spr = nextPrime(a);
    }
  }
}

TEST(st1, checkPrime1) {
  ASSERT_TRUE(checkPrime(5));
}
TEST(st1, checkPrime2) {
  ASSERT_TRUE(checkPrime(2));
}
TEST(st1, checkPrime3) {
  ASSERT_TRUE(checkPrime(17));
}
TEST(st1, checkPrime4) {
  ASSERT_FALSE(checkPrime(1));
}
TEST(st1, checkPrime5) {
  ASSERT_FALSE(checkPrime(4));
}
TEST(st1, checkPrime6) {
  int n = 1001;
  std::vector<bool> arr(n, true);
  arr[0] = arr[1] = false;
  for (int i = 2; i * i < n; ++i) {
    if (arr[i]) {
      for (int sm = i * i; sm < n; sm += i) {
        arr[sm] = false;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    EXPECT_EQ(arr[i], checkPrime(i));
  }
}

TEST(st1, nPrime1) {
  uint64_t res = nPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime2) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime3) {
  uint64_t res = nPrime(4);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime4) {
  uint64_t res = nPrime(7);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(7);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(9);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
