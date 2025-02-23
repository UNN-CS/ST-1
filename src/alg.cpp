// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) {
      return false;
  }
      for (int i = 2; i * i <= value; i++) {
          if (value % i == 0) {
          return false;
          }
      }
      return true;
}

uint64_t nPrime(uint64_t n) {
  int count = 0;
  int number = 1;
      while (count < n) {
          number++;
          if (checkPrime(number)) {count++};
      }
          return number;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t next = value + 1;
      while (!(checkPrime(next))) { 
          next++; 
      }
      return next;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
      for (int i = 2; i < hbound; i++) {
          if (checkPrime(i)) {
              sum += i;
          }
      }
      return sum;
}
