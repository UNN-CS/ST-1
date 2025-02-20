// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"
#include <cmath>
#include <vector>


bool checkPrime(uint64_t value) {
  if (value <= 1) {
    return false;
  }
  for (uint64_t i = 2; i <= std::sqrt(value); i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) return 0;

  uint64_t primes = 0;
  uint64_t current = 2;

  while (primes < n) {
    if (checkPrime(current)) {
      primes++;
      if (primes == n) {
        return current;
      }
    }
    current++;
  }
  return current;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t nextNum = value + 1;
  while (!checkPrime(nextNum)) {
    nextNum++;
  }
  return nextNum;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
