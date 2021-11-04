#include "Pow.hpp"

Pow::Pow(Op lop, Op rop){
   leftOP=lop;
   rightOP=rop;
}

std::string Pow::stringify(){
   std::string s = "( " + leftOP.stringify() + "**" + rightOP.stringify() + " )";
   return std::s;
}
