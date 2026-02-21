// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value <= 1) return false;

  for (uint64_t i = 2; i < value; i += 1) {
    if (value % i == 0) {
      return false;
    }
  }

  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n < 1) return 0;
  
  uint64_t idx = 1;
  uint64_t value = 2;

  while (idx < n) {
    value += 1;
    
    if (checkPrime(value)) {
      idx += 1;
    }
  }
  
  return value;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t nextValue = value;

  while (true) {
    nextValue += 1;

    if (checkPrime(nextValue)) {
      return nextValue;
    }
  }

  return -1;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t nextValue = 2;
  uint64_t summary = 0;

  while (nextValue < hbound) {
    if (checkPrime(nextValue)) {
      summary += nextValue;
    }
    
    nextValue += 1;
  }

  return summary;
}
