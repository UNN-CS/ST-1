// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"



TEST(st1, checkPrime1) {
  EXPECT_FALSE(checkPrime(0)); // 0 не €вл€етс€ простым
  EXPECT_FALSE(checkPrime(1)); // 1 не €вл€етс€ простым
}

TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(2));  // 2 Ч простое число
  EXPECT_TRUE(checkPrime(3));  // 3 Ч простое число
}

TEST(st1, checkPrime3) {
  EXPECT_FALSE(checkPrime(4)); // 4 Ч составное число
  EXPECT_TRUE(checkPrime(5));  // 5 Ч простое число
}

TEST(st1, checkPrime4) {
  EXPECT_FALSE(checkPrime(9));  // 9 Ч составное число
  EXPECT_TRUE(checkPrime(17));  // 17 Ч простое число
}

TEST(st1, checkPrime5) {
  EXPECT_FALSE(checkPrime(100)); // 100 Ч составное число
  EXPECT_TRUE(checkPrime(97));   // 97 Ч простое число
}

TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(1), 2);  // ѕервое простое число Ч 2
  EXPECT_EQ(nPrime(2), 3);  // ¬торое простое число Ч 3
  EXPECT_EQ(nPrime(3), 5);  // “ретье простое число Ч 5
}

TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(5), 11);  // ѕ€тое простое число Ч 11
  EXPECT_EQ(nPrime(10), 29); // ƒес€тое простое число Ч 29
}

TEST(st1, nPrime3) {
  EXPECT_EQ(nPrime(20), 71);  // ƒвадцатое простое число Ч 71
  EXPECT_EQ(nPrime(50), 229); // ѕ€тидес€тальное простое число Ч 229
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(1), 2);  // —ледующее простое после 1 Ч 2
  EXPECT_EQ(nextPrime(2), 2);  // 2 само €вл€етс€ простым
  EXPECT_EQ(nextPrime(3), 3);  // 3 само €вл€етс€ простым
}

TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(4), 5);  // —ледующее простое после 4 Ч 5
  EXPECT_EQ(nextPrime(10), 11); // —ледующее простое после 10 Ч 11
}

TEST(st1, nextPrime3) {
  EXPECT_EQ(nextPrime(17), 17); // 17 само €вл€етс€ простым
  EXPECT_EQ(nextPrime(18), 19); // —ледующее простое после 18 Ч 19
}

TEST(st1, nextPrime4) {
  EXPECT_EQ(nextPrime(97), 97); // 97 само €вл€етс€ простым
  EXPECT_EQ(nextPrime(98), 101); // —ледующее простое после 98 Ч 101
}

TEST(st1, sumPrime1) {
  EXPECT_EQ(sumPrime(10), 17); // —умма простых чисел < 10: 2 + 3 + 5 + 7 = 17
  EXPECT_EQ(sumPrime(20), 77); // —умма простых чисел < 20: 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19 = 77
}

TEST(st1, sumPrime2) {
  EXPECT_EQ(sumPrime(50), 328); // —умма простых чисел < 50
  EXPECT_EQ(sumPrime(100), 1060); // —умма простых чисел < 100
}

TEST(st1, sumPrime3) {
  EXPECT_EQ(sumPrime(2000000), 142913828922); // —умма простых чисел < 2000000
}

TEST(st1, sumPrime4) {
  EXPECT_EQ(sumPrime(1), 0); // Ќет простых чисел < 1
  EXPECT_EQ(sumPrime(2), 2); // ≈динственное простое число < 2 Ч это 2
}
