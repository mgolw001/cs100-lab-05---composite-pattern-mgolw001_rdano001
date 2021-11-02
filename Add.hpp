#ifndef __ADD__HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base {
    public:
        Add();
        virtual double evaluate(){0.0;} //placeholder
        virtual std::string stringify() { "+"; }//placeholder
};

#endif 
