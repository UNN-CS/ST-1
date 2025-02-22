// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include <utility>
#include "alg.h"

class SumPrimeFixture
    : public ::testing::TestWithParam<std::pair<uint64_t, uint64_t>> {
};
TEST_P(SumPrimeFixture, CheckResult) {
  auto&& [in, out] = GetParam();
  EXPECT_EQ(sumPrime(in), out);
}
INSTANTIATE_TEST_CASE_P(
  SumPrime,
  SumPrimeFixture,
  ::testing::Values(
    std::make_pair(2000000, 142913828922),
    std::make_pair(10, 17),
    std::make_pair(0, 0),
    std::make_pair(1, 0),
    std::make_pair(2, 0),
    std::make_pair(3, 2),
    std::make_pair(6, 10)
  )
);

class NPrimeFixture
    : public ::testing::TestWithParam<std::pair<uint64_t, uint64_t>> {
};
TEST_P(NPrimeFixture, CheckResult) {
  auto&& [in, out] = GetParam();
  EXPECT_EQ(nPrime(in), out);
}
INSTANTIATE_TEST_CASE_P(
  NPrime,
  NPrimeFixture,
  ::testing::Values(
    std::make_pair(0, 0),
    std::make_pair(1, 2),
    std::make_pair(2, 3),
    std::make_pair(5, 11)
  )
);

class NextPrimeFixture
    : public ::testing::TestWithParam<std::pair<uint64_t, uint64_t>> {
};
TEST_P(NextPrimeFixture, CheckResult) {
  auto&& [in, out] = GetParam();
  EXPECT_EQ(nextPrime(in), out);
}
INSTANTIATE_TEST_CASE_P(
  NextPrime,
  NextPrimeFixture,
  ::testing::Values(
    std::make_pair(0, 2),
    std::make_pair(1, 2),
    std::make_pair(2, 3),
    std::make_pair(3, 5),
    std::make_pair(99, 101)
  )
);
