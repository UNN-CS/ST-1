#include <gtest/gtest.h>
#include <cstdint>

bool checkPrime(uint64_t value);
uint64_t nPrime(uint64_t n);
uint64_t nextPrime(uint64_t value);
uint64_t sumPrime(uint64_t hbound);

TEST(CheckPrimeTest, NumberLessThanTwoIsNotPrime) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, TwoIsPrime) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, SmallPrimeNumbers) {
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
}

TEST(CheckPrimeTest, EvenNumbersAreNotPrime) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(10));
    EXPECT_FALSE(checkPrime(100));
}

TEST(CheckPrimeTest, CompositeOddNumbersAreNotPrime) {
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(15));
    EXPECT_FALSE(checkPrime(21));
}

TEST(NPrimeTest, FirstPrimeNumber) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, SeveralPrimeNumbers) {
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, TenthPrimeNumber) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(NextPrimeTest, NextPrimeAfterCompositeNumber) {
    EXPECT_EQ(nextPrime(4), 5);
}

TEST(NextPrimeTest, NextPrimeAfterPrimeNumber) {
    EXPECT_EQ(nextPrime(11), 13);
}

TEST(NextPrimeTest, NextPrimeAfterSmallNumbers) {
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(SumPrimeTest, SumBeforeTen) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, SumBeforeTwo) {
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(SumPrimeTest, SumBeforeTwenty) {
    EXPECT_EQ(sumPrime(20), 77);
}
