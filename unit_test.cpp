#include "gtest/gtest.h"


#include "Div.hpp"
#include "NegativeOPMock.hpp"
#include "base.hpp"

TEST(TESTNAME,TESTDESCRIPT){
       Base* dividend = new NegativeOPMock();
       Base* divisor = new NegativeOPMock();
       Base* divide = new Div(dividend,divisor);
       double result = divide->evaluate();
       EXPECT_EQ(result,1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
