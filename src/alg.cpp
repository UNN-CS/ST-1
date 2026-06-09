// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"

namespace {

bool divisibleBy(uint64_t number, uint64_t divisor) {
  return number % divisor == 0;
}

}  

bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  if (value == 2 || value == 3) {
    return true;
  }
  if (divisibleBy(value, 2) || divisibleBy(value, 3)) {
    return false;
  }

  uint64_t factor = 5;
  while (factor * factor <= value) {
    if (divisibleBy(value, factor) || divisibleBy(value, factor + 2)) {
      return false;
    }
    factor += 6;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }

  uint64_t ordinal = 0;
  uint64_t current = 1;
  while (ordinal < n) {
    current++;
    if (checkPrime(current)) {
      ordinal++;
    }
  }
  return current;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t candidate = value;
  do {
    candidate++;
  } while (!checkPrime(candidate));
  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t total = 0;
  uint64_t current = 2;
  while (current < hbound) {
    if (checkPrime(current)) {
      total += current;
    }
    current++;
  }
  return total;
}
