#include "Calclation.h"
int main()
{
	float a = 42.195f, b = 3.14f;
	//クラスのインスタンスを作成
	Calculation x;
	//メンバ関数を呼び出す
	x.SetA(a); //ａの値を渡す
	x.SetB(b); //ｂの値を渡す
	x.Disp(); //計算して結果を表示
}//実行結果//42.195 + 3.14 = 45.335
//42.195 - 3.14 = 39.055