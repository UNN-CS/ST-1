// Copyright 2025 UNN-CS
#include <cmath>
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    if (value <= 1) return false;
    if (value == 2) return true;
    if (value % 2 == 0) return false;
    
    uint64_t limit = sqrt(value);
    for(uint64_t i = 3; i <= limit; i += 2) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    if (n == 0) return 0;
    uint64_t counter = 0;
    uint64_t number = 1;
    
    while (counter < n) {
        number++;
        if (checkPrime(number)) {
            counter++;
        }
    }
    return number;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t val = value + 1;
    while (!checkPrime(val)) {
        val++;
    }
    return val;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
