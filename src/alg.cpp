// Copyright 2025 UNN-CS
#include <cstdint>
#include <limits>
#include "alg.h"

namespace {

bool IsPrimeInternal(uint64_t value) {
  if (value < 2) {
    return false;
  }
  if (value == 2 || value == 3) {
    return true;
  }
  if (value % 2 == 0 || value % 3 == 0) {
    return false;
  }

  for (uint64_t divisor = 5; divisor <= value / divisor; divisor += 6) {
    if (value % divisor == 0 || value % (divisor + 2) == 0) {
      return false;
    }
  }
  return true;
}

}  // namespace

bool checkPrime(uint64_t value) {
  return IsPrimeInternal(value);
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }

  uint64_t count = 0;
  uint64_t candidate = 1;
  while (count < n) {
    ++candidate;
    if (IsPrimeInternal(candidate)) {
      ++count;
    }
  }
  return candidate;
}

uint64_t nextPrime(uint64_t value) {
  if (value >= std::numeric_limits<uint64_t>::max() - 1) {
    return 0;
  }

  uint64_t candidate = value + 1;
  while (candidate > value) {
    if (IsPrimeInternal(candidate)) {
      return candidate;
    }
    if (candidate == std::numeric_limits<uint64_t>::max()) {
      break;
    }
    ++candidate;
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t value = 2; value < hbound; ++value) {
    if (IsPrimeInternal(value)) {
      sum += value;
    }
  }
  return sum;
}
