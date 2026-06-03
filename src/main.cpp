// Copyright 2024 Nazyrov A.A.

#include <iostream>
#include "alg.h"

int main() {
    std::cout << "=== Prime Numbers Library ===\n";
    std::cout << "Is 17 prime? " << (isPrimeNumber(17) ? "Yes" : "No") << "\n";
    std::cout << "5th prime number: " << getNthPrime(5) << "\n";
    std::cout << "Next prime after 20: " << findNextPrime(20) << "\n";
    std::cout << "Sum of primes up to 10: " << sumPrimesUpTo(10) << "\n";
    return 0;
}
