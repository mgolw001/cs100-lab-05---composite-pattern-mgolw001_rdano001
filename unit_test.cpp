#include "gtest/gtest.h"


#include "Div.hpp"
#include "NegativeOPMock.hpp"
#include "SevenOPMock.hpp"
#include "ZeroOPMock.hpp"
#include "base.hpp"
#include "Pow.hpp"
#include "OneOPMock.hpp"
#include "ThreeOPMock.hpp"
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

TEST(PowTest,RaisedBySameNum){
       Base* bas = new ThreeOPMock();
       Base* power = new ThreeOPMock();
       Base* exponent = new Pow(bas,power);
       double result = exponent->evaluate();
       EXPECT_EQ(result,27);
}

TEST(PowTest,RaisedByDifNum){
       Base* bas = new ThreeOPMock();
       Base* power = new OneOPMock();
       Base* exponent = new Pow(bas,power);
       double result = exponent->evaluate();
       EXPECT_EQ(result,3);
}

TEST(PowTest,RaisedByZero){
       Base* bas = new OneOPMock();
       Base* power = new ZeroOPMock();
       Base* exponent = new Pow(bas,power);
       double result = exponent->evaluate();
       EXPECT_EQ(result,1);

}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
