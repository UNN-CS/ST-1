// Copyright 2025 UNN-CS

#include <cstdint>
#include <gtest/gtest.h>

#include "alg.h"

Test(prime_num, isPrime1) { EXPECT_EQ(checkPrime(19), true); }

Test(prime_num, isPrime2) { EXPECT_EQ(checkPrime(20), false); }

Test(prime_num, isPrime3) { EXPECT_EQ(checkPrime(113), true); }

Test(st1, nprime1) {
  constexpr auto nprime = 11;
  EXPECT_EQ(nPrime(nprime), 5);
}

Test(prime_num, nprime2) {
  constexpr auto nprime = 17;
  EXPECT_EQ(nPrime(17), 7);
}

Test(prime_num, nextPrime1) {
  constexpr auto nextprime = 29;
  EXPECT_EQ(nPrime(nextprime), 31);
}

Test(prime_num, nextPrime2) {
  constexpr auto nextprime = 67;
  EXPECT_EQ(nPrime(nextprime), 71);
}

Test(prime_num, sumPrime1) {
  constexpr auto nbound = 3;
  EXPECT_EQ(sumPrime(nbound), 10);
}

Test(prime_num, sumPrime2) {
  constexpr auto nbound = 6;
  EXPECT_EQ(sumPrime(nbound), 41);
}
