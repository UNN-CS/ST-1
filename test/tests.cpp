// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include <vector>
#include "alg.h"

// --------- checkPrime ------------------
TEST(st1, checkPrimeEdgeCase1) {
  EXPECT_FALSE(checkPrime(0));
}
TEST(st1, checkPrimeEdgeCase2) {
  EXPECT_TRUE(checkPrime(2));
}
TEST(st1, checkPrimeEvenNumIsNotPrime) {
  EXPECT_FALSE(checkPrime(4));
}
TEST(st1, checkPrimeOddNumIsNotPrime) {
  EXPECT_FALSE(checkPrime(4));
}
TEST(st1, checkPrimeNumIsPrime) {
  EXPECT_TRUE(checkPrime(23));
}

// --------- nPrime ------------------
TEST(st1, nPrimeThrowInvArgument) {
  EXPECT_THROW(nPrime(0), std::invalid_argument);
}
TEST(st1, nPrimeEdgeCase) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrimeFirstPrime) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

// --------- nextPrime ------------------
TEST(st1, nextPrimeEdgeCase1) {
  uint64_t res = nextPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrimeEdgeCase2) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(13);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(142913828879ULL);
  uint64_t expected = 142913828947ULL;
  EXPECT_EQ(expected, res);
}

// --------- sumPrime ------------------
TEST(st1, sumPrimeEdgeTest1) {
  uint64_t res = sumPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrimeEdgeTest2) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922ULL;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

// --------- overflow tests ------------------
// Checking for overflow in range uint8_t
TEST(st1, nPrimeOverflowUINT8) {
  auto nPrimeU8 = [](uint8_t n) -> uint8_t {
    if (n == 0)  {
      throw std::invalid_argument("n must be >= 1");
    }
    uint8_t count = 0;
    uint8_t res = 1;
    while (count < n) {
      if (res == UINT8_MAX) {
        throw std::overflow_error("nPrime: uint8_t overflow");
      }
      ++res;
      if (checkPrime(static_cast<uint64_t>(res))) {
        ++count;
      }
    }
    return res;
  };
  EXPECT_EQ(nPrimeU8(54), 251);
  EXPECT_THROW(nPrimeU8(55), std::overflow_error);
}

TEST(st1, nextPrimeOverflowUINT8) {
  auto nextPrimeU8 = [](uint8_t value) -> uint8_t {
    if (value >= UINT8_MAX - 1) {
      throw std::overflow_error("nextPrime: no next prime in uint8_t range");
    }
    if (value < 2) {
      return 2;
    }
    value++;
    if (value % 2 == 0) {
      value++;
    }

    while (value < UINT8_MAX) {
      if (checkPrime(value)) {
        return value;
      }
      value += 2;
    }
    throw std::overflow_error("nextPrime: no next prime in uint8_t range");
  };

  EXPECT_EQ(251, nextPrimeU8(241));
  EXPECT_THROW(nextPrimeU8(251), std::overflow_error);
  EXPECT_THROW(nextPrimeU8(255), std::overflow_error);
}

TEST(st1, sumPrimeOverflowUINT8) {
  auto sumPrimeU8 = [](uint8_t hbound) -> uint8_t {
    if (hbound <= 2) {
      return 0;
    }

    // Решето Эратосфена
    std::vector<bool> is_prime(hbound, true);
    is_prime[0] = is_prime[1] = false;
    for (uint8_t i = 2; i <= hbound / i; i++) {
      if (is_prime[i]) {
        for (uint8_t j = i * i; j < hbound; j += i) {
          is_prime[j] = 0;
        }
      }
    }

    uint8_t sum = 0;
    for (uint8_t i = 2; i < hbound; i++) {
      if (is_prime[i]) {
        if (sum > UINT8_MAX - i) {
          throw std::overflow_error("sumPrime: uint8_t overflow");
        }
        sum += i;
      }
    }

    return sum;
  };

  EXPECT_EQ(238, sumPrimeU8(43));
  EXPECT_THROW(sumPrimeU8(44), std::overflow_error);
}
