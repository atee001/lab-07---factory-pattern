
#pragma once

#include "gtest/gtest.h"
#include "../fact.cpp"

TEST(FactDoubleTest, Add) {
        char* str[4];

        str[0] = "./calculator";
        str[1] = "54.245";
        str[2] = "+";
        str[3] = "3.213";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->evaluate(), 57.458);
}

TEST(FactDoubleTest, Sub) {
        char* str[4];
        str[0] = "./calculator";
        str[1] = "54.245";
        str[2] = "-";
        str[3] = "3.213";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->evaluate(), 5);
}


