#include "gtest/gtest.h"

#include "Pow.hpp"
#include "OneOPMock.hpp"
#include "ThreeOPMock.hpp"
#include "ZeroOPMock.hpp"
#include "base.hpp"

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
