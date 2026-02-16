// Copyright 2025 UNN-CS
#include <cstdint>
#include <vector>
#include <stdexcept>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value < 2) return false;
  if (value == 2) return true;
  if (value % 2 == 0) return false;

  for (uint64_t i = 3; i <= value / i; i+=2) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    throw std::invalid_argument("nPrime: n must be >= 1");
  }
  uint64_t count = 0;
  uint64_t res = 1;
  while (count < n) {
    if (res == UINT64_MAX) {
      throw std::overflow_error("nPrime: uint64_t overflow");
    }
    ++res;
    if (checkPrime(res)) {
      ++count;
    }
  }

  return res;
}

uint64_t nextPrime(uint64_t value) {
  if (value >= UINT64_MAX - 1) {
    throw std::overflow_error("nextPrime: no next prime in uint64_t range");
  }
  if (value < 2) {
    return 2;
  }
  value++;
  if (value % 2 == 0) {
    value++;
  }

  while (value < UINT64_MAX) {
    if (checkPrime(value)) {
      return value;
    }
    value += 2;
  }

  throw std::overflow_error("nextPrime: no next prime in uint64_t range");
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound <= 2) {
    return 0;
  }

  // Решето Эратосфена
  std::vector<bool> is_prime(hbound, true);
  is_prime[0] = is_prime[1] = false;
  for (uint64_t i = 2; i <= hbound / i; i++) {
    if (is_prime[i]) {
      for (uint64_t j = i * i; j < hbound; j += i) {
        is_prime[j] = 0;
      }
    }
  }

  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (is_prime[i]) {
      if (sum > UINT64_MAX - i) {
        throw std::overflow_error("sumPrime: uint64_t overflow");
      }
      sum += i;
    }
  }

  return sum;
}
