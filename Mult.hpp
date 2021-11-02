#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    public:
        Mult();
        virtual double evaluate(){0.0;} //placeholder
        virtual std::string stringify() { "*"; }//placeholder
};

#endif 
