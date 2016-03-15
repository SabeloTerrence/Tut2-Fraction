#ifndef FRACTION_H
#define FRACTION_H
#include <iomanip>
#include<iostream>
using namespace std;

class Fraction{
	friend ostream &operator<<(ostream &, Fraction &);
	friend istream &operator>>(istream &, Fraction &);
public:
	Fraction(int, int); //constructor
	~Fraction(); //destructor
	void setFraction(int, int);
	void getFraction(int, int);
	Fraction add(Fraction);
	Fraction subtract(Fraction);
	Fraction multiply(Fraction);
	Fraction divide(Fraction);
	void print();

private:
	int numerator;
	int denominator;
};
#endif