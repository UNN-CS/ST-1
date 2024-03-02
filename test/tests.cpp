// Copyright 2024 Chuvashov Andrey

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrimeTests, smallOne) {
    EXPECT_TRUE(checkPrime(19));
    EXPECT_FALSE(checkPrime(21));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_FALSE(checkPrime(18));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_TRUE(checkPrime(31));
}

TEST(checkPrimeTests, middleOne) {
    EXPECT_TRUE(checkPrime(999'331));
    EXPECT_FALSE(checkPrime(41041));
    EXPECT_TRUE(checkPrime(115'249));
    EXPECT_FALSE(checkPrime(145'925));
    EXPECT_TRUE(checkPrime(181'081));
    EXPECT_FALSE(checkPrime(823'024));
    EXPECT_TRUE(checkPrime(65537));
}

TEST(checkPrimeTests, hugeOne) {
    EXPECT_TRUE(checkPrime(39'916'801));
    EXPECT_FALSE(checkPrime(213'469'225));
    EXPECT_TRUE(checkPrime(2'097'593));
    EXPECT_FALSE(checkPrime(260'236'205));
    EXPECT_TRUE(checkPrime(479'001'599));
    EXPECT_FALSE(checkPrime(823'915'114));
    EXPECT_TRUE(checkPrime(54'018'521));
}

TEST(nPrimeTests, smallOne) {
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(10), 29);
}

TEST(nPrimeTests, middleOne) {
    EXPECT_EQ(nPrime(50), 229);
    EXPECT_EQ(nPrime(70), 349);
    EXPECT_EQ(nPrime(90), 463);
    EXPECT_EQ(nPrime(99), 523);
    EXPECT_EQ(nPrime(105), 571);
}

TEST(nextPrimeTests, smallOne) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(23), 29);
    EXPECT_EQ(nextPrime(14), 17);
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(10), 11);
}

TEST(nextPrimeTests, middleOne) {
    EXPECT_EQ(nextPrime(2693), 2699);
    EXPECT_EQ(nextPrime(4441), 4447);
    EXPECT_EQ(nextPrime(7759), 7789);
    EXPECT_EQ(nextPrime(13121), 13127);
    EXPECT_EQ(nextPrime(21191), 21193);
}

TEST(sumPrimeTests, smallOne) {
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(5), 5);
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
    EXPECT_EQ(sumPrime(30), 129);
}

TEST(sumPrimeTests, middleOne) {
    EXPECT_EQ(sumPrime(75), 712);
    EXPECT_EQ(sumPrime(100), 1060);
    EXPECT_EQ(sumPrime(130), 1720);
    EXPECT_EQ(sumPrime(150), 2276);
    EXPECT_EQ(sumPrime(170), 2914);
}

TEST(sumPrimeTests, Task2Test) {
    EXPECT_EQ(142'913'828'922, sumPrime(2e6));
}
