#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "math.h"
class Pow : public Base {
    public:
        Pow();
        virtual double evaluate(){pow("leftOperand".evaluate(),"rightOPerand".evaluate());} //placeholder
        virtual std::string stringify() {"( " << "leftoperand".stringify() << "**" << "rightoperand".stringify() << " )" ; }//placeholder
};

#endif 
