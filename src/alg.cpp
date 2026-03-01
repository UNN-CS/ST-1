// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include <vector>
#include "alg.h"

// Функция для проверки, является ли число простым
bool checkPrime(uint64_t value) {
    if (value <= 1) {
        return false;
    }
    if (value <= 3) {
        return true;
    }
    if (value % 2 == 0 || value % 3 == 0) {
        return false;
    }
    for (uint64_t i = 5; i * i <= value; i = i + 6) {
        if (value % i == 0 || value % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Функция для нахождения n-го простого числа
uint64_t nPrime(uint64_t n) {
    if (n == 0) {
        return 0; // Неопределено, но 0 - разумное значение по умолчанию
    }
    if (n == 1) {
        return 2;
    }
    uint64_t count = 1;
    uint64_t candidate = 1;
    while (count < n) {
        candidate += 2;
        if (checkPrime(candidate)) {
            count++;
        }
    }
    return candidate;
}

// Функция для нахождения следующего простого числа
uint64_t nextPrime(uint64_t value) {
    uint64_t num = value + 1;
    // для четных чисел, кроме 2, следующее простое будет нечетным
    if (num <= 2) return 2;
    if (num % 2 == 0) {
        num++;
    }
    while (true) {
        if (checkPrime(num)) {
            return num;
        }
        num += 2;
    }
}

// Функция для вычисления суммы простых чисел до hbound
uint64_t sumPrime(uint64_t hbound) {
    if (hbound <= 2) {
        return 0;
    }
    std::vector<bool> is_prime(hbound, true);
    is_prime[0] = is_prime[1] = false;
    for (uint64_t p = 2; p * p < hbound; p++) {
        if (is_prime[p]) {
            for (uint64_t i = p * p; i < hbound; i += p)
                is_prime[i] = false;
        }
    }
    uint64_t sum = 0;
    for (uint64_t p = 2; p < hbound; p++) {
        if (is_prime[p]) {
            sum += p;
        }
    }
    return sum;
}
