// Copyright 2025 UNN-CS
#include <cstdint>
#include <stdexcept>

#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value == 1) {
    return false;
  }
  if (value == 2 || value == 3) {
    return true;
  }

  if (value % 2 == 0) {
    return false;
  }

  for (uint64_t i = 3; i * i <= value; i += 2) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    throw std::invalid_argument("Prime index n must be greater than 0");
  }

  int count = 1;
  int curr_n = 2;

  while (count != n) {
    if (curr_n == UINT64_MAX) {
      throw std::overflow_error("Can't find prime number: uint64_t overflow");
    }
    curr_n++;

    if (checkPrime(curr_n)) {
      count++;
    }
  }

  return curr_n;
}

uint64_t nextPrime(uint64_t value) {
  if (value == UINT64_MAX) {
    throw std::overflow_error("Can't find prime number: uint64_t overflow");
  }

  uint64_t candidate = value + 1;

  while (!checkPrime(candidate)) {
    if (candidate == UINT64_MAX) {
      throw std::overflow_error("Can't find prime number: uint64_t overflow");
    }
    candidate++;
  }

  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t total = hbound > 2 ? 2 : 0;

  for (uint64_t i = 3; i < hbound; i += 2) {
    if (checkPrime(i)) {
      if (total > UINT64_MAX - i) {
        throw std::overflow_error("Sum of primes exceeds uint64_t limit");
      }
      total += i;
    }
  }

  return total;
}
