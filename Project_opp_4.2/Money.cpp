#include "Money.h"

Money::Money()
{
	hrn = 0;
	kop = 0;
}
Money::Money(long h, unsigned char k)
{
	SetHrn(h);
	SetKop(k);
}
Money::Money(const Money& m)
{
	hrn = m.hrn;
	kop = m.kop;
}
bool Money::SetHrn(long value)
{
	if (value >= 0)
	{
		hrn = value;
		return true;
	}
	else
	{
		return false;
	}
}
bool Money::SetKop(unsigned char value)
{
	if (value >= 0 && value < 100)
	{
		kop = value;
		return true;
	}
	else
	{
		return false;
	}
}

void Money::Read()
{
	double value;

	cout << " Summa = "; cin >> value;
	do
	{
		hrn = floor(value);
		kop = round((value - hrn) * 100);
	} while (!(SetHrn(hrn) && SetKop(kop)));

}

void Money::Print()
{
	cout << " Summa : " << hrn <<","<< (int)kop <<" hrn" << endl;

}


void Money::Add(Pair* value)
{
	Money* t = dynamic_cast<Money*>(value);
	if (t != 0)
	{
		Money result;
		double tmp = MoneyToDoble() + t->MoneyToDoble();
		result.DoubleToMoney(tmp);
		hrn = result.hrn;
		kop = result.kop;
	}
	
}
void Money::Sub(Pair* value)
{
	Money* t = dynamic_cast<Money*>(value);
	if (t != 0)
	{
		Money result;
		double tmp = MoneyToDoble() - t->MoneyToDoble();
		result.DoubleToMoney(tmp);
		hrn = result.hrn;
		kop = result.kop;
	}

}
void Money::Div(Pair* value)
{
	Money* t = dynamic_cast<Money*>(value);
	if (t != 0)
	{
		if (t->MoneyToDoble() > 0)
		{
			Money result;
			double tmp = MoneyToDoble() / t->MoneyToDoble();
			result.DoubleToMoney(tmp);
			hrn = result.hrn;
			kop = result.kop;
		}
	}

}
bool Money::Equ(Pair* value)
{
	Money* t = dynamic_cast<Money*>(value);
	bool result = false;
	if (t != 0)
	{
		
		if (MoneyToDoble() == t->MoneyToDoble())
		{
			result = true;
		}
		
	}
	return result;
}

bool Money::RiseSumma(double value)
{
	bool isCorrect = false;
	if (value >= 0)
	{
		DoubleToMoney(MoneyToDoble() * value);
		isCorrect = true;
	}
	return isCorrect;
}
bool Money::DivSumma(double value)
{
	bool isCorrect = false;
	if (value > 0)
	{
		DoubleToMoney(MoneyToDoble() / value);
		isCorrect = true;
	}
	return isCorrect;
}
double Money::MoneyToDoble() const
{
	return (double)hrn + kop / 100.0;
}
void Money::DoubleToMoney(double value)
{
	hrn = trunc(value);
	kop = trunc(abs((value - hrn)) * 100);
}