#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include "op.hpp"
class Div : public Base : public Op {
    public:
        Div(Op,Op);
        virtual double evaluate(){leftOP.evalutate()/rightOP.evaluate();}
        virtual std::string stringify() {"( " << leftOP.stringify()<< "/" << rightOP.stringify()>>" )"; }
    private:
	Op leftOP;
	Op rightOP;
};

#endif 
