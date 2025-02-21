// Copyright 2025 UNN-CS
#include <cmath>
#include <cstdint>
#include "alg.h"


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
  uint64_t result = 0;
  while (n-- > 0) {
    result = nextPrime(result);
  }
  return result;
}

uint64_t nextPrime(uint64_t value) {
  while (!checkPrime(++value)) {}
  // }
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
