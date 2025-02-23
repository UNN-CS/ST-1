// Copyright 2025 UNN-CS
#include "alg.h"
#include "math.h"
#include <cstdint>
#include <vector>

bool checkPrime(uint64_t value) {
  if (value <= 1) {
    return false;
  }
  if (value <= 3) {
    return true;
  }
  if (value % 2 == 0 || value % 3 == 0) {
    return false;
  }
  uint64_t border = floor(sqrt(value)) + 1;
  for (uint64_t i = 5; i < border; i += 6) {
    if ((value % i) == 0 || (value % (i + 2)) == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }
  int count = 0;
  uint64_t res = 1;
  while (count != n) {
    res++;
    if (checkPrime(res)) {
      count++;
    }
  }
  return res;
}

uint64_t nextPrime(uint64_t value) {
  if (checkPrime(value)) {
    return value;
  }
  if (value <= 2) {
    return 2;
  }
  uint64_t next = value % 2 == 0 ? value + 1 : value + 2;
  while (!checkPrime(next)) {
    next += 2;
  }
  return next;
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound < 2) {
    return 0;
  }

  std::vector<bool> vec(hbound, true);
  vec[0] = vec[1] = false;

  for (uint64_t i = 2; i * i < hbound; ++i) {
    if (vec[i]) {
      for (uint64_t j = i * i; j < hbound; j += i) {
        vec[j] = false;
      }
    }
  }

  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; ++i) {
    if (vec[i]) {
      sum += i;
    }
  }
  return sum;
}
