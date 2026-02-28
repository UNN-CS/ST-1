// Copyright 2025 UNN-CS
#include "alg.h"

#include <cmath>
#include <cstdint>

bool checkPrime(uint64_t value) {
  if (value <= 1) return false;
  if (value <= 3) return true;
  if (value % 2 == 0 || value % 3 == 0) return false;

  for (uint64_t i = 5; i * i <= value; i += 6) {
    if (value % i == 0 || value % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) return 0;
  if (n == 1) return 2;

  uint64_t count = 1;
  uint64_t candidate = 3;

  while (count < n) {
    if (checkPrime(candidate)) {
      count++;
    }
    if (count < n) {
      candidate += 2;
    }
  }
  return candidate;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t candidate = value + 1;
  if (candidate <= 2) return 2;
  if (candidate % 2 == 0) candidate++;

  while (!checkPrime(candidate)) {
    candidate += 2;
  }
  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound <= 2) return 0;

  uint64_t sum = 2;
  for (uint64_t i = 3; i < hbound; i += 2) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
