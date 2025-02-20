#include <gtest/gtest.h>

#include "alg.h"

TEST(CheckPrime, ReturnsFalseForZero) { EXPECT_FALSE(checkPrime(0)); }
TEST(CheckPrime, ReturnsFalseForOne) { EXPECT_FALSE(checkPrime(1)); }
TEST(CheckPrime, ReturnsTrueForTwo) { EXPECT_TRUE(checkPrime(2)); }
TEST(CheckPrime, ReturnsFalseForEven) { EXPECT_FALSE(checkPrime(4)); }
TEST(CheckPrime, ReturnsTrueForLargePrimeNumber) { EXPECT_TRUE(checkPrime(9999991)); }
TEST(CheckPrime, ReturnsFalseForLargeCompositeNumber) { EXPECT_FALSE(checkPrime(9999995)); }

TEST(NPrime, ReturnsZeroForZero) { EXPECT_EQ(nPrime(0), 0); }
TEST(NPrime, ReturnsFirstPrimeForOne) { EXPECT_EQ(nPrime(1), 2); }
TEST(NPrime, ReturnsSecondPrimeForTwo) { EXPECT_EQ(nPrime(2), 3); }
TEST(NPrime, ReturnsTenthPrimeForTen) { EXPECT_EQ(nPrime(10), 29); }

TEST(NextPrime, ReturnsFirstPrimeForZero) { EXPECT_EQ(nextPrime(0), 2); }
TEST(NextPrime, ReturnsFirstPrimeForOne) { EXPECT_EQ(nextPrime(1), 2); }
TEST(NextPrime, ReturnsNextPrimeForTwo) { EXPECT_EQ(nextPrime(2), 3); }
TEST(NextPrime, ReturnsNextPrimeForTen) { EXPECT_EQ(nextPrime(10), 11); }

TEST(SumPrime, ReturnsZeroForZero) { EXPECT_EQ(sumPrime(0), 0); }
TEST(SumPrime, ReturnsZeroForOne) { EXPECT_EQ(sumPrime(1), 0); }
TEST(SumPrime, ReturnsZeroForTwo) { EXPECT_EQ(sumPrime(2), 0); }
TEST(SumPrime, ReturnsSumForTen) { EXPECT_EQ(sumPrime(10), 17); }
