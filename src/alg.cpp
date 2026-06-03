// Copyright 2024 Nazyrov A.A.

#include "alg.h"
#include <cmath>

bool isPrimeNumber(uint64_t value) {
    if (value < 2) return false;
    if (value == 2) return true;
    if (value % 2 == 0) return false;
    
    uint64_t limit = static_cast<uint64_t>(std::sqrt(value));
    for (uint64_t i = 3; i <= limit; i += 2) {
        if (value % i == 0) return false;
    }
    return true;
}

uint64_t getNthPrime(uint64_t n) {
    if (n == 0) return 0;
    
    uint64_t count = 0;
    uint64_t candidate = 1;
    
    while (count < n) {
        candidate++;
        if (isPrimeNumber(candidate)) {
            count++;
        }
    }
    return candidate;
}

uint64_t findNextPrime(uint64_t value) {
    uint64_t candidate = value + 1;
    while (!isPrimeNumber(candidate)) {
        candidate++;
    }
    return candidate;
}

uint64_t sumPrimesUpTo(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; ++i) {
        if (isPrimeNumber(i)) {
            sum += i;
        }
    }
    return sum;
}
