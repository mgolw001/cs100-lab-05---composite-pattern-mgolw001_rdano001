#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"

class Rand : public Base {
    public:
        Rand();//placeholder
        virtual double evaluate(){0.0;}
        virtual std::string stringify() { ""; }
};

#endif
