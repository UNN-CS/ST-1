// Copyright 2025 UNN-CS
#include "alg.h"

#include <cstdint>
#include <vector>

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
  for (uint64_t i = 3; i * i <= value; i += 2) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 2;
  }

  uint64_t count = 1;
  uint64_t candidate = 3;

  while (count < n) {
    if (checkPrime(candidate)) {
      count++;
    }
    if (count == n) {
      return candidate;
    }
    candidate += 2;
  }
  return candidate;
}

uint64_t nextPrime(uint64_t value) {
  if (value == UINT64_MAX) {
    return 0;
  }
  if (value < 2) {
    return 2;
  }

  uint64_t candidate = value + 1;
  if (candidate % 2 == 0) {
    candidate++;
  }

  while (!checkPrime(candidate)) {
    candidate += 2;
  }
  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound <= 2) {
    return 0;
  }

  std::vector<bool> sieve(hbound, true);
  sieve[0] = false;
  sieve[1] = false;

  for (uint64_t p = 2; p * p < hbound; ++p) {
    if (sieve[p]) {
      for (uint64_t i = p * p; i < hbound; i += p) {
        sieve[i] = false;
      }
    }
  }

  uint64_t total_sum = 0;
  for (uint64_t i = 2; i < hbound; ++i) {
    if (sieve[i]) {
      total_sum += i;
    }
  }
  return total_sum;
}
