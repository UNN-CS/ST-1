// Copyright 2025 UNN-CS

#include <cstdint>

#include "alg.h"

bool checkPrime(uint64_t value) {
  for (auto i = 2; i < static_cast<int>(std::sqrt(value)); ++i) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  auto primeNumber = 2;
  for (auto i = 1; i < static_cast<int>(n); ++i) {
    primeNumber = nextPrime(primeNumber);
  }
  return primeNumber;
}

uint64_t nextPrime(uint64_t value) {
  auto nextPrimeNumber = 0;
  for (auto i = value + 1; i < static_cast<int>(value * value); ++i) {
    if (checkPrime(i)) {
      nextPrimeNumber = i;
      break;
    }
  }
  return nextPrimeNumber;
}

uint64_t sumPrime(uint64_t hbound) {
  auto sum = 2;
  auto prime = 2;
  auto counter = 1;
  while (counter != static_cast<int>(nbound)) {
    prime = nextPrime(prime);
    sum += prime;
    counter++;
  }
  return sum;
}
