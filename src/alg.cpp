// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value == 0 || value == 1) {
    return false;
  }

  bool flagPrime = true;

  for (uint64_t i = 2; i * i <= value; i++) {
    if (value % i == 0) {
      flagPrime = false;
      break;
    }
  }

  return flagPrime;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }

  uint64_t number = 2;
  uint64_t index = 1;

  while(index <= n) {
    if (checkPrime(number)) {
      if (index == n) {
        break;
      }
      index++;
    }
    number++;
  }

  return number;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t number = value + 1;

  while (!checkPrime(number)) {
    number++;
  }

  return number;
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound <= 2) {
    return 0;
  }

  uint64_t sum = 0;
  uint64_t number = 2;

  while (number < hbound) {
    sum += number;
    number = nextPrime(number);
  }

  return sum;
}
