#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
    public:
        Div();
        virtual double evaluate(){0.0;} //placeholder
        virtual std::string stringify() { "/"; }//placeholder
};

#endif 
