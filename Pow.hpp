#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "math.h"
class Pow : public Base {
    public:
        Pow();
        virtual double evaluate(){ pow("leftOP".evaulate(),"rightOP".evaluate()); } //placeholder
        virtual std::string stringify() { "LeftOP".stringify() + " ** " + "RightOP".stringify(); }//placeholder
};

#endif 
