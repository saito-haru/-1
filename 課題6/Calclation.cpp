#include < iostream>
#include "Calclation.h"
//���
void Calculation::SetA(float a){
	A = a;
}
void Calculation::SetB(float b){
	B = b;
}
//�v�Z���ĕ\��
void Calculation::Disp(){
	std::cout << A << " + " << B << " = " << A + B << "\n";
	std::cout << A << " + " << B << " = " << A - B << "\n";
}