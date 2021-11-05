#include "gtest/gtest.h"


#include "Div.hpp"
#include "NegativeOPMock.hpp"
#include "SevenOPMock.hpp"
#include "ZeroOPMock.hpp"
#include "base.hpp"

TEST(DivideTest,DividingBySameNum){
       Base* dividend = new NegativeOPMock();
       Base* divisor = new NegativeOPMock();
       Base* divide = new Div(dividend,divisor);
       double result = divide->evaluate();
       EXPECT_EQ(result,1);
}

TEST(DivideTest,DividingByDifNum){
       Base* dividend = new NegativeOPMock();
       Base* divisor = new SevenOPMock();
       Base* divide = new Div(dividend,divisor);
       double result = divide->evaluate();
       EXPECT_EQ(result,-0.2);
}

TEST(DivideTest,DividingWithZero){
       Base* dividend = new ZeroOPMock();
       Base* divisor = new SevenOPMock();
       Base* divide = new Div(dividend,divisor);
       double result = divide->evaluate();
       EXPECT_EQ(result,0);
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
