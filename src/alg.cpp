// Copyright 2025 UNN-CS
#include "alg.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <vector>
std::vector<uint64_t> primes={2,3,5};
uint64_t last_checked = 6;
void newPrimes(uint64_t n) {
  n++;
  if (n <= last_checked) return;
  std::vector<uint64_t> tmp = std::vector<uint64_t>(n, 1);
  for (int i = 2; i < sqrt(n) + 1; i++) {
    if (tmp[i] != 0)  for (int j = i * i; j < n; j += i) tmp[j] = 0;
  }
  if (n > 2) {
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
  }
  for (int i = last_checked; i < n; i++)  if (tmp[i] == 1) primes.push_back(i);
  last_checked = n;
}

bool checkPrime(uint64_t value) {
  if (value == 2) return true;
  if ((value < 2) || (value % 2 == 0)) return false;
  if (last_checked < value) newPrimes(value);
  return std::find(primes.begin(), primes.end(), value) != primes.end();
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) throw "wrong value";
  while (primes.size() < n) newPrimes(last_checked + n * 5);
  return primes[n - 1];
}

uint64_t nextPrime(uint64_t value) {
  if (value < 2) return 2;
  while ((last_checked < value) || (primes[primes.size() - 1] <= value)) newPrimes(last_checked + value * 5);
  uint64_t e = primes.size() - 1, b = 0;
  uint64_t s = e / 2;
  while (primes[s] != value) {
    if (e - b == 1) return primes[e];
    if (value > primes[s])  b = s;
    else  e = s;
    s = (b + e) / 2;
  }
  return primes[s + 1];
}

uint64_t sumPrime(uint64_t hbound) {
  while (primes[primes.size() - 1] < hbound) newPrimes(last_checked + hbound * 5);
  uint64_t sm = 0;
  for (int i = 0; primes[i] < hbound; i++) sm += primes[i];
  return sm;
}
