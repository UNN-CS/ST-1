// Copyright 2025 UNN-CS
#include <cstdint>
#include <vector>

#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  if (value == 2 || value == 3) {
    return true;
  }
  if (value % 2 == 0 || value % 3 == 0) {
    return false;
  }

  for (uint64_t divider = 5; divider <= value / divider; divider += 6) {
    if (value % divider == 0 || value % (divider + 2) == 0) {
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
  uint64_t candidate = 1;

  while (found < n) {
    candidate = nextPrime(candidate);
    ++found;
  }

  return candidate;
}

uint64_t nextPrime(uint64_t value) {
  if (value < 2) {
    return 2;
  }

  uint64_t candidate = value + 1;
  if (candidate % 2 == 0) {
    ++candidate;
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

  std::vector<bool> is_prime(hbound, true);
  is_prime[0] = false;
  is_prime[1] = false;

  for (uint64_t value = 2; value <= (hbound - 1) / value; ++value) {
    if (!is_prime[value]) {
      continue;
    }
    for (uint64_t multiple = value * value; multiple < hbound;
         multiple += value) {
      is_prime[multiple] = false;
    }
  }

  uint64_t sum = 0;
  for (uint64_t value = 2; value < hbound; ++value) {
    if (is_prime[value]) {
      sum += value;
    }
  }

  return sum;
}
