#include <gtest/gtest.h>
#include <cstdint>

bool checkPrime(uint64_t value);
uint64_t nPrime(uint64_t n);
uint64_t nextPrime(uint64_t value);
uint64_t sumPrime(uint64_t hbound);

TEST(CheckPrimeTest, SmallNumbers) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
}

TEST(CheckPrimeTest, CompositeNumbers) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(15));
    EXPECT_FALSE(checkPrime(100));
}

TEST(CheckPrimeTest, PrimeNumbers) {
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(17));
    EXPECT_TRUE(checkPrime(23));
}

TEST(CheckPrimeTest, LargePrimeNumbers) {
    EXPECT_TRUE(checkPrime(997));
    EXPECT_TRUE(checkPrime(104729));
    EXPECT_FALSE(checkPrime(100000));
    EXPECT_TRUE(checkPrime(6700417));
}

TEST(NPrimeTest, FirstPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
}

TEST(NPrimeTest, MidRangePrimes) {
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(20), 71);
    EXPECT_EQ(nPrime(30), 113);
    EXPECT_EQ(nPrime(40), 173);
}

TEST(NPrimeTest, LargerPrimes) {
    EXPECT_EQ(nPrime(50), 229);
    EXPECT_EQ(nPrime(100), 541);
    EXPECT_EQ(nPrime(200), 1223);
    EXPECT_EQ(nPrime(500), 3571);
}

TEST(NPrimeTest, EdgeCases) {
    EXPECT_EQ(nPrime(0), 0);
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(25), 97);
}

TEST(NextPrimeTest, SmallNumbers) {
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
}

TEST(NextPrimeTest, MidRange) {
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(20), 23);
    EXPECT_EQ(nextPrime(30), 31);
    EXPECT_EQ(nextPrime(50), 53);
}

TEST(NextPrimeTest, LargerNumbers) {
    EXPECT_EQ(nextPrime(100), 101);
    EXPECT_EQ(nextPrime(500), 503);
    EXPECT_EQ(nextPrime(997), 1009);
    EXPECT_EQ(nextPrime(1000), 1009);
}

TEST(NextPrimeTest, EdgeCases) {
    EXPECT_EQ(nextPrime(89), 97);
    EXPECT_EQ(nextPrime(97), 101);
    EXPECT_EQ(nextPrime(150), 151);
    EXPECT_EQ(nextPrime(199), 211);
}

TEST(SumPrimeTest, SmallNumbers) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(5), 5);
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, MidRangeSums) {
    EXPECT_EQ(sumPrime(20), 77);
    EXPECT_EQ(sumPrime(50), 328);
    EXPECT_EQ(sumPrime(100), 1060);
    EXPECT_EQ(sumPrime(200), 4227);
}

TEST(SumPrimeTest, LargeSums) {
    EXPECT_EQ(sumPrime(500), 21536);
    EXPECT_EQ(sumPrime(1000), 76127);
    EXPECT_EQ(sumPrime(5000), 1548136);
    EXPECT_EQ(sumPrime(10000), 5736396);
}

TEST(SumPrimeTest, EdgeCases) {
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(11), 17);
    EXPECT_EQ(sumPrime(99), 1060);
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
