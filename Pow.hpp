#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"

class Pow : public Base {
    public:
        Pow();
        virtual double evaluate(){0.0;} //placeholder
        virtual std::string stringify() { "**"; }//placeholder
};

#endif 
