// Copyright 2025 UNN-CS
#include "alg.h"
#include <cstdint>
#include <limits>

bool checkPrime(uint64_t value) {
    if (value < 2)
        return false;
    for (uint64_t i = 2; i * i <= value; i++) {
        if (value % i == 0)
            return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t count = 0;
    for (uint64_t i = 2; i < std::numeric_limits<uint64_t>::max(); i++) {
        if (checkPrime(i))
            count++;
        if (count == n)
            return i;
    }
    return -1;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t i = value + 1;
    while (i < std::numeric_limits<uint64_t>::max()) {
        if (checkPrime(i))
            return i;
        i++;
    }
    return -1;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i))
            sum += i;
    }
    return sum;
}
