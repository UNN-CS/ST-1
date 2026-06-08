// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) return false;
  if (value == 2) return true;
  if (value % 2 == 0) return false;
  for (uint64_t d = 3; d * d <= value; d += 2) {
    if (value % d == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) return 0;
  uint64_t found = 0;
  uint64_t num = 2;
  while (true) {
    if (checkPrime(num)) {
      found++;
      if (found == n) return num;
    }
    num++;
  }
}

uint64_t nextPrime(uint64_t value) {
  uint64_t next = value + 1;
  while (!checkPrime(next)) {
    next++;
  }
  return next;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t total = 0;
  for (uint64_t num = 2; num < hbound; num++) {
    if (checkPrime(num)) {
      total += num;
    }
  }
  return total;
}
