#include "currency.h"
#include <gtest/gtest.h>
namespace{
TEST(Currency,DisplayTest) {
    Currency a1(10,20);
    std::string ExpectedOut="10'20";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(Currency,Display){
        Currency t1(1,90);
        t1++;
        std::string ExpectedOut = "1'91";
        testing::internal::CaptureStdout();
        t1.display();
        std::string ActualOut = testing::internal::GetCapturedStdout();
        EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


    }
}
