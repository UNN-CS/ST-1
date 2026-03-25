// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


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

  for (uint64_t div = 3; div <= value / div; div += 2) {
    if (value % div == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }

  uint64_t found = 0;
  uint64_t current = 1;
  while (found < n) {
    ++current;
    if (checkPrime(current)) {
      ++found;
    }
  }
  return current;
}

uint64_t nextPrime(uint64_t value) {
  if (value >= UINT64_MAX - 1) {
    return 0;
  }

  uint64_t candidate = value + 1;
  while (!checkPrime(candidate)) {
    if (candidate >= UINT64_MAX - 1) {
      return 0;
    }
    ++candidate;
  }
  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t value = 2; value < hbound; ++value) {
    if (checkPrime(value)) {
      sum += value;
    }
  }
  return sum;
}
