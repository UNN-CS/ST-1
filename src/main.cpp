// Copyright 2022 NNTU-CS
#include <iostream>
#include "alg.h"
int main() {
    int64_t input = 0;
    std::cout << "Enter integer to check if it's a prime number: ";
    std::cin >> input;
    std::cout << "\"" << input << "\" "
        "is " << (checkPrime(input) ? "" : "not ") << "a prime number\n";
    return 0;
}
