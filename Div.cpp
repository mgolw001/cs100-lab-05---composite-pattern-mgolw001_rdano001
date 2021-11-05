#include "Div.hpp"
Div::Div(Base* lop, Base* rop){
	leftOP = lop;
	rightOP = rop;
}

std::string Div::stringify(){
	std::string s = "( " + leftOP->stringify() + " / " + rightOP->stringify()+" )"; 
	return s;
}
