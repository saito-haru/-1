#include "Calculation.h"

//�v���g�^�C�v�錾
void SetX(float a, float b);
void SetY(float a, float b);

//�N���X�|�C���^
Calculation *x, *y;

//���C���֐�
int main()
{
	//�C���X�^���X�w�̏���
	x = new Calculation();
	SetX(5.0, 10.0);
	x->Disp();
	delete x;

	//�C���X�^���X�x�̏���
	y = new Calculation();
	SetY(8.0, 3.0);
	y->Disp();
	delete y;
}
//�C���X�^���X�w�̃A�N�Z�X�֐����Ă�
void SetX(float a, float b)
{
	x->SetA(a);
	x->SetB(b);
}
//�C���X�^���X�x�̃A�N�Z�X�֐����Ă�
void SetY(float a, float b)
{
	y->SetA(a);
	y->SetB(b);
}//����//5 + 10 = 15
//5 + 10 = -5
//8 + 3 = 11
//8 + 3 = 5