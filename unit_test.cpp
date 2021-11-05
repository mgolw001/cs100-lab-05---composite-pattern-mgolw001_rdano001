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

TEST(MultTest,MultiplyingBySameNum){
       Base* element1 = new NegativeOPMock();
       Base* element2 = new NegativeOPMock();
       Base* multiply = new Mult(element1,element2);
       double result = multiply->evaluate();
       EXPECT_EQ(result,2.25);
}

TEST(MultTest,MultiplyingByDifNum){
       Base* element1 = new NegativeOPMock();
       Base* element2 = new SevenOPMock();
       Base* multiply = new Mult(element1,element2);
       double result = multiply->evaluate();
       EXPECT_EQ(result,-11.25);
}

TEST(MultTest,MultiplyingWithZero){
       Base* element1 = new ZeroOPMock();
       Base* element2 = new SevenOPMock();
       Base* multiply = new Mult(element1,element2);
       double result = multiply->evaluate();
       EXPECT_EQ(result,0);

}
TEST(AddTest,AddNegNums){
       Base* element1 = new NegativeOPMock();
       Base* element2 = new NegativeOPMock();
       Base* add = new Add(element1,element2);
       double result = add->evaluate();
       EXPECT_EQ(result,-3.0);
}

TEST(AddTest,AddPosNums){
       Base* element1 = new ThreeOPMock();
       Base* element2 = new SevenOPMock();
       Base* add = new Add(element1,element2);
       double result = add->evaluate();
       EXPECT_EQ(result,10.5);
}

TEST(AddTest,AddWithZero){
       Base* element1 = new ZeroOPMock();
       Base* element2 = new SevenOPMock();
       Base* add = new Add(element1,element2);
       double result = add->evaluate();
       EXPECT_EQ(result,7.5);

}

TEST(SubTest,SubSameNegNums){
       Base* element1 = new NegativeOPMock();
       Base* element2 = new NegativeOPMock();
       Base* subtract = new Sub(element1,element2);
       double result = subtract->evaluate();
       EXPECT_EQ(result,0);
}

TEST(SubTest,SubPosNums){
       Base* element1 = new ThreeOPMock();
       Base* element2 = new SevenOPMock();
       Base* subtract = new Sub(element1,element2);
       double result = subtract->evaluate();
       EXPECT_EQ(result,-4.5);
}

TEST(SubTest,SubWithZero){
       Base* element1 = new ZeroOPMock();
       Base* element2 = new SevenOPMock();
       Base* subtract = new Sub(element1,element2);
       double result = subtract->evaluate();
       EXPECT_EQ(result,-7.5);

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
