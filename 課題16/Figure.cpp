#include "Figure.h"
#include <iostream>

//��Ӑݒ�
void Figure ::SetTeihen(float f)
{
	teihen = f;
}

//�����ݒ�
void Figure::SetTakasa(float f)
{
	takasa = f;
}

//�ʐϏo��
void Figure::Disp() 
{
	std::cout << "�ʐς�" << menseki << "�ł�" << "\n" ;
}