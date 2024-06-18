#include <iostream>
#include "Circle.h"
int main()
{
	float m; //–ÊÏ
	float r = 5.0f; //”¼Œa
	Circle c; //ƒNƒ‰ƒX‚ÌƒCƒ“ƒXƒ^ƒ“ƒX‚ğì‚é
	m = c.Menseki(r);
	std::cout << "”¼Œa" << r << "‚Ì‰~‚Ì–ÊÏ‚Í" << m << "\n";
}

//Œ‹‰Ê
//”¼Œa5‚Ì‰~‚Ì–ÊÏ‚Í78.5