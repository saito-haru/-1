#include <iostream>
#include "Data.h"
//���C���֐�
int main() {
	//�ϐ��@�ɓK���Ȓl����������
	int i;
	std::cin >> i;
	//Data �N���X�̃C���X�^���X�����
	Data x;
	//�����o�֐����Ăяo��
	x.SetValue(i); //�ϐ��@�̒l��n���i�A�N�Z�X�֐��j
	x.Disp(); //�\������
}