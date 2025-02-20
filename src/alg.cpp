// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) return false;
  if (value == 2 || value == 3) return true;
  if (value % 2 == 0) return false;
  for (uint64_t i = 3; i * i <= value; i += 2) {
  if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n < 1) return 0;
  uint64_t count = 0;
  uint64_t current = 1;
  while (true) {
    current++;
  if (checkPrime(current)) {
      count++;
  if (count == n) {
        return current;
      }
    }
  }
}

uint64_t nextPrime(uint64_t value) {
  uint64_t candidate = value + 1;
  while (true) {
  if (checkPrime(candidate)) {
      return candidate;
    }
    candidate++;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
  if (checkPrime(i)) {
      sum += 1;
    }
  }
  return sum;
}
