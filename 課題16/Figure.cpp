#include "Figure.h"
#include <iostream>

//底辺設定
void Figure ::SetTeihen(float f)
{
	teihen = f;
}

//高さ設定
void Figure::SetTakasa(float f)
{
	takasa = f;
}

//面積出力
void Figure::Disp() 
{
	std::cout << "面積は" << menseki << "です" << "\n" ;
}