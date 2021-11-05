#include "Pow.hpp"

Pow::Pow(Base* lop, Base* rop){
   leftOP=lop;
   rightOP=rop;
}

std::string Pow::stringify(){
   std::string s = "( " + leftOP->stringify() + "**" + rightOP->stringify() + " )";
   return s;
}
