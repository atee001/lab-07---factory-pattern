#pragma once 

#include "gtest/gtest.h"
#include "../fact.hpp"

TEST(FactNegTest, Add_Eval) {
        char* str[4];

        str[0] = "./calculator";
        str[1] = "-54.245";
        str[2] = "+";
        str[3] = "-3.213";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->evaluate(), -57.458);
        delete temp;
}

TEST(FactNegTest, Sub_Eval) {
        char* str[4];
        str[0] = "./calculator";
        str[1] = "-54.245";
        str[2] = "-";
        str[3] = "-3.213";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->evaluate(), -51.032);
        delete temp;
}

TEST(FactNegTest, Mult_Eval) {
        char* str[4];

        str[0] = "./calculator";
        str[1] = "-3.2";
        str[2] = "*";
        str[3] = "-5.1";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->evaluate(), 16.32);
        delete temp;
}

TEST(FactNegTest, Div_Eval) {
        char* str[4];
        str[0] = "./calculator";
        str[1] = "-5.5";
        str[2] = "/";
        str[3] = "-1.1";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->evaluate(), 5);
        delete temp;
}

TEST(FactNegTest, Pow_Eval) {
        char* str[4];

        str[0] = "./calculator";
        str[1] = "-3.3";
        str[2] = "**";
        str[3] = "-2.0";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->evaluate(), pow(-3.3, -2.0));
        delete temp;
}

TEST(FactNegTest, All_Eval) {
        char* str[12];

        str[0] = "./calculator";
        str[1] = "3.3";
        str[2] = "+";
        str[3] = "2.2";
        str[4] = "-";
        str[5] = "-1.1";
        str[6] = "*";
        str[7] = "4.4";
	str[8] = "/";
	str[9] = "1.1";
        str[10] = "**";
        str[11] = "2.1";

        Base* temp = Fact().parse(str, 12);


        EXPECT_EQ(temp->evaluate(), pow(26.4, 2.1));
        delete temp;
}

TEST(FactNegTest, Add_Str) {
        char* str[4];

        str[0] = "./calculator";
        str[1] = "-54.245";
        str[2] = "+";
        str[3] = "-3.213";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->stringify(), "(-54.245+-3.213)");
        delete temp;
}

TEST(FactNegTest, Sub_Str) {
        char* str[4];
        str[0] = "./calculator";
        str[1] = "-54.245";
        str[2] = "-";
        str[3] = "-3.213";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->stringify(), "(-54.245--3.213)");
        delete temp;
}

TEST(FactNegTest, Mult_Str) {
        char* str[4];

        str[0] = "./calculator";
        str[1] = "-3.2";
        str[2] = "*";
        str[3] = "-5.1";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->stringify(), "(-3.2*-5.1)");
        delete temp;
}

TEST(FactNegTest, Div_Str) {
        char* str[4];
        str[0] = "./calculator";
        str[1] = "-5.5";
        str[2] = "/";
        str[3] = "-1.1";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->stringify(), "(-5.5/-1.1)");
        delete temp;
}

TEST(FactNegTest, Pow_Str) {
        char* str[4];

        str[0] = "./calculator";
        str[1] = "-3.3";
        str[2] = "**";
        str[3] = "-2";

        Base* temp = Fact().parse(str, 4);


        EXPECT_EQ(temp->stringify(), "(-3.3**-2)");
        delete temp;
}


TEST(FactNegTest, All_Str) {
        char* str[12];

        str[0] = "./calculator";
        str[1] = "3.3";
        str[2] = "+";
        str[3] = "2.2";
        str[4] = "-";
        str[5] = "1.1";
        str[6] = "*";
        str[7] = "4.4";
       	str[8] = "/";
	str[9] = "2.2";
	str[10] = "**";
	str[11] = "2";        
                                               
        Base* temp = Fact().parse(str, 12);


        EXPECT_EQ(temp->stringify(), "(((((3.3+2.2)-1.1)*4.4)/2.2)**2)");
        delete temp;
}

TEST(FactInvTest, EvalCompChar) {
	char* str[4];
	
	str[0] = "./calculator";
	str[1] = "1.0";
	str[2] = "+";
	str[3] = "n";

	Base* temp = Fact().parse(str, 4);

	EXPECT_EQ(temp, nullptr);
	delete temp;
}
