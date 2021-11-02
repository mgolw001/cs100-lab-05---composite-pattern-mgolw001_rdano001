#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
    public:
        Div();
        virtual double evaluate(){"leftoperand".evalutate()/"rightoperand".evaluate();} //placeholder
        virtual std::string stringify() {"( " << "leftoperand".stringify()<< "/" << "rightoperand".stringify()>>" )"; }//placeholder
};

#endif 
