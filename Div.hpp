#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>
class Div : public Base : public Op {
    public:
        Div(Op,Op);
        double evaluate(){return leftOP.evalutate()/rightOP.evaluate();}
        std::string stringify();
    private:
	Op leftOP;
	Op rightOP;
};

#endif 
