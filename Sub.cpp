#include "Sub.hpp"
Sub::Sub(Base* lop, Base* rop){
	leftOP = lop;
	rightOP = rop;
}

std::string Sub::stringify(){
	std::string s = "( " + leftOP->stringify() + " - " + rightOP->stringify()+" )"; 
	return s;
}
