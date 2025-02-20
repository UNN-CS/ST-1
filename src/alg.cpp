// Copyright 2025 Andrey Chernykh

#include "alg.h"

#include <cmath>
#include <cstdint>

bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  if (value == 2) {
    return true;
  }
  if (value % 2 == 0) {
    return false;
  }

  const auto sqrtValue = static_cast<uint64_t>(std::sqrt(value));
  for (uint64_t i = 3; i <= sqrtValue; i += 2) {
    if (value % i == 0) {
      return false;
    }
  }

  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    // Special case: if n == 0, return 0, as the 0th prime number does not exist
    return 0;
  }

  uint64_t result = 1;
  for (uint64_t i = 0; i < n;) {
    result++;
    if (checkPrime(result)) {
      i++;
    }
  }

  return result;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t result = value + 1;
  while (!checkPrime(result)) {
    result++;
  }

  return result;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t result = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      result += i;
    }
  }

  return result;
}
