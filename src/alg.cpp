// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (int i = 2; i <  static_cast<uint64_t>(std::sqrt(value)) + 1; i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int counter = 0;
  int num = 2;
  while (counter != n) {
    if (checkPrime(num)) {
      counter++;
    }
    num++;
  }
  return num;
}

uint64_t nextPrime(uint64_t value) {
  int num = value + 1;
  while (!checkPrime(num)) {
    num++;
  }
  return num;
}

uint64_t sumPrime(uint64_t hbound) {
  int s = 0;
  for (int i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      s += i;
    }
  }
  return s;
}
