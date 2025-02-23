// Copyright 2025 UNN-CS

#include "alg.h"

#include <gtest/gtest.h>

#include <iostream>

TEST(st1, sumPrime1) {
  std::cout << "Running sumPrime1 test" << std::endl;
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  std::cout << "Running sumPrime2 test" << std::endl;
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrimeBoundary) {
  std::cout << "Running sumPrimeBoundary test" << std::endl;
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime1) {
  std::cout << "Running checkPrime1 test" << std::endl;
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime2) {
  std::cout << "Running checkPrime2 test" << std::endl;
  EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrime3) {
  std::cout << "Running checkPrime3 test" << std::endl;
  EXPECT_FALSE(checkPrime(4));
}

TEST(st1, checkPrime4) {
  std::cout << "Running checkPrime4 test" << std::endl;
  EXPECT_TRUE(checkPrime(5));
}

TEST(st1, checkPrimeLarge) {
  std::cout << "Running checkPrimeLarge test" << std::endl;
  EXPECT_TRUE(checkPrime(104729));
}

TEST(st1, nPrime1) {
  std::cout << "Running nPrime1 test" << std::endl;
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime2) {
  std::cout << "Running nPrime2 test" << std::endl;
  uint64_t res = nPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime3) {
  std::cout << "Running nPrime3 test" << std::endl;
  uint64_t res = nPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrimeLarge) {
  std::cout << "Running nPrimeLarge test" << std::endl;
  uint64_t res = nPrime(10000);
  uint64_t expected = 104729;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
  std::cout << "Running nextPrime1 test" << std::endl;
  uint64_t res = nextPrime(4);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime2) {
  std::cout << "Running nextPrime2 test" << std::endl;
  uint64_t res = nextPrime(11);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrimeLarge) {
  std::cout << "Running nextPrimeLarge test" << std::endl;
  uint64_t res = nextPrime(104723);
  uint64_t expected = 104729;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  std::cout << "Running sumPrime3 test" << std::endl;
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}
