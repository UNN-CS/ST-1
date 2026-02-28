// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime1) {
  bool res = checkPrime(0);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime2) {
  bool res = checkPrime(1);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime3) {
  bool res = checkPrime(2);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime4) {
  bool res = checkPrime(3);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime5) {
  bool res = checkPrime(4);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime6) {
  bool res = checkPrime(5);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime7) {
  bool res = checkPrime(7);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime8) {
  bool res = checkPrime(9);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime9) {
  bool res = checkPrime(13);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime10) {
  bool res = checkPrime(15);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime11) {
  bool res = checkPrime(17);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime12) {
  bool res = checkPrime(21);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime13) {
  bool res = checkPrime(23);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime14) {
  bool res = checkPrime(25);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime15) {
  bool res = checkPrime(29);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime16) {
  bool res = checkPrime(31);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime17) {
  bool res = checkPrime(35);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime18) {
  bool res = checkPrime(37);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime19) {
  bool res = checkPrime(97);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime20) {
  bool res = checkPrime(100);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime21) {
  bool res = checkPrime(997);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime22) {
  bool res = checkPrime(999);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime23) {
  bool res = checkPrime(7919);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime24) {
  bool res = checkPrime(7921);
  bool expected = false;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime1) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime2) {
  uint64_t res = nPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime3) {
  uint64_t res = nPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime4) {
  uint64_t res = nPrime(4);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime5) {
  uint64_t res = nPrime(5);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime6) {
  uint64_t res = nPrime(6);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime7) {
  uint64_t res = nPrime(7);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime8) {
  uint64_t res = nPrime(8);
  uint64_t expected = 19;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime9) {
  uint64_t res = nPrime(9);
  uint64_t expected = 23;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime10) {
  uint64_t res = nPrime(10);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime11) {
  uint64_t res = nPrime(15);
  uint64_t expected = 47;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime12) {
  uint64_t res = nPrime(20);
  uint64_t expected = 71;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime13) {
  uint64_t res = nPrime(25);
  uint64_t expected = 97;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime14) {
  uint64_t res = nPrime(30);
  uint64_t expected = 113;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime15) {
  uint64_t res = nPrime(50);
  uint64_t expected = 229;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime16) {
  uint64_t res = nPrime(100);
  uint64_t expected = 541;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime17) {
  uint64_t res = nPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(4);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime5) {
  uint64_t res = nextPrime(5);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime6) {
  uint64_t res = nextPrime(6);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime7) {
  uint64_t res = nextPrime(7);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime8) {
  uint64_t res = nextPrime(8);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime9) {
  uint64_t res = nextPrime(9);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime10) {
  uint64_t res = nextPrime(10);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime11) {
  uint64_t res = nextPrime(11);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime12) {
  uint64_t res = nextPrime(12);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime13) {
  uint64_t res = nextPrime(13);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime14) {
  uint64_t res = nextPrime(14);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime15) {
  uint64_t res = nextPrime(15);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime16) {
  uint64_t res = nextPrime(16);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime17) {
  uint64_t res = nextPrime(17);
  uint64_t expected = 19;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime18) {
  uint64_t res = nextPrime(18);
  uint64_t expected = 19;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime19) {
  uint64_t res = nextPrime(19);
  uint64_t expected = 23;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime20) {
  uint64_t res = nextPrime(20);
  uint64_t expected = 23;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime21) {
  uint64_t res = nextPrime(24);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime22) {
  uint64_t res = nextPrime(90);
  uint64_t expected = 97;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime23) {
  uint64_t res = nextPrime(114);
  uint64_t expected = 127;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime24) {
  uint64_t res = nextPrime(118);
  uint64_t expected = 127;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime25) {
  uint64_t res = nextPrime(120);
  uint64_t expected = 127;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(3);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(4);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(5);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime5) {
  uint64_t res = sumPrime(6);
  uint64_t expected = 10;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime6) {
  uint64_t res = sumPrime(7);
  uint64_t expected = 10;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime7) {
  uint64_t res = sumPrime(8);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime8) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime9) {
  uint64_t res = sumPrime(11);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime10) {
  uint64_t res = sumPrime(12);
  uint64_t expected = 28;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime11) {
  uint64_t res = sumPrime(13);
  uint64_t expected = 28;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime12) {
  uint64_t res = sumPrime(14);
  uint64_t expected = 41;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime13) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime14) {
  uint64_t res = sumPrime(30);
  uint64_t expected = 129;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime15) {
  uint64_t res = sumPrime(50);
  uint64_t expected = 328;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime16) {
  uint64_t res = sumPrime(100);
  uint64_t expected = 1060;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime17) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
