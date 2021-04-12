#pragma once
#include "Pair.h"
#include <iostream>
using namespace std;
class Complex:public Pair
{
	double re, im;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	~Complex();
	void SetRe(double);
	void SetIm(double);
	double GetRe() const { return re; }
	double GetIm() const { return im; }

	virtual void Read();
	virtual void Print();

	virtual void Add(Pair* value);
	virtual void Sub(Pair* value);
	virtual void Div(Pair* value);
	virtual bool Equ(Pair* value);
	void Mul(Complex value);
	void Conj();
};

