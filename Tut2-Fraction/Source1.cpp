#include<iostream>
#include "Fraction.h"
using namespace std;
int main(void)
{
	Fraction frac1(1, 2);
	Fraction frac2(4, 2);
	Fraction frac3 = frac1.add(frac2);
	frac2.print();
	system("pause");
}