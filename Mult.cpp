#include "Mult.hpp"
Mult::Mult(Base* lop, Base* rop){
	leftOP = lop;
	rightOP = rop;
}

std::string Mult::stringify(){
	std::string s = "( " + leftOP->stringify() + " * " + rightOP->stringify()+" )"; 
	return s;
}
