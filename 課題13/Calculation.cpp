#include < iostream>
#include "Calculation.h"
//代入
void Calculation::SetA(float a) {
	A = a;
}
void Calculation::SetB(float b) {
	B = b;
}
//計算して表示
void Calculation::Disp() {
	std::cout << A << " + " << B << " = " << A + B << "\n";
	std::cout << A << " + " << B << " = " << A - B << "\n";
}