#ifndef __ONEOPMOCK_HPP__
#define __ONEOPMOCK_HPP__

#include "base.hpp"

class OneOPMock : public Base {
    public:
        OneOPMock(): Base() { }
        virtual double evaluate() { return 1; }
        virtual std::string stringify() { return "1"; }
};

#endif 
