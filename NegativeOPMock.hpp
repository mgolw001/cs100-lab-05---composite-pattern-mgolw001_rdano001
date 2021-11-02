#ifndef __NEGATIVEOPMOCK_HPP__
#define __NEGATIVEOPMOCK_HPP__

#include "base.hpp"

class NegativeOPMock : public Base {
    public:
        NegativeOPMock();
        virtual double evaluate() { return -1.5; }
        virtual std::string stringify() { return "-1.5"; }
};

#endif 
