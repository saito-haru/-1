#include "Figure.h"
#include <iostream>

//’ê•Óİ’è
void Figure ::SetTeihen(float f)
{
	teihen = f;
}

//‚‚³İ’è
void Figure::SetTakasa(float f)
{
	takasa = f;
}

//–ÊÏo—Í
void Figure::Disp() 
{
	std::cout << "–ÊÏ‚Í" << menseki << "‚Å‚·" << "\n" ;
}