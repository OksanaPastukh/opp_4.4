#pragma once
#include "Pair.h"
#include <iostream>
using namespace std;

class Money:public Pair
{
	long hrn;
	unsigned char kop;
	double MoneyToDoble() const;
	void DoubleToMoney(double);
public:
	Money();
	Money(long, unsigned char);
	Money(const Money&);
	bool SetHrn(long);
	bool SetKop(unsigned char);
	long GetHrn() const { return hrn; }
	unsigned char GetKop() const { return kop; }

	virtual void Read();
	virtual void Print();
	virtual void Add(Pair* value);
	virtual void Sub(Pair* value);
	virtual void Div(Pair* value);
	virtual bool Equ(Pair* value);

	bool RiseSumma(double);
	bool DivSumma(double);
};

