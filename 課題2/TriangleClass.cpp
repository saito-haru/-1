/*
	TriangleClass.cpp
	TriangleClass�N���X�̊e�����o�֐����`
*/

//�w�b�_���C���N���[�h
#include <iostream>
#include "TriangleClass.h"

//��ӂƍ����̒l��������֐�
void TriangleClass::Input() 
{
	teihen = 20.0f;
	takasa = 15.0f;
}

//�O�p�`�̖ʐς����߂�֐�
void TriangleClass::Calc() 
{
	menseki = teihen * takasa / 2.0f;
}

//���ʂ��o�͂���֐�
void TriangleClass::Disp() 
{
	std::cout << "�O�p�`�̖ʐρ�" << menseki << "^\n";
}