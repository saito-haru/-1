#include "Calclation.h"
int main()
{
	float a = 42.195f, b = 3.14f;
	//�N���X�̃C���X�^���X���쐬
	Calculation x;
	//�����o�֐����Ăяo��
	x.SetA(a); //���̒l��n��
	x.SetB(b); //���̒l��n��
	x.Disp(); //�v�Z���Č��ʂ�\��
}//���s����//42.195 + 3.14 = 45.335
//42.195 - 3.14 = 39.055