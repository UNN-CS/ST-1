// Copyright 2025 UNN-CS

#include "alg.h"
#include <cstdint>
#include <gtest/gtest.h>

Test(st1, isPrime1) { ASSERT_EQ(checkPrime(19), true); }

Test(st1, isPrime2) { ASSERT_EQ(checkPrime(20), false); }

Test(st1, isPrime3) { ASSERT_EQ(checkPrime(113), true); }

Test(st1, nprime1) {
  constexpr auto nprime = 11;
  ASSERT_EQ(nPrime(nprime), 5);
}

Test(st1, nprime2) {
  constexpr auto nprime = 17;
  ASSERT_EQ(nPrime(17), 7);
}

Test(st1, nextPrime1) {
  constexpr auto nextprime = 29;
  ASSERT_EQ(nPrime(nextprime), 31);
}

Test(st1, nextPrime2) {
  constexpr auto nextprime = 67;
  ASSERT_EQ(nPrime(nextprime), 71);
}

Test(st1, sumPrime1) {
  constexpr auto nbound = 3;
  ASSERT_EQ(sumPrime(nbound), 10);
}

Test(st1, sumPrime2) {
  constexpr auto nbound = 6;
  ASSERT_EQ(sumPrime(nbound), 41);
}