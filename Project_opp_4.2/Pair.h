#pragma once

class Pair
{
public:
	virtual void Read() = 0;
	virtual void Print() = 0;
	virtual void Add(Pair* value) = 0;
	virtual void Sub(Pair* value) = 0;
	virtual void Div(Pair* value) = 0;
	virtual bool Equ(Pair* value) = 0;
};

