// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include <vector>
#include "alg.h"


TEST(CheckPrimeTest, NotPrimeOne) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, NotPrimeCarmichael) {
  EXPECT_FALSE(checkPrime(561));
}

TEST(CheckPrimeTest, PrimeLargeNumbers) {
  std::vector<uint64_t> primes = {999983ULL, 1000003ULL, 1000033ULL, 104729ULL};
  for (auto val : primes) {
    EXPECT_TRUE(checkPrime(val));
  }
}

TEST(CheckPrimeTest, PrimeSmallNumbers) {
  std::vector<uint64_t> primes = {2, 3, 5, 7, 11, 13, 17, 19};
  for (auto val : primes) {
    EXPECT_TRUE(checkPrime(val));
  }
}

TEST(CheckPrimeTest, NotPrime_SmallNumbers) {
  std::vector<uint64_t> composites = {4, 6, 8, 9, 10, 12, 15, 21};
  for (auto val : composites) {
    EXPECT_FALSE(checkPrime(val));
  }
}

TEST(NPrimeTest, ReturnsZeroForZero) {
  EXPECT_EQ(0ULL, nPrime(0));
}

TEST(NPrimeTest, FindsCorrectPrime) {
  std::vector<uint64_t> inputs = {20, 30, 40};
  std::vector<uint64_t> expected = {71, 113, 173};
  for (size_t i = 0; i < inputs.size(); i++) {
    EXPECT_EQ(expected[i], nPrime(inputs[i]));
  }
}

TEST(NPrimeTest, FindsFirstFivePrimes) {
  std::vector<uint64_t> inputs = {1, 2, 3, 4, 5};
  std::vector<uint64_t> expected = {2, 3, 5, 7, 11};
  for (size_t i = 0; i < inputs.size(); i++) {
    EXPECT_EQ(expected[i], nPrime(inputs[i]));
  }
}

TEST(NPrimeTest, FindsLargePrimes) {
  std::vector<uint64_t> inputs = {100, 168, 1000};
  std::vector<uint64_t> expected = {541, 997, 7919};
  for (size_t i = 0; i < inputs.size(); i++) {
    EXPECT_EQ(expected[i], nPrime(inputs[i]));
  }
}

TEST(NPrimeTest, SequenceIsIncreasing) {
  for (uint64_t k = 1; k < 10; k++) {
    EXPECT_GT(nPrime(k + 1), nPrime(k));
  }
}

TEST(NextPrimeTest, FindsNextAfterZeroOrOne) {
  EXPECT_EQ(2ULL, nextPrime(0));
  EXPECT_EQ(2ULL, nextPrime(1));
}

TEST(NextPrimeTest, FindsNextAfterLargeNumbers) {
  std::vector<uint64_t> inputs = {1000000, 999983};
  std::vector<uint64_t> expected = {1000003, 1000003};
  for (size_t i = 0; i < inputs.size(); i++) {
    EXPECT_EQ(expected[i], nextPrime(inputs[i]));
  }
}

TEST(NextPrimeTest, FindsNextAfterComposites) {
  std::vector<uint64_t> inputs = {10, 20, 25};
  std::vector<uint64_t> expected = {11, 23, 29};
  for (size_t i = 0; i < inputs.size(); i++) {
    EXPECT_EQ(expected[i], nextPrime(inputs[i]));
  }
}

TEST(NextPrimeTest, FindsNextAfterPrimes) {
  std::vector<uint64_t> primes = {3, 7, 17};
  std::vector<uint64_t> expected = {5, 11, 19};
  for (size_t i = 0; i < primes.size(); i++) {
    EXPECT_EQ(expected[i], nextPrime(primes[i]));
  }
}

TEST(NextPrimeTest, PrimeGapIsValid) {
  std::vector<uint64_t> primes = {3, 7, 11, 13, 17, 19, 23, 29, 31};
  for (size_t i = 0; i < primes.size(); i++) {
    uint64_t next = nextPrime(primes[i]);
    EXPECT_TRUE(next - primes[i] == 2 || next - primes[i] == 4);
  }
}

TEST(SumPrimeTest, ComputesCorrectSums) {
  std::vector<uint64_t> inputs = {10, 20, 30, 50, 100};
  std::vector<uint64_t> expected = {17, 77, 129, 328, 1060};
  for (size_t i = 0; i < inputs.size(); i++) {
    EXPECT_EQ(expected[i], sumPrime(inputs[i]));
  }
}

TEST(SumPrimeTest, HandlesSmallLimits) {
  EXPECT_EQ(0ULL, sumPrime(0));  
  EXPECT_EQ(0ULL, sumPrime(1));  
  EXPECT_EQ(0ULL, sumPrime(2));  
  EXPECT_EQ(2ULL, sumPrime(3));  
  EXPECT_EQ(5ULL, sumPrime(5));  
}

TEST(SumPrimeTest, SumGrowsCorrectly) {
  std::vector<uint64_t> inputs = {6, 8, 12, 18};
  std::vector<uint64_t> expected = {10, 17, 28, 41};
  for (size_t i = 0; i < inputs.size(); i++) {
    EXPECT_EQ(expected[i], sumPrime(inputs[i]));
  }
}

TEST(SumPrimeTest, ComputesLargeSums) {
  EXPECT_EQ(76127ULL, sumPrime(1000)); 
  EXPECT_EQ(1548136ULL, sumPrime(5000)); 
}

TEST(SumPrimeTest, SumAlwaysIncreases) {
  for (uint64_t h = 10; h <= 50; h += 10) {
    EXPECT_LT(sumPrime(h), sumPrime(h + 10));
  }
}
