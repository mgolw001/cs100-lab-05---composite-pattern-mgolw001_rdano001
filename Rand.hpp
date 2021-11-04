#ifndef __RAND_HPP__
#define __RAND_HPP__
#include <stdlib.h>
#include <time.h>
#include <string>
#include "base.hpp"

class Rand : public Base {
    public:
        Rand();
        double evaluate(){return val;}
        std::string stringify();
    private:
	double val;
};

#endif
