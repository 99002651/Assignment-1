
#include "complex.h"
#include <gtest/gtest.h>
namespace{
TEST(Complex,PostIncOperator) {
    Complex a1(1,2);
    std:: string ExpectedOut = "2+i2\n";
    testing::internal::CaptureStdout();
    a1.operator++(2);
    a1.display();
    std::string ActualOut = testing :: internal :: GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(Complex,DisplayTest) {
    Complex a1(1,2);
    std::string ExpectedOut="1+i2\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
}
