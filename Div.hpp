#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Div : public Base {
    public:
        Div(Base*,Base*);
        double evaluate(){return leftOP->evaluate()/rightOP->evaluate();}
        std::string stringify();
    private:
	      Base* leftOP;
	      Base* rightOP;
};

#endif 
