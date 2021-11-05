#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Mult : public Base {
    public:
        Mult(Base*,Base*);
        double evaluate(){return leftOP->evaluate() * rightOP->evaluate();}
        std::string stringify();
    private:
	      Base* leftOP;
	      Base* rightOP;
};

#endif  
