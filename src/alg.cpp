<<<<<<< HEAD
// Copyright 2026 Klimovich V.O.
=======
// Copyright 2025 UNN-CS
>>>>>>> 566a3a353ca7379720bbabadbce79d98c2d8a92b
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
<<<<<<< HEAD
    if (value < 2) return false;
    if (value == 2) return true;
    if (value % 2 == 0) return false;

    for (uint64_t i = 3; i * i <= value; i += 2) {
        if (value % i == 0) return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    if (n == 0) return 0;

    uint64_t count = 0;
    uint64_t x = 1;

    while (count < n) {
        x++;
        if (checkPrime(x)) count++;
    }
    return x;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t x = value + 1;

    while (!checkPrime(x)) {
        x++;
    }
    return x;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t s = 0;

    for (uint64_t i = 2; i < hbound; ++i) {
        if (checkPrime(i)) s += i;
    }
    return s;
}
=======
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
  uint64_t count = 0;
  uint64_t num = 1;
  while (count < n) {
    ++num;
    if (checkPrime(num)) ++count;
  }
  return num;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t candidate = value + 1;
  while (!checkPrime(candidate)) ++candidate;
  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; ++i) {
    if (checkPrime(i)) sum += i;
  }
  return sum;
}
>>>>>>> 566a3a353ca7379720bbabadbce79d98c2d8a92b
