// Copyright 2025 UNN-CS
#include <cmath>
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  if (value % 2 == 0) {
    return value == 2;
  }
  uint64_t sqrt = std::sqrt(value);
  for (uint64_t i = 3; i <= sqrt; i += 2) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t r = 0;
  for (uint64_t i = 0; i < n; i++) {
    r = nextPrime(r);
  }
  return r;
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
    value++;
    if (checkPrime(value)) {
      break;
    }
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t result = 0;
  uint64_t number = nextPrime(0);
  while (number < hbound) {
    result += number;
    number = nextPrime(number);
  }
  return result;
}
