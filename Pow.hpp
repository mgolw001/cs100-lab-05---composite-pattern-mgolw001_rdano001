#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "math.h"
#include "op.hpp"
class Pow : public Base : public Op {
    public:
        Pow(Op,Op);
        virtual double evaluate(){pow(leftOP.evaluate(),rightOP.evaluate());} //placeholder
        virtual std::string stringify() {"( " << leftOP.stringify() << "**" << rightOP.stringify() << " )" ; }//placeholder
    private:
        Op leftOP;
        Op rightOP;
};

#endif 
