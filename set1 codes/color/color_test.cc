
#include "color.h"
#include <gtest/gtest.h>


TEST(color,ParameterizedConstructor) {
    color a1(100,200,300);

    EXPECT_EQ(100,a1.redcolor());
    EXPECT_EQ(200,a1.bluecolor());

    EXPECT_EQ(300,a1.greencolor());
    EXPECT_EQ(155,a1.invert());


}
