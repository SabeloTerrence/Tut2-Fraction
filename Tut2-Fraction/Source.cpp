#include <iostream>
#include<iomanip>
#include "Fraction.h"
using namespace std;

ostream &operator<<(ostream &output, Fraction &fraction)
{
	output << fraction.numerator << "/" << fraction.denominator;
	return output;
}
istream &operator>>(istream &input, Fraction &fraction)
{
	input >> fraction.numerator;
	input >> fraction.denominator;
}
Fraction::Fraction(int num, int denom)
{
	setFraction(num, denom);
}
Fraction::~Fraction()
{
}
void Fraction::setFraction(int n, int d)
{
	if (d == 0)
	{
		d = 1;
	}
	getFraction(n, d);
}
void Fraction::getFraction(int nu, int de)
{
	nu = numerator;
	de = denominator;
}
Fraction Fraction::add(Fraction b)
{
	Fraction temp(numerator, denominator);
	temp.numerator = numerator + b.numerator;
	if (denominator != b.denominator)
	{
		temp.denominator = denominator * b.denominator;

	}
	else{
		temp.denominator;
	}
	return temp;
}
Fraction Fraction::subtract(Fraction other)
{
	Fraction temp(numerator, denominator);
	temp.numerator = numerator - other.numerator;
	if (denominator != other.denominator)
	{
		temp.denominator = denominator * other.denominator;

	}
	else{
		temp.denominator;
	}
	return temp;
}
Fraction Fraction::multiply(Fraction other)
{
	Fraction tmp(numerator, denominator);
	tmp.numerator = numerator * other.numerator;
	tmp.denominator = denominator * other.denominator;

	return tmp;
}
Fraction Fraction::divide(Fraction other)
{
	Fraction tmp(numerator, denominator);
	tmp.numerator = numerator * other.denominator;
	tmp.denominator = denominator * other.numerator;

	return tmp;
}
void Fraction::print()
{
	int quotient = numerator % denominator;
	cout << quotient << endl;
}