// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) return false;
  if (value == 2) return true;
  if (value % 2 == 0) return false;
  for (uint64_t d = 3; (d * d) <= value; d += 2) {
    if (value % d == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t res = 0;
  while (n-- > 0) {
    res = nextPrime(res);
  }
  return res;
}

uint64_t nextPrime(uint64_t value) {
  if (value < 2) return 2;
  value += 1 + (value % 2);
  while (!checkPrime(value)) {
    value += 2;
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t result = 0;
  uint64_t number = 0;
  while ((number = nextPrime(number)) < hbound) {
    result += number;
  }
  return result;
}
