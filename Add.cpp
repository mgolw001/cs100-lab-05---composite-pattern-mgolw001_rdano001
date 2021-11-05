#include "Add.hpp"
Add::Add(Base* lop, Base* rop){
	leftOP = lop;
	rightOP = rop;
}

std::string Add::stringify(){
	std::string s = "( " + leftOP->stringify() + " + " + rightOP->stringify()+" )"; 
	return s;
}
