// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) return false;
  if (value == 2) return true;
  if (value % 2 == 0) return false;
  uint64_t limit = static_cast<uint64_t>(std::sqrt(value));
  for (uint64_t i = 3; i <= limit; i += 2) {
    if (value % i == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) throw std::invalid_argument("n must be greater than 0");
  uint64_t count = 0;
  uint64_t number = 1;
  while (count < n) {
    ++number;
    if (checkPrime(number)) ++count;
  }
  return number;
}

uint64_t nextPrime(uint64_t value) {
  ++value;
  while (!checkPrime(value)) ++value;
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound <= 2) return 0;
  uint64_t sum = 2;
  for (uint64_t i = 3; i < hbound; i += 2) {
    if (checkPrime(i)) sum += i;
  }
  return sum;
}
