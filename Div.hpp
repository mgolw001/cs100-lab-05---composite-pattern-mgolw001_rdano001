#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
    public:
        Div();
        virtual double evaluate(){"leftop".evaluate()/"rightop".evaulate();} //placeholder
        virtual std::string stringify() { "( " + "leftOp".stringify() + " / " + "rightOp".stringify() + " )" ; }//placeholder
};

#endif 
