#include < iostream>
#include "Calclation.h"
//‘ã“ü
void Calculation::SetA(float a){
	A = a;
}
void Calculation::SetB(float b){
	B = b;
}
//ŒvŽZ‚µ‚Ä•\Ž¦
void Calculation::Disp(){
	std::cout << A << " + " << B << " = " << A + B << "\n";
	std::cout << A << " + " << B << " = " << A - B << "\n";
}