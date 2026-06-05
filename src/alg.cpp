// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    if (value < 2) return false;
    if (value == 2 || value == 3) return true;
    if (value % 2 == 0 || value % 3 == 0) return false;
    uint64_t divisor = 5;
    while (divisor * divisor <= value) {
        if (value % divisor == 0 || value % (divisor + 2) == 0)
            return false;
        divisor += 6;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t found = 0;
    uint64_t num = 1;
    while (found < n) {
        num++;
        if (checkPrime(num))
            found++;
    }
    return num;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t candidate = value + 1;
    while (!checkPrime(candidate))
        candidate++;
    return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t result = 0;
    for (uint64_t n = 2; n < hbound; n++) {
        if (checkPrime(n))
            result += n;
    }
    return result;
}
