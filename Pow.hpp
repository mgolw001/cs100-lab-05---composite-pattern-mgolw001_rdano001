#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "math.h"
#include "op.hpp"
#include <string>

class Pow : public Base {
    public:
        Pow(Base*,Base*);
        double evaluate(){pow(leftOP->evaluate(),rightOP->evaluate());} 
        std::string stringify();
    private:
        Base*  leftOP;
        Base*  rightOP;
};

#endif 
