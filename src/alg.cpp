#include <cstdint>
#include <cmath>

// Проверка числа на простоту
bool checkPrime(uint64_t value) {
    if (value < 2) return false;
    if (value == 2 || value == 3) return true;
    if (value % 2 == 0 || value % 3 == 0) return false;

    for (uint64_t i = 5; i * i <= value; i += 6) {
        if (value % i == 0 || value % (i + 2) == 0)
            return false;
    }
    return true;
}

// Нахождение n-го простого числа
uint64_t nPrime(uint64_t n) {
    if (n == 0) return 0;

    uint64_t count = 0, num = 1;
    while (count < n) {
        num++;
        if (checkPrime(num))
            count++;
    }
    return num;
}

// Нахождение ближайшего следующего простого числа
uint64_t nextPrime(uint64_t value) {
    if (value < 2) return 2;

    do {
        value++;
    } while (!checkPrime(value));

    return value;
}

// Сумма всех простых чисел до hbound (не включая hbound)
uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i))
            sum += i;
    }
    return sum;
}