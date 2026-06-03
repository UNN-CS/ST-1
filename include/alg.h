// Copyright 2024 Nazyrov A.A.

#ifndef INCLUDE_ALG_H_
#define INCLUDE_ALG_H_

#include <cstdint>

/**
 * Проверяет, является ли число простым
 * @param value проверяемое число
 * @return true если число простое, false иначе
 */
bool isPrimeNumber(uint64_t value);

/**
 * Находит n-ое простое число в ряду
 * @param n порядковый номер (начиная с 1)
 * @return n-ое простое число
 */
uint64_t getNthPrime(uint64_t n);

/**
 * Находит ближайшее следующее простое число
 * @param value число, после которого нужно искать
 * @return ближайшее простое число больше value
 */
uint64_t findNextPrime(uint64_t value);

/**
 * Вычисляет сумму всех простых чисел до hbound
 * @param hbound верхняя граница (не включается)
 * @return сумма простых чисел
 */
uint64_t sumPrimesUpTo(uint64_t hbound);

#endif  // INCLUDE_ALG_H_
