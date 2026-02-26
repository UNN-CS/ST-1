// Copyright 2025 UNN-CS
#include <cmath>
#include <cstdint>

#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value < 2)
    return false;
  if (value == 2)
    return true;
  if (value % 2 == 0)
    return false;

  const uint64_t limit = static_cast<uint64_t>(std::sqrt(value));
  for (uint64_t d = 3; d <= limit; d += 2) {
    if (value % d == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0)
    return 0;

  uint64_t cnt = 0;
  uint64_t candidate = 2;

  while (true) {
    if (checkPrime(candidate)) {
      ++cnt;
      if (cnt == n)
        return candidate;
    }
    candidate++;
  }
}

uint64_t nextPrime(uint64_t value) {
  uint64_t candidate = value + 1;
  while (!checkPrime(candidate)) {
    candidate++;
  }
  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t num = 2; num < hbound; ++num) {
    if (checkPrime(num))
      sum += num;
  }
  return sum;
}