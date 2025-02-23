
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

TEST(st1, sumPrime3) {
    uint64_t res = sumPrime(30);
    uint64_t expected = 129;
    EXPECT_EQ(expected, res);
}

TEST(st2, checkPrime1) {
    bool res = checkPrime(3);
    EXPECT_TRUE(res);
}

TEST(st2, checkPrime2) {
    bool res = checkPrime(17);
    EXPECT_TRUE(res);
}

TEST(st2, checkPrime3) {
    bool res = checkPrime(25);
    EXPECT_FALSE(res);
}

TEST(st3, nPrime1) {
    uint64_t res = nPrime(3);
    uint64_t expected = 5;
    EXPECT_EQ(expected, res);
}

TEST(st3, nPrime2) {
    uint64_t res = nPrime(7);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}

TEST(st3, nPrime3) {
    uint64_t res = nPrime(12);
    uint64_t expected = 37;
    EXPECT_EQ(expected, res);
}

TEST(st4, nextPrime1) {
    uint64_t res = nextPrime(14);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}

TEST(st4, nextPrime2) {
    uint64_t res = nextPrime(37);
    uint64_t expected = 41;
    EXPECT_EQ(expected, res);
}