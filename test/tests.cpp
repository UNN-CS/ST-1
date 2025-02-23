// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"



TEST(st1, checkPrime1) {
  EXPECT_FALSE(checkPrime(0)); // 0 �� �������� �������
  EXPECT_FALSE(checkPrime(1)); // 1 �� �������� �������
}

TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(2));  // 2 � ������� �����
  EXPECT_TRUE(checkPrime(3));  // 3 � ������� �����
}

TEST(st1, checkPrime3) {
  EXPECT_FALSE(checkPrime(4)); // 4 � ��������� �����
  EXPECT_TRUE(checkPrime(5));  // 5 � ������� �����
}

TEST(st1, checkPrime4) {
  EXPECT_FALSE(checkPrime(9));  // 9 � ��������� �����
  EXPECT_TRUE(checkPrime(17));  // 17 � ������� �����
}

TEST(st1, checkPrime5) {
  EXPECT_FALSE(checkPrime(100)); // 100 � ��������� �����
  EXPECT_TRUE(checkPrime(97));   // 97 � ������� �����
}

TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(1), 2);  // ������ ������� ����� � 2
  EXPECT_EQ(nPrime(2), 3);  // ������ ������� ����� � 3
  EXPECT_EQ(nPrime(3), 5);  // ������ ������� ����� � 5
}

TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(5), 11);  // ����� ������� ����� � 11
  EXPECT_EQ(nPrime(10), 29); // ������� ������� ����� � 29
}

TEST(st1, nPrime3) {
  EXPECT_EQ(nPrime(20), 71);  // ��������� ������� ����� � 71
  EXPECT_EQ(nPrime(50), 229); // ��������������� ������� ����� � 229
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(1), 2);  // ��������� ������� ����� 1 � 2
  EXPECT_EQ(nextPrime(2), 2);  // 2 ���� �������� �������
  EXPECT_EQ(nextPrime(3), 3);  // 3 ���� �������� �������
}

TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(4), 5);  // ��������� ������� ����� 4 � 5
  EXPECT_EQ(nextPrime(10), 11); // ��������� ������� ����� 10 � 11
}

TEST(st1, nextPrime3) {
  EXPECT_EQ(nextPrime(17), 17); // 17 ���� �������� �������
  EXPECT_EQ(nextPrime(18), 19); // ��������� ������� ����� 18 � 19
}

TEST(st1, nextPrime4) {
  EXPECT_EQ(nextPrime(97), 97); // 97 ���� �������� �������
  EXPECT_EQ(nextPrime(98), 101); // ��������� ������� ����� 98 � 101
}

TEST(st1, sumPrime1) {
  EXPECT_EQ(sumPrime(10), 17); // ����� ������� ����� < 10: 2 + 3 + 5 + 7 = 17
  EXPECT_EQ(sumPrime(20), 77); // ����� ������� ����� < 20: 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19 = 77
}

TEST(st1, sumPrime2) {
  EXPECT_EQ(sumPrime(50), 328); // ����� ������� ����� < 50
  EXPECT_EQ(sumPrime(100), 1060); // ����� ������� ����� < 100
}

TEST(st1, sumPrime3) {
  EXPECT_EQ(sumPrime(2000000), 142913828922); // ����� ������� ����� < 2000000
}

TEST(st1, sumPrime4) {
  EXPECT_EQ(sumPrime(1), 0); // ��� ������� ����� < 1
  EXPECT_EQ(sumPrime(2), 2); // ������������ ������� ����� < 2 � ��� 2
}
