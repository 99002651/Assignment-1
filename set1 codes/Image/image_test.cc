
#include "image.h"
#include <gtest/gtest.h>
TEST(Image,ParameterizedConstructor) {
    Image a1(1,2,10,23);

    EXPECT_EQ(2,a1.scale(2));
     EXPECT_EQ(1,a1.getx());

}

TEST(Image,DisplayTest) {
    Image a1(10,20,30,40);
    std::string ExpectedOut="10,20,30,40\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
