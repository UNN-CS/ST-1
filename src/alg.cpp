// Copyright 2025 UNN-CS
#include <cstdint>
#include <vector>
#include "alg.h"

bool checkPrime(uint64_t value) {
if (value < 2) return false;
if (value == 2 || value == 3) return true;
if (value % 2 == 0 || value % 3 == 0) return false;

for (uint64_t i = 5; i * i <= value; i += 6) {
  if (value % i == 0 || value % (i + 2) == 0) return false;
}
return true;
}

uint64_t nPrime(uint64_t n) {
if (n == 0) return 0;
std::vector<uint64_t> primes;
uint64_t num = 2;
while (primes.size() < n) {
    if (checkPrime(num)) {
        primes.push_back(num);
    }
    ++num;
}
return primes[n - 1];
}

uint64_t nextPrime(uint64_t value) {
  if (value < 2) return 2;
uint64_t candidate = value + 1;
while (!checkPrime(candidate)) {
    ++candidate;
}
return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
for (uint64_t i = 2; i < hbound; ++i) {
    if (checkPrime(i)) {
        sum += i;
    }
}
return sum;
}
