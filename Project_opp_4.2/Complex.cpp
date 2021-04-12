#include "Complex.h"

Complex::Complex()
{
	re = 0;
	im = 0;
}
Complex::Complex(double r = 0, double i = 0)
{
	re = r;
	im = i;
}
Complex::Complex(const Complex& r)
{
	re = r.re;
	im = r.im;
}
Complex::~Complex()
{ }
void Complex::SetRe(double r)
{
	re = r;
}
void Complex::SetIm(double i)
{
	im = i;
}

void Complex::Read()
{
	cout << " Re = "; cin >> re;
	cout << " Im = "; cin >> im;
	cout << endl;

}
void Complex::Print()
{
	cout << " Re = " << re << endl;
	cout << " Im = " << im << endl;

}
void Complex::Mul(Complex k)
{
	double tmp_re = re;
	re = tmp_re * k.re - im * k.im;
	im = tmp_re * k.im + im * k.re;
}
void Complex::Conj()
{
	re = re;
	im = -im;
}
void Complex::Add(Pair* value)
{
	Complex* t = dynamic_cast<Complex*>(value);
	if (t != 0)
	{
		re = re + t->re;
		im = im + t->im;
	}
}
void Complex::Sub(Pair* value)
{
	Complex* t = dynamic_cast<Complex*>(value);
	if (t != 0)
	{
		re = re - t->re;
		im = im - t->im;
	}
}
void Complex::Div(Pair* value)
{
	Complex* t = dynamic_cast<Complex*>(value);
	if (t != 0)
	{
		double r1 = re;
		double i1 = im;
		double r2 = t->re;
		double i2 = t->im;
		re = (r1 * r2 - i1 * i2) / (r2 * r2 + i2 * i2);
		im = (-r1 * i2 + i1 * r2) / (r2 * r2 + i2 * i2);
	}
}
bool Complex::Equ(Pair* value)
{
	Complex* t = dynamic_cast<Complex*>(value);
	bool result = false;
	if (t != 0)
	{
		if (re == t->re && im == t->im)
		{
			result = true;
		}
		
	}
	return result;
}