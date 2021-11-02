#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base {
    public:
        Sub();
        virtual double evaluate(){0.0;} //placeholder
        virtual std::string stringify() { "-"; }//placeholder
};

#endif 
