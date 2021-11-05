#ifndef __THREEOPMOCK_HPP__
#define __THREEOPMOCK_HPP__

#include "base.hpp"

class ThreeOPMock : public Base {
    public:
        ThreeOPMock(): Base() { }
        virtual double evaluate() { return 3; }
        virtual std::string stringify() { return "3.0"; }
};

#endif 
