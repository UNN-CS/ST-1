// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (int i = 2; i <= sqrt(value); i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t result = 2;
  n--;
  while (n > 0) {
    result++;
    if (checkPrime(result)) n--;
  }
  return result;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t next = value + 1;
  while (!checkPrime(next)) {
    next++;
  }
  return next;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i)) sum += i;
  }
  return sum;
}
