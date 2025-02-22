// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include <vector>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1) {
    return false;
  }
  for (int i = 2; i <= pow(value, 0.5); ++i) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n < 1) return -1;
  int limit;
  if (n < 6) {
    limit = 15;
  } else {
      limit = static_cast<int>(n * (log(n) + log(log(n))));
    }

    int kount = 0;
    int k;

    std::vector<bool> arr;

  do {
      kount = 0;
      arr.resize(limit, true);
      arr[0] = arr[1] == false;

    for (int num = 2; num * num < limit; ++num) {
      if (arr[num]) {
          k = num;
          ++kount;
        if (kount == n) {
            return k;
          }
        for (int sm = num * num; sm < limit; sm += num) {
            arr[sm] = false;
          }
        }
      }

      limit *= 2;
    } while (kount < n);

    return k;
  }

uint64_t nextPrime(uint64_t value) {
    uint64_t sl = value + 1;
  while (!checkPrime(sl)) {
      ++sl;
    }
    return sl;
  }

uint64_t sumPrime(uint64_t hbound) {
  if (hbound <= 1) {
      return 0;
    }
    std::vector<bool> arr(hbound, true);

    int64_t sum = 0;
    arr[0] = arr[1] = false;
  for (int n = 2; n * n < hbound; ++n) {
    if (arr[n]) {
      for (int sm = n * n; sm < hbound; sm += n) {
          arr[sm] = false;
        }
      }
    }

  for (int i = 0; i < hbound; ++i) {
    if (arr[i]) {
        sum += i;
      }
    }

    return sum;
  }
