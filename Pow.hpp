#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "math.h"
#include "op.hpp"
#include <string>

class Pow : public Base : public Op {
    public:
        Pow(Op,Op);
        double evaluate(){pow(leftOP.evaluate(),rightOP.evaluate());} 
        std::string stringify();
    private:
        Op leftOP;
        Op rightOP;
};

#endif 
