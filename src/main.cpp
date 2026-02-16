// Copyright 2025 UNN-CS
#include <iostream>
#include "alg.h"

int main() {
  uint64_t checkNum = 13;
  std::cout << "checkPrime " << checkNum << ": "
            << checkPrime(checkNum) << std::endl;

  uint64_t position = 5;
  std::cout << "nPrime " << position << ": "
            << nPrime(position) << std::endl;

  uint64_t value = 1000;
  std::cout << "nextPrime of " << value << ": "
            << nextPrime(value) << std::endl;

  uint64_t numberOfPrimes = 2000000;
  std::cout << "sumPrime of " << numberOfPrimes << ": "
            << sumPrime(numberOfPrimes) << std::endl;

  uint64_t res = nextPrime(142913828879ULL);
  uint64_t expected = 142913828947ULL;
  std::cout << res << " " << expected << " " << (res == expected);
  return 0;
}
