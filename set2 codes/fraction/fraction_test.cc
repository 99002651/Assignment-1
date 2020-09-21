
#include<iostream>
#include "fraction.h"
#include "gtest/gtest.h"
using namespace std;

TEST(fraction, ParametrizedConstructor) {
    fraction f1(6,2);
    std::string ExpectedOut="6\n";
    testing::internal::CaptureStdout();
    f1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(fraction,_plus) {
    fraction f1(6,2);
    fraction f2(3,1);
    fraction f3 = f1 +f2;
    std::string ExpectedOut="6\n";
    testing::internal::CaptureStdout();
    f3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(fraction,_minus) {
    fraction f1(6,2);
    fraction f2(3,1);
    fraction f3 = f1 - f2;
    std::string ExpectedOut="0\n";
    testing::internal::CaptureStdout();
    f3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(fraction,_mul) {
    fraction f1(6,2);
    fraction f2(3,1);
    fraction f3 = f1 * f2;
    std::string ExpectedOut="9\n";
    testing::internal::CaptureStdout();
    f3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(fraction,simplify){
    fraction f1(6,2);
    std::string ExpectedOut="2\n";
    testing::internal::CaptureStdout();
    f1.simplify();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(fraction,equal_){
    fraction f1(3,1);
    fraction f2(3,1);
    EXPECT_TRUE(f1==f2);
}
TEST(fraction,greater_){
    fraction f1(4,1);
    fraction f2(3,1);
    EXPECT_TRUE(f1>f2);
}
TEST(fraction,less_){
    fraction f1(3,1);
    fraction f2(2,1);
    EXPECT_TRUE(f2<f1);
}
