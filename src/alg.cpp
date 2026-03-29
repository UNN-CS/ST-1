// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"

namespace {
bool isPrimeImpl(uint64_t value) {
  if (value < 2) {
    return false;
  }
  if (value == 2) {
    return true;
  }
  if (value % 2 == 0) {
    return false;
  }

  for (uint64_t divisor = 3; divisor <= value / divisor; divisor += 2) {
    if (value % divisor == 0) {
      return false;
    }
  }

  return true;
}
}  // namespace

bool checkPrime(uint64_t value) {
  return isPrimeImpl(value);
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }

  uint64_t count = 0;
  for (uint64_t value = 2;; ++value) {
    if (isPrimeImpl(value)) {
      ++count;
      if (count == n) {
        return value;
      }
    }
  }
}

uint64_t nextPrime(uint64_t value) {
  if (value < 2) {
    return 2;
  }
  if (value == UINT64_MAX) {
    return 0;
  }

  uint64_t candidate = value + 1;
  while (!isPrimeImpl(candidate)) {
    if (candidate == UINT64_MAX) {
      return 0;
    }
    ++candidate;
  }

  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;

  for (uint64_t value = 2; value < hbound; ++value) {
    if (isPrimeImpl(value)) {
      sum += value;
    }
  }

  return sum;
}
