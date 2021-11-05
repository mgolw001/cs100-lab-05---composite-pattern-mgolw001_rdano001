#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Add : public Base {
    public:
        Add(Base*,Base*);
        double evaluate(){return leftOP->evaluate() + rightOP->evaluate();}
        std::string stringify();
    private:
	      Base* leftOP;
	      Base* rightOP;
};

#endif 
