
#include "mytime.h"
#include <gtest/gtest.h>

namespace{
    TEST(MyTime,Display){
        MyTime t1(1,2,3);
        MyTime t2;
        t2 = t1++;
        std::string ExpectedOut = "1:2:3\n";
        testing::internal::CaptureStdout();
        t2.display();
        std::string ActualOut = testing::internal::GetCapturedStdout();
        EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());


    }

}

