#ifndef __SEVENOPMOCK_HPP__
#define __SEVENOPMOCK_HPP__

#include "base.hpp"

class SevenOPMock : public Base {
    public:
        SevenOPMock();
        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.5"; }
};

#endif _
