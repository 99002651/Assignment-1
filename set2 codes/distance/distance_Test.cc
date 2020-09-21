#include "distance.h"
#include <gtest/gtest.h>
TEST(distance,DisplayTest) {
    distance a1(10,20);
    std::string ExpectedOut="10'20";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
