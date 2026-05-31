// Copyright 2026 Klimov M.D.
#include <gtest/gtest.h>
#include <cstdint>

// Объявления функций
bool checkPrime(uint64_t value);
uint64_t nPrime(uint64_t n);
uint64_t nextPrime(uint64_t value);
uint64_t sumPrime(uint64_t hbound);

TEST(PrimeTest, Test01_CheckPrime_ZeroAndOne) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(PrimeTest, Test02_CheckPrime_SmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
}

TEST(PrimeTest, Test03_CheckPrime_Composites) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(100));
}

TEST(PrimeTest, Test04_NPrime_FirstFew) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(4), 7);
}

TEST(PrimeTest, Test05_NPrime_Tenth) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(PrimeTest, Test06_NextPrime_FromPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(7), 11);
}

TEST(PrimeTest, Test07_NextPrime_FromComposite) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(14), 17);
}

TEST(PrimeTest, Test08_SumPrime_SmallBound) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(5), 5);
}

TEST(PrimeTest, Test09_SumPrime_MediumBound) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(PrimeTest, Test10_SumPrime_LargerBound) {
    EXPECT_EQ(sumPrime(20), 77);
}
