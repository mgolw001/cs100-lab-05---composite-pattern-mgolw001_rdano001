#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Sub : public Base {
    public:
        Sub(Base*,Base*);
        double evaluate(){return leftOP->evaluate() - rightOP->evaluate();}
        std::string stringify();
    private:
	      Base* leftOP;
	      Base* rightOP;
};

#endif  
