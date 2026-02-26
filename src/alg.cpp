// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include <stdexcept>
#include <limits>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value > static_cast<uint64_t>(std::numeric_limits<int64_t>::max())) {
    throw std::invalid_argument("Error: value is too large");
  }

  if (value <= 1)
    return false;
  if (value <= 3)
    return true;
  if (value % 2 == 0)
    return false;

  uint64_t limit = static_cast<uint64_t>(std::sqrt(value));
  for (uint64_t i = 3; i <= limit; i += 2) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n > static_cast<uint64_t>(std::numeric_limits<int64_t>::max())) {
    throw std::invalid_argument("Error: n is too large or negative");
  }

  if (n == 0) {
    throw std::invalid_argument("Error: n cannot be zero");
  }

  if (n == 1)
    return 2;

  uint64_t count = 1;
  uint64_t candidate = 3;
  while (true) {
    if (checkPrime(candidate)) {
      count++;
      if (n == count)
        return candidate;
    }
    candidate += 2;
  }
}

uint64_t nextPrime(uint64_t value) {
  if (value > static_cast<uint64_t>(std::numeric_limits<int64_t>::max())) {
    throw std::invalid_argument("Error: value is too large or negative");
  }
  if (value < 2)
    return 2;

  uint64_t candidate = value + 1;
  if (candidate % 2 == 0)
    candidate++;

  uint64_t prev_candidate = candidate;

  while (true) {
    if (checkPrime(candidate)) {
      return candidate;
    }
    candidate += 2;

    if (candidate < prev_candidate) {
      throw std::overflow_error("Error: no prime found within uint64_t range");
    }
    prev_candidate = candidate;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound > static_cast<uint64_t>(std::numeric_limits<int64_t>::max())) {
    throw std::invalid_argument("Error: hbound is too large or negative");
  }

  uint64_t sum = 0;

  for (uint64_t i = 2; i < hbound; ++i) {
    if (checkPrime(i)) {
      if (sum > std::numeric_limits<uint64_t>::max() - i) {
        throw std::overflow_error("Error: sum would overflow uint64_t");
      }
      sum += i;
    }
  }

  return sum;
}
