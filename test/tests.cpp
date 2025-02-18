// Copyright 2025 ovVrLFg8ks

#include <gtest/gtest.h>

#include <cstdint>

#include "alg.h"

TEST(st1_checkPrime, Number0) { EXPECT_FALSE(checkPrime(0)); }
TEST(st1_checkPrime, Number1) { EXPECT_FALSE(checkPrime(1)); }
TEST(st1_checkPrime, Number2) { EXPECT_TRUE(checkPrime(2)); }
TEST(st1_checkPrime, Number3) { EXPECT_TRUE(checkPrime(3)); }
TEST(st1_checkPrime, Number997) { EXPECT_TRUE(checkPrime(997)); }
TEST(st1_checkPrime, Number66049) { EXPECT_FALSE(checkPrime(66049)); }
TEST(st1_checkPrime, Number65537) { EXPECT_TRUE(checkPrime(65537)); }

TEST(st1_nPrime, Number0) { EXPECT_EQ(nPrime(0), 0); }
TEST(st1_nPrime, Number1) { EXPECT_EQ(nPrime(1), 2); }
TEST(st1_nPrime, Number2) { EXPECT_EQ(nPrime(2), 3); }
TEST(st1_nPrime, Number3) { EXPECT_EQ(nPrime(3), 5); }
TEST(st1_nPrime, Number4) { EXPECT_EQ(nPrime(4), 7); }
TEST(st1_nPrime, Number5) { EXPECT_EQ(nPrime(5), 11); }
TEST(st1_nPrime, Number50) { EXPECT_EQ(nPrime(50), 229); }
TEST(st1_nPrime, Number999) { EXPECT_EQ(nPrime(999), 7907); }
TEST(st1_nPrime, Number1000) { EXPECT_EQ(nPrime(1000), 7919); }

TEST(st1_nextPrime, Number0) { EXPECT_EQ(nextPrime(0), 2); }
TEST(st1_nextPrime, Number1) { EXPECT_EQ(nextPrime(1), 2); }
TEST(st1_nextPrime, Number2) { EXPECT_EQ(nextPrime(2), 3); }
TEST(st1_nextPrime, Number3) { EXPECT_EQ(nextPrime(3), 5); }
TEST(st1_nextPrime, Number991) { EXPECT_EQ(nextPrime(991), 997); }
TEST(st1_nextPrime, Number992) { EXPECT_EQ(nextPrime(992), 997); }
TEST(st1_nextPrime, Number65537) { EXPECT_EQ(nextPrime(65537), 65539); }
TEST(st1_nextPrime, Number66049) { EXPECT_EQ(nextPrime(66049), 66067); }

TEST(st1_sumPrime, Number0) { EXPECT_EQ(sumPrime(0), 0); }
TEST(st1_sumPrime, Number1) { EXPECT_EQ(sumPrime(1), 0); }
TEST(st1_sumPrime, Number2) { EXPECT_EQ(sumPrime(2), 0); }
TEST(st1_sumPrime, Number3) { EXPECT_EQ(sumPrime(3), 2); }
TEST(st1_sumPrime, Number4) { EXPECT_EQ(sumPrime(4), 5); }
TEST(st1_sumPrime, Number5) { EXPECT_EQ(sumPrime(5), 5); }
TEST(st1_sumPrime, Number6) { EXPECT_EQ(sumPrime(6), 10); }
TEST(st1_sumPrime, Number100) { EXPECT_EQ(sumPrime(100), 1060); }
TEST(st1_sumPrime, Number999) { EXPECT_EQ(sumPrime(999), 76127); }
TEST(st1_sumPrime, Number65537) { EXPECT_EQ(sumPrime(65537), 202288087); }
TEST(st1_sumPrime, Number66049) { EXPECT_EQ(sumPrime(66049), 205773816); }
