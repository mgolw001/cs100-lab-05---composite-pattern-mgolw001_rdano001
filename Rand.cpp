#include "Rand.hpp"
#include <string>
Rand::Rand(){
	srand(time(NULL));
	double randOperand = rand()%100;
	val = randOperand;
}

std::string Rand::stringify(){
	std::string s = std:: to_string(val);
	return s;
}


