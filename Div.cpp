#include "Div.hpp"
Div::Div(Op lop, Op rop){
	leftOP = lop;
	rightOP = rop;
}

std::string Div::stringify(){
	std::string s = "( " + leftOP.stringify() + " / " + rightOP.stringify()+" )"; 
	return std::s;
}
